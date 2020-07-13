//
// Created by aimar on 12/28/2019.
//
#include <stdio.h>
#include <android/log.h>
#include <dlfcn.h>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

#ifndef ML_IL2CPP_H
#define ML_IL2CPP_H

uintptr_t m_gIl2cppBase = 0;

struct VirtualInvokeData {
    uintptr_t methodPtr;
    void *method;
};

struct Il2CppType {
    void *data;
    unsigned int bits;
};

struct Il2CppClass;

struct Il2CppObject {
    Il2CppClass *klass;
    void *monitor;
};

struct Il2CppArrayBounds {
    uintptr_t length;
    int32_t lower_bound;
};

struct Il2CppClass {
    void *image;
    void *gc_desc;
    const char *name;
    const char *namespaze;
    Il2CppType *byval_arg;
    Il2CppType *this_arg;
    Il2CppClass *element_class;
    Il2CppClass *castClass;
    Il2CppClass *declaringType;
    Il2CppClass *parent;
    void *generic_class;
    void *typeDefinition;
    void *interopData;
    void *fields;
    void *events;
    void *properties;
    void *methods;
    Il2CppClass **nestedTypes;
    Il2CppClass **implementedInterfaces;
    void *interfaceOffsets;

    void *static_fields;

    void *rgctx_data;
    Il2CppClass **typeHierarchy;
    uint32_t cctor_started;
    uint32_t cctor_finished;
    uint64_t cctor_thread;
    int32_t genericContainerIndex;
    int32_t customAttributeIndex;
    uint32_t instance_size;
    uint32_t actualSize;
    uint32_t element_size;
    int32_t native_size;
    uint32_t static_fields_size;
    uint32_t thread_static_fields_size;
    int32_t thread_static_fields_offset;
    uint32_t flags;
    uint32_t token;
    uint16_t method_count;
    uint16_t property_count;
    uint16_t field_count;
    uint16_t event_count;
    uint16_t nested_type_count;
    uint16_t vtable_count;
    uint16_t interfaces_count;
    uint16_t interface_offsets_count;
    uint8_t typeHierarchyDepth;
    uint8_t genericRecursionDepth;
    uint8_t rank;
    uint8_t minimumAlignment;
    uint8_t packingSize;
    uint8_t bitflags1;
    uint8_t bitflags2;
    VirtualInvokeData vtable[255];
};

template<typename T> struct Il2CppArray {
    Il2CppClass *klass;
    void *monitor;
    void *bounds;
    int max_length;
    void *vector[1];

    int getLength() {
        return max_length;
    }

    T getPointer() {
        return (T)vector;
    }
};

struct Il2CppString {
    Il2CppClass *klass;
    void *monitor;
    int length;
    char chars[1];

    int getLength() {
        return length;
    }

    char *getChars() {
        return chars;
    }
};

template<typename T> struct Il2CppList {
    void *unk0;
    void *unk1;
    Il2CppArray<T> *items;
    int size;
    int version;

    T getItems() {
        return items->getPointer();
    }

    int getSize() {
        return size;
    }

    int getVersion() {
        return version;
    }
};

template<typename K, typename V> struct Il2CppDictionary {
    void *unk0;
    void *unk1;
    Il2CppArray<int **> *table;
    Il2CppArray<void **> *linkSlots;
    Il2CppArray<K> *keys;
    Il2CppArray<V> *values;
    int touchedSlots;
    int emptySlot;
    int size;

    K getKeys() {
        return keys->getPointer();
    }

    V getValues() {
        return values->getPointer();
    }

    int getNumKeys() {
        return keys->getLength();
    }

    int getNumValues() {
        return values->getLength();
    }

    int getSize() {
        return size;
    }
};

struct Il2CppRect {
    float m_XMin, m_YMin, m_width, m_height;

    static Il2CppRect New(float x, float y, float width, float height) {
        Il2CppRect r = {x, y, width, height};
        return r;
    }
};

struct Il2CppColor {
    float r, g, b, a;

    static Il2CppColor black() {
        Il2CppColor c = {0, 0, 0, 1};
        return c;
    }

    static Il2CppColor blue() {
        Il2CppColor c = {0, 0, 1, 1};
        return c;
    }

    static Il2CppColor cyan() {
        Il2CppColor c = {0, 1, 1, 1};
        return c;
    }

    static Il2CppColor green() {
        Il2CppColor c = {0, 1, 0, 1};
        return c;
    }

    static Il2CppColor orange() {
        Il2CppColor c = {1, 0.5f, 0, 1};
        return c;
    }

    static Il2CppColor red() {
        Il2CppColor c = {1, 0, 0, 1};
        return c;
    }

    static Il2CppColor white() {
        Il2CppColor c = {1, 1, 1, 1};
        return c;
    }

    static Il2CppColor gray() {
        Il2CppColor c = {0.5f, 0.5f, 0.5f, 1};
        return c;
    }

    static Il2CppColor yellow() {
        Il2CppColor c = {1, 0.921568632f, 0.0156862754f, 1};
        return c;
    }
};

struct Il2CppVector2 {
    float x, y;

    static Il2CppVector2 zero() {
        Il2CppVector2 v = {0, 0};
        return v;
    }

    static Il2CppVector2 up() {
        Il2CppVector2 v = {0, 1};
        return v;
    }

    static Il2CppVector2 down() {
        Il2CppVector2 v = {0, -1};
        return v;
    }

    static Il2CppVector2 right() {
        Il2CppVector2 v = {1, 0};
        return v;
    }

    static Il2CppVector2 left() {
        Il2CppVector2 v = {-1, 0};
        return v;
    }

    static float Distance(Il2CppVector2 a, Il2CppVector2 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        return sqrtf(dx * dx + dy * dy);
    }

    Il2CppVector2 operator+(Il2CppVector2 b) {
        Il2CppVector2 v = {x + b.x, y + b.y};
        return v;
    }

    Il2CppVector2 operator-(Il2CppVector2 b) {
        Il2CppVector2 v = {x - b.x, y - b.y};
        return v;
    }
};

struct Il2CppVector3 {
    float x, y, z;

    static Il2CppVector3 zero() {
        Il2CppVector3 v = {0, 0, 0};
        return v;
    }

    static Il2CppVector3 up() {
        Il2CppVector3 v = {0, 1, 0};
        return v;
    }

    static Il2CppVector3 down() {
        Il2CppVector3 v = {0, -1, 0};
        return v;
    }

    static Il2CppVector3 right() {
        Il2CppVector3 v = {1, 0, 0};
        return v;
    }

    static Il2CppVector3 left() {
        Il2CppVector3 v = {-1, 0, 0};
        return v;
    }

    static Il2CppVector3 forward() {
        Il2CppVector3 v = {0, 0, 1};
        return v;
    }

    static Il2CppVector3 back() {
        Il2CppVector3 v = {0, 0, -1};
        return v;
    }

    static float Distance(Il2CppVector3 a, Il2CppVector3 b) {
        float dx = a.x - b.x;
        float dy = a.y - b.y;
        float dz = a.z - b.z;
        return sqrtf(dx * dx + dy * dy + dz * dz);
    }

    static float Magnitude(Il2CppVector3 vector) {
        float f = vector.x * vector.x + vector.y * vector.y + vector.z * vector.z;
        return sqrtf(f);
    }

    static Il2CppVector3 Normalize(Il2CppVector3 value) {
        float num = Il2CppVector3::Magnitude(value);
        Il2CppVector3 result;
        if (num > 1E-05f) {
            result = {value.x / num, value.y / num, value.z / num};
        } else {
            result = Il2CppVector3::zero();
        }
        return result;
    }

    Il2CppVector3 operator+(Il2CppVector3 b) {
        Il2CppVector3 v = {x + b.x, y + b.y, z + b.z};
        return v;
    }

    Il2CppVector3 operator-(Il2CppVector3 b) {
        Il2CppVector3 v = {x - b.x, y - b.y, y - b.y};
        return v;
    }
};

struct Il2CppQuaternion {
    float x, y, z, w;

    static float Dot(Il2CppQuaternion a, Il2CppQuaternion b) {
        return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
    }
};


namespace Il2Cpp {
    int Attach(const char *libname = "libil2cpp.so");

    int Attach(void *handle);

    void *GetImageByName(const char *image);

    void *GetStaticClass(const char *image, const char *namespaze, const char *clazz);

    void *CreateArray(const char *image, const char *namespaze, const char *clazz, size_t length);

    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, int argsCount = 0);

    void *GetMethodOffset(const char *image, const char *namespaze, const char *clazz, const char *name, char **args, int argsCount = 0);

    uintptr_t GetFieldOffset(const char *image, const char *namespaze, const char *clazz, const char *name);

    void GetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *output);

    void SetStaticFieldValue(const char *image, const char *namespaze, const char *clazz, const char *name, void *value);

    void *CreateClassObject(const char *image, const char *namespaze, const char *clazz);

    bool IsAssembliesLoaded();

    Il2CppString *CreateString(const char *str);

    int32_t GetStringLength(Il2CppString *str);

    wchar_t *GetString(Il2CppString *str);
};

#endif //ML_IL2CPP_H
