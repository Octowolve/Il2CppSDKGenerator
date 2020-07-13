#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class IXmlSchemaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "IXmlSchemaInfo"));
	}


	template <typename T = bool> T get_IsDefault() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsNil() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_MemberType() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaAttribute() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaElement() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_SchemaType() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Validity() {
		return ((T (*)(IXmlSchemaInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
