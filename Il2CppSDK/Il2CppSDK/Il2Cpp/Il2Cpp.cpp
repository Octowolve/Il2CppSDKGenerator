//
// Created by aimar on 12/28/2019.
//

#include "../Includes.h"
#include "Il2Cpp.h"
#include "SymbolFinder/SymbolFinder.h"
#define IL2CPP__TAG "Il2CppSdk"
#define IL2CPP_LOGI(...) __android_log_print(ANDROID_LOG_INFO,IL2CPP__TAG,__VA_ARGS__)
#define IL2CPP_LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,IL2CPP__TAG,__VA_ARGS__)
#define IL2CPP_LOGW(...) __android_log_print(ANDROID_LOG_WARN,IL2CPP__TAG,__VA_ARGS__)
#define IL2CPP_LOGE(...) __android_log_print(ANDROID_LOG_ERROR,IL2CPP__TAG,__VA_ARGS__)

map<string, size_t> m_cacheFields;
map<string, void *> m_cacheMethods;

namespace {
    const void *(*il2cpp_assembly_get_image)(const void *assembly);

    void *(*il2cpp_domain_get)();

    void **(*il2cpp_domain_get_assemblies)(const void *domain, size_t *size);

    const char *(*il2cpp_image_get_name)(void *image);

    void *(*il2cpp_class_from_name)(const void *image, const char *namespaze, const char *name);

    void *(*il2cpp_class_get_property_from_name)(void *klass, const char *name);

    void *(*il2cpp_class_get_field_from_name)(void *klass, const char *name);

    void *(*il2cpp_class_get_method_from_name)(void *klass, const char *name, int argsCount);

    void *(*il2cpp_property_get_get_method)(void *prop);

    void *(*il2cpp_property_get_set_method)(void *prop);

    size_t (*il2cpp_field_get_offset)(void *field);

    void (*il2cpp_field_static_get_value)(void *field, void *value);

    void (*il2cpp_field_static_set_value)(void *field, void *value);

    void *(*il2cpp_array_new)(void *elementTypeInfo, size_t length);

    int32_t (*il2cpp_string_length)(void *str);

    uint16_t *(*il2cpp_string_chars)(void *str);

    Il2CppString* (*il2cpp_string_new)(const char* str);

    char *(*il2cpp_type_get_name)(void *type);

    void* (*il2cpp_method_get_param)(void *method, uint32_t index);

    void* (*il2cpp_class_get_methods)(void *klass, void* *iter);

    const char* (*il2cpp_method_get_name)(void *method);

    void *(*il2cpp_class_get_interfaces)(void *klass, void **iter);

    const char *(*il2cpp_class_get_name)(void *klass);

     void *(*il2cpp_class_from_type)(int);

    int (*il2cpp_class_get_type)(void *);

    void *(*il2cpp_class_get_parent)(void *);

    void *(*il2cpp_class_get_declaring_type)(void *);

    void *(*il2cpp_class_get_nested_types)(void *, void **);

    void *(*il2cpp_object_new)(void *);
}

vector<string> split_string(string str, string token) {
    vector<string> result;
    while (str.size()) {
        int index = str.find(token);
        if (index != string::npos) {
            result.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0)
                result.push_back(str);
        } else {
            result.push_back(str);
            str = "";
        }
    }
    return result;
}

inline const char* GetFilename(const char* filename)
{
    const char* basename = filename + strlen(filename);

    for(; *basename != '/' && *basename != '\\' && basename != filename; basename--) {}

    if(basename != filename) return basename + 1;
    else return filename;
}

int not_found_export = 0;

void *get_export_function(const char *lib, const char *name)
{
    void *handle = dlopen(lib, 4);
    if(handle) {
        void *fn = dlsym(handle, name);
        if (fn) {
            return fn;
        }
    }
    not_found_export++;
    return 0;
}

void *get_export_function(void *handle, const char *name)
{
    void *fn = dlsym(handle, name);
    if (fn) {
        return fn;
    }

    IL2CPP_LOGI("%s: %p %s", __FUNCTION__, handle, name);

    not_found_export++;
    return 0;
}

uintptr_t get_lib_addr(const char *name){
    char line[512];

    FILE *f = fopen("/proc/self/maps", "r");

    if (!f)
        return 0;

    while (fgets(line, sizeof line, f)) {
        uintptr_t base;
        char tmp[64];
        sscanf(line, "%" PRIXPTR "-%*" PRIXPTR " %*s %*s %*s %*s %s", &base, tmp);
        if (strstr(tmp, name)) {
            fclose(f);
            return base;
        }
    }
    fclose(f);
    return 0;
}

int Il2Cpp::Attach(const char *libname) {
    if(!libname) return -1;

    m_gIl2cppBase = get_lib_addr(libname);
    while(!m_gIl2cppBase)
    {
        m_gIl2cppBase = get_lib_addr(libname);
        sleep(1);
    }

    il2cpp_assembly_get_image = (const void *(*)(const void *)) get_export_function(libname, "il2cpp_assembly_get_image");

    il2cpp_domain_get = (void *(*)()) get_export_function(libname, "il2cpp_domain_get");

    il2cpp_domain_get_assemblies = (void **(*)(const void* , size_t*)) get_export_function(libname, "il2cpp_domain_get_assemblies");

    il2cpp_image_get_name = (const char *(*)(void *)) get_export_function(libname, "il2cpp_image_get_name");

    il2cpp_class_from_name = (void* (*)(const void*, const char*, const char *)) get_export_function(libname, "il2cpp_class_from_name");

    il2cpp_class_get_property_from_name = (void* (*)(void *, const char *)) get_export_function(libname, "il2cpp_class_get_property_from_name");;

    il2cpp_class_get_field_from_name = (void* (*)(void*, const char *)) get_export_function(libname, "il2cpp_class_get_field_from_name");;

    il2cpp_class_get_method_from_name = (void* (*)(void *, const char*, int)) get_export_function(libname, "il2cpp_class_get_method_from_name");;

    il2cpp_property_get_get_method = (void* (*)(void *)) get_export_function(libname, "il2cpp_property_get_get_method");;

    il2cpp_property_get_set_method = (void* (*)(void *)) get_export_function(libname, "il2cpp_property_get_set_method");;

    il2cpp_field_get_offset = (size_t (*)(void *)) get_export_function(libname, "il2cpp_field_get_offset");;

    il2cpp_field_static_get_value = (void (*)(void*, void *)) get_export_function(libname, "il2cpp_field_static_get_value");;

    il2cpp_field_static_set_value = (void (*)(void*, void *)) get_export_function(libname, "il2cpp_field_static_set_value");;

    il2cpp_array_new = (void *(*)(void*, size_t)) get_export_function(libname, "il2cpp_array_new");;

    il2cpp_string_chars = (uint16_t *(*)(void*)) get_export_function(libname, "il2cpp_string_chars");;

    il2cpp_string_length = (int32_t (*)(void*)) get_export_function(libname, "il2cpp_string_length");;

    il2cpp_string_new = (Il2CppString *(*)(const char *)) get_export_function(libname, "il2cpp_string_new");;

    il2cpp_type_get_name = (char *(*)(void *)) get_export_function(libname, "il2cpp_type_get_name");;

    il2cpp_method_get_param = (void *(*)(void *, uint32_t)) get_export_function(libname, "il2cpp_method_get_param");;

    il2cpp_class_get_methods = (void *(*)(void *, void **)) get_export_function(libname, "il2cpp_class_get_methods");;

    il2cpp_method_get_name = (const char *(*)(void *)) get_export_function(libname, "il2cpp_method_get_name");;

    il2cpp_class_get_interfaces = (void *(*)(void *, void **)) get_export_function(libname, "il2cpp_class_get_interfaces");;

    il2cpp_class_get_name = (const char *(*)(void *)) get_export_function(libname, "il2cpp_class_get_name");

    il2cpp_class_from_type = (void *(*)(int)) get_export_function(libname, "il2cpp_class_from_type");

    il2cpp_class_get_type = (int (*)(void *)) get_export_function(libname, "il2cpp_class_get_type");

    il2cpp_class_get_parent = (void *(*)(void *)) get_export_function(libname, "il2cpp_class_get_parent");

    il2cpp_class_get_declaring_type = (void *(*)(void *)) get_export_function(libname, "il2cpp_class_get_declaring_type");

    il2cpp_class_get_nested_types = (void *(*)(void *, void **)) get_export_function(libname, "il2cpp_class_get_nested_types");

    il2cpp_object_new = (void *(*)(void *)) get_export_function(libname, "il2cpp_object_new");

    if(not_found_export)
    {
        return -1;
    }
    return 0;

}


void *Il2Cpp::GetImageByName(const char *image) {
    size_t size;
    void **assemblies = il2cpp_domain_get_assemblies(il2cpp_domain_get(), &size);
    for(int i = 0; i < size; ++i)
    {
        void *img = (void *)il2cpp_assembly_get_image(assemblies[i]);

        const char *img_name = il2cpp_image_get_name(img);

        if(strcmp(img_name, image) == 0)
        {
            return img;
        }
    }
    return 0;
}

void Il2Cpp::GetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *output) {
    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return;
    }
    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s for field %s!", clazz, name);
        return;
    }

    void *field = il2cpp_class_get_field_from_name(klass, name);
    if(!field) {
        IL2CPP_LOGI("Can't find field %s in class %s!", name, clazz);
        return;
    }

    il2cpp_field_static_get_value(field, output);
}

void Il2Cpp::SetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void* value) {
    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return;
    }
    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s for field %s!", clazz, name);
        return;
    }

    void *field = il2cpp_class_get_field_from_name(klass, name);
    if(!field) {
        IL2CPP_LOGI("Can't find field %s in class %s!", name, clazz);
        return;
    }

    il2cpp_field_static_set_value(field, value);
}

void *Il2Cpp::GetStaticClass(const char *image, const char *namespaze, const char *clazz) {
    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return 0;
    }

    vector<string> classes = split_string(clazz, ".");

    void *klass = il2cpp_class_from_name(img, namespaze, classes[0].c_str());
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s!", clazz);
        return 0;
    }

    if(classes.size() > 1)
    {
        void *iter = 0;
        void *nest = il2cpp_class_get_nested_types(klass, &iter);
        while(nest)
        {
            const char *name = il2cpp_class_get_name(nest);
            if(strcmp(name, classes[1].c_str()) == 0)
            {
                return nest;
            }

            nest = il2cpp_class_get_nested_types(klass, &iter);
        }
        IL2CPP_LOGI("Can't find subclass %s in class %s!", classes[1].c_str(), classes[0].c_str());
        return 0;
    }

    return klass;
}

void *Il2Cpp::CreateClassObject(const char *image, const char *namespaze, const char *clazz) {
    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return 0;
    }

    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s!", clazz);
        return 0;
    }

    void *obj = il2cpp_object_new(klass);
    if(!obj)
    {
        IL2CPP_LOGI("Can't create object for %s", clazz);
        return 0;
    }

    return obj;
}

void *Il2Cpp::GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, int argsCount) {
    string _sig = image;
    _sig += namespaze;
    _sig += clazz;
    _sig += name;
    _sig += to_string(argsCount);

    if(m_cacheMethods.count(_sig) > 0)
    {
        return m_cacheMethods[_sig];
    }

    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return 0;
    }

    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s for method %s!", clazz, name);
        return 0;
    }

    void **method = (void**)il2cpp_class_get_method_from_name(klass, name, argsCount);
    if(!method) {
        IL2CPP_LOGI("Can't find method %s in class %s!", name, clazz);
        return 0;
    }

    m_cacheMethods[_sig] = *method;

    return *method;
}

void *Il2Cpp::GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, char** args, int argsCount) {
    string _sig = image;
    _sig += namespaze;
    _sig += clazz;
    _sig += name;
    for (int i = 0; i < argsCount; i++) {
        _sig += args[i];
    }
    _sig += to_string(argsCount);

    if(m_cacheMethods.count(_sig) > 0)
    {
        return m_cacheMethods[_sig];
    }

    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return 0;
    }

    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s for method %s!", clazz, name);
        return 0;
    }

    void *iter = 0;

    int score = 0;

    void **method = (void**) il2cpp_class_get_methods(klass, &iter);
    while(method) {
        const char *fname = il2cpp_method_get_name(method);
        if(strcmp(fname, name) == 0) {
            for (int i = 0; i < argsCount; i++) {
                void *arg = il2cpp_method_get_param(method, i);
                if (arg) {
                    const char *tname = il2cpp_type_get_name(arg);
                    if (strcmp(tname, args[i]) == 0) {
                        score++;
                    } else {
                        IL2CPP_LOGI("Argument at index %d didn't matched requested argument!\r\n\tRequested: %s\r\n\tActual: %s\r\nSkipping function...", i, args[i], tname);
                        score = 0;
goto skip;
                    }
                }
            }
        }
        skip:

        if(score == argsCount)
        {
            IL2CPP_LOGI("Found matched function!");

            auto result = *method;
            m_cacheMethods[_sig] = result;

            return result;
        }

        method = (void **) il2cpp_class_get_methods(klass, &iter);
    }
    IL2CPP_LOGI("Cannot find function %s in class %s!", name, clazz);
    return 0;
}

uintptr_t Il2Cpp::GetFieldOffset(const char *image, const char *namespaze, const char *clazz, const char *name) {
    string _sig = image;
    _sig += namespaze;
    _sig += clazz;
    _sig += name;

    if(m_cacheFields.count(_sig) > 0)
    {
        return m_cacheFields[_sig];
    }

    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return -1;
    }
    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s for field %s!", clazz, name);
        return -1;
    }

    void *field = il2cpp_class_get_field_from_name(klass, name);
    if(!field) {
        IL2CPP_LOGI("Can't find field %s in class %s!", name, clazz);
        return -1;
    }

    auto result = il2cpp_field_get_offset(field);
    m_cacheFields[_sig] = result;

    return result;
}

bool Il2Cpp::IsAssembliesLoaded() {
    size_t size;
    void **assemblies = il2cpp_domain_get_assemblies(il2cpp_domain_get(), &size);

    return size != 0 && assemblies != 0;
}

void* Il2Cpp::CreateArray(const char *image, const char *namespaze, const char *clazz, size_t length) {
    void *img = GetImageByName(image);
    if(!img) {
        IL2CPP_LOGI("Can't find image %s!", image);
        return 0;
    }
    void *klass = GetStaticClass(image, namespaze, clazz);
    if(!klass) {
        IL2CPP_LOGI("Can't find class %s!", clazz);
        return 0;
    }

    return il2cpp_array_new(klass, length);
}

Il2CppString *Il2Cpp::CreateString(const char *str) {
    return il2cpp_string_new(str);
}

wchar_t *Il2Cpp::GetString(Il2CppString *str) {
    return (wchar_t *)il2cpp_string_chars(str);
}

int32_t Il2Cpp::GetStringLength(Il2CppString *str){
    return il2cpp_string_length(str);
}