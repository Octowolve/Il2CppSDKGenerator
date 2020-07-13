using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using dnlib.DotNet;
using dnlib.IO;
using dnlib.Utils;
using System.Text.RegularExpressions;
namespace Il2CppSDK
{
    class Program
    {
        static Dictionary<string, int> m_DuplicateMethodTable = new Dictionary<string, int>();
        static string OUTPUT_DIR = "SDK";
        static ModuleDefMD currentModule = null;
        static StreamWriter currentFile = null;

        static string Il2CppTypeToCppType(TypeSig type)
        {
            if (type.IsGenericInstanceType)
            {
                return FormatIl2CppGeneric(type);
            }

            string result = "uintptr_t";

            if (type.FullName.Equals("System.Int8"))
                result = "int8_t";

            if (type.FullName.Equals("System.UInt8"))
                result = "uint8_t";

            if (type.FullName.Equals("System.Int16"))
                result = "int16_t";

            if (type.FullName.Equals("System.UInt16"))
                result = "uint16_t";

            if (type.FullName.Equals("System.Int32"))
                result = "int32_t";

            if (type.FullName.Equals("System.UInt32"))
                result = "uint32_t";

            if (type.FullName.Equals("System.Int64"))
                result = "int64_t";

            if (type.FullName.Equals("System.UInt64"))
                result = "uint64_t";

            if (type.FullName.Equals("System.Single"))
                result = "float";

            if (type.FullName.Equals("System.Double"))
                result = "double";

            if (type.FullName.Equals("System.Boolean"))
                result = "bool";

            if (type.FullName.Equals("System.Char"))
                result = "char";

            if (type.FullName.Equals("System.Byte"))
                result = "unsigned char";

            if (type.FullName.Equals("System.SByte"))
                result = "signed char";

            if (type.FullName.Equals("System.String"))
                result = "Il2CppString*";

            if (type.FullName.Equals("UnityEngine.Vector2"))
                result = "Il2CppVector2";

            if (type.FullName.Equals("UnityEngine.Vector3"))
                result = "Il2CppVector3";

            if (type.FullName.Equals("UnityEngine.Quaternion"))
                result = "Il2CppQuaternion";

            if (type.FullName.Equals("UnityEngine.Rect"))
                result = "Il2CppRect";

            if (type.FullName.Equals("System.Void"))
                result = "void";

            if (type.FullName.Contains("[]"))
                result = "Il2CppArray<" + result + ">*";

            return result;
        }
        static string GetFieldOffset(FieldDef field)
        {
            foreach (var attr in field.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("FieldOffsetAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string GetMethodOffset(MethodDef method)
        {
            foreach (var attr in method.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("AddressAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string FormatIl2CppGeneric(TypeSig type)
        {
            string result = "";
            if (type.GetName().StartsWith("List"))
            {
                result = "Il2CppList<";
            }
            else
            if (type.GetName().StartsWith("Dictionary"))
            {
                result = "Il2CppDictionary<";
            }
            else
            {
                return "void*";
            }
            List<string> args = new List<string>();
            foreach (var arg in type.ToGenericInstSig().GenericArguments)
            {
                if (arg.IsGenericInstanceType)
                {
                    args.Add(FormatIl2CppGeneric(arg));
                }
                else args.Add(Il2CppTypeToCppType(arg));
            }
            result += string.Join(", ", args.ToArray());
            result += ">*";
            return result;
        }
        static string FormatToValidClassname(string className)
        {
            Regex rgx = new Regex("[^a-zA-Z0-9]");
            return rgx.Replace(className, "");
        }

        static void ParseFields(TypeDef clazz)
        {
            foreach(var rid in currentModule.Metadata.GetFieldRidList(clazz.Rid))
            {
                var field = currentModule.ResolveField(rid);

                if(field == null)
                {
                    continue;
                }

                var fieldName = field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_");

                if (fieldName.Equals("auto") || fieldName.Equals("register"))
                    fieldName += "_";

                var fieldType = Il2CppTypeToCppType(field.FieldType);
                var fieldOffset = GetFieldOffset(field);

                currentFile.Write(string.Format("\ttemplate <typename T = {0}>", fieldType));
                currentFile.WriteLine(string.Format(" {0}{1}& {2}() {{", (field.IsStatic ? "static " : ""), "T", fieldName));
                if(field.IsStatic)
                {
                    currentFile.WriteLine(string.Format("\t\treturn *({0}*)((uintptr_t)StaticClass()->static_fields + {1});", "T", fieldOffset));
                } 
                else
                {
                    currentFile.WriteLine(string.Format("\t\treturn *({0}*)((uintptr_t)this + {1});", "T", fieldOffset));
                }
                currentFile.WriteLine("\t}");
            }
        }
        static void ParseMethods(TypeDef clazz)
        {
            foreach (var rid in currentModule.Metadata.GetMethodRidList(clazz.Rid))
            {
                var method = currentModule.ResolveMethod(rid);

                if (method == null || method.IsConstructor || method.IsStaticConstructor)
                {
                    continue;
                }

                var methodName = method.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");

                if (methodName.Equals("auto") || methodName.Equals("register"))
                    methodName += "_";

                var methodType = Il2CppTypeToCppType(method.ReturnType);
                var methodOffset = GetMethodOffset(method);

                string methodKey = clazz.Namespace + clazz.FullName + method.Name;
                if (m_DuplicateMethodTable.ContainsKey(methodKey))
                {
                    methodName += "_" + m_DuplicateMethodTable[methodKey]++;
                } else
                {
                    m_DuplicateMethodTable.Add(methodKey, 1);
                }

                List<string> methodParams = new List<string>();
                List<string> paramTypes = new List<string>();
                List<string> paramNames = new List<string>();

                foreach (var param in method.Parameters)
                {
                    if (param.IsNormalMethodParameter)
                    {
                        var paramType = Il2CppTypeToCppType(param.Type);

                        if (param.HasParamDef)
                        {
                            if (param.ParamDef.IsOut)
                            {
                                paramType += "*";
                            }
                        }

                        if (param.Name.Equals("auto") || param.Name.Equals("register"))
                            param.Name += "_";

                        paramTypes.Add(paramType);
                        paramNames.Add(param.Name);

                        methodParams.Add(paramType + " " + param.Name);
                    }
                }

                currentFile.Write(string.Format("\ttemplate <typename T = {0}>", methodType));
                currentFile.WriteLine(string.Format(" {0}{1} {2}({3}) {{", (method.IsStatic ? "static " : ""), "T", methodName, string.Join(", ", methodParams)));
                if (!method.IsStatic)
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)({1}*, {2}))(Il2CppBase() + {3}))(this, {4});", "T", FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    } else currentFile.WriteLine("\t\treturn (({0} (*)({1}*))(Il2CppBase() + {3}))(this);", "T", FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset);
                }
                else
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)(void *, {1}))(Il2CppBase() + {2}))(0, {3});", "T", string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                    else
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)(void *))(Il2CppBase() + {2}))(0);", "T", string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                }
                currentFile.WriteLine("\t}");
            }
        }
        static void ParseClass(TypeDef clazz)
        {
            var module = clazz.Module;
            var namespaze = clazz.Namespace;
            var className = (string)clazz.Name;
            var classFilename = string.Concat(className.Split(Path.GetInvalidFileNameChars()));
            var validClassname = FormatToValidClassname(className);
            
            currentFile.WriteLine("#pragma once");
            currentFile.WriteLine("#include <Il2Cpp/Il2Cpp.h>");

            bool useNamespace = namespaze.Length > 0;

            if (useNamespace)
            {
                currentFile.WriteLine("namespace " + namespaze + " {");
            }

            currentFile.WriteLine();

            currentFile.WriteLine("class " + validClassname);
            currentFile.WriteLine("{");
            currentFile.WriteLine("public: ");

            currentFile.WriteLine();

            currentFile.WriteLine("\tstatic Il2CppClass *StaticClass() {");
            currentFile.WriteLine(string.Format("\t\treturn (Il2CppClass *)(Il2Cpp::GetClass(\"{0}\", \"{1}\", \"{2}\"));", module.Name, namespaze, className));
            currentFile.WriteLine("\t}");

            currentFile.WriteLine();

            ParseFields(clazz);

            currentFile.WriteLine();

            ParseMethods(clazz);

            currentFile.WriteLine();

            currentFile.WriteLine("};");
            currentFile.WriteLine();
            currentFile.WriteLine("}");

        }
        static void ParseClasses()
        {
            if (currentModule == null)
                return;

            foreach(var rid in currentModule.Metadata.GetTypeDefRidList())
            {
                var type = currentModule.ResolveTypeDef(rid);

                if (type == null)
                    continue;

                var module = type.Module;
                var namespaze = type.Namespace.Replace("<", "").Replace(">", "");
                var className = (string)type.Name.Replace("<", "").Replace(">", "");
                var classFilename = string.Concat(className.Split(Path.GetInvalidFileNameChars()));
                var validClassname = FormatToValidClassname(className);

                string outputPath = OUTPUT_DIR;
                outputPath += "\\" + module.Name;

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                if (namespaze.Length > 0)
                {
                    File.AppendAllText(outputPath + "\\" + namespaze + ".h", string.Format("#include \"Includes/{0}/{1}.h\"\r\n", namespaze, classFilename));
                }
                else
                {
                    File.AppendAllText(outputPath + "\\-.h", string.Format("#include \"Includes/{0}.h\"\r\n", classFilename));
                }

                outputPath += "\\Includes";

                if(namespaze.Length > 0)
                {
                    outputPath += "\\" + namespaze;
                }

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                outputPath += "\\" + classFilename + ".h";

                currentFile = new StreamWriter(outputPath);

                ParseClass(type);
                currentFile.Close();
            }
        }
        static void ParseModule(string moduleFile)
        {
            Console.WriteLine("Generating SDK for {0}...", Path.GetFileName(moduleFile));

            ModuleContext modCtx = ModuleDef.CreateModuleContext();
            currentModule = ModuleDefMD.Load(moduleFile, modCtx);

            string moduleOutput = OUTPUT_DIR + "\\" + currentModule.Name;

            if (!Directory.Exists(moduleOutput))
                Directory.CreateDirectory(moduleOutput);

            ParseClasses();
        }
        static void Main(string[] args)
        {
            if(args.Length < 1)
            {
                Console.WriteLine("Invalid Arguments!");
                return;
            }

            if (Directory.Exists(OUTPUT_DIR))
                Directory.Delete(OUTPUT_DIR, true);

            if (Directory.Exists(args[0]))
            {
                foreach(var file in Directory.GetFiles(args[0]))
                {
                    ParseModule(file);
                }
            }
            else
            {
                ParseModule(args[0]);
            }
        }
    }
}
;