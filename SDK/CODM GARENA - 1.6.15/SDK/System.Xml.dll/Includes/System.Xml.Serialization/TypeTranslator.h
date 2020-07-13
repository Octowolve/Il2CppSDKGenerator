#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class TypeTranslator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "TypeTranslator"));
	}

	template <typename T = uintptr_t> static T& nameCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& primitiveTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& primitiveArrayTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& nullableTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetTypeData(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37C0774))(0, type);
	}
	template <typename T = uintptr_t> static T GetTypeData_1(uintptr_t runtimeType, Il2CppString* xmlDataType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x37C39AC))(0, runtimeType, xmlDataType);
	}
	template <typename T = uintptr_t> static T GetPrimitiveTypeData(Il2CppString* typeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C4678))(0, typeName);
	}
	template <typename T = uintptr_t> static T GetPrimitiveTypeData_1(Il2CppString* typeName, bool nullable) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x37C4838))(0, typeName, nullable);
	}
	template <typename T = Il2CppString*> static T GetArrayName(Il2CppString* elemName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37BD9B4))(0, elemName);
	}
	template <typename T = void> static T ParseArrayType(Il2CppString* arrayType, uintptr_t* type, uintptr_t* ns, uintptr_t* dimensions) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x37B8E28))(0, arrayType, type, ns, dimensions);
	}

};

}
