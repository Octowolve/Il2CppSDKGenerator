#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class MiscellaneousUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "MiscellaneousUtils"));
	}


	template <typename T = bool> static T ValueEquals(uintptr_t objA, uintptr_t objB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF2308))(0, objA, objB);
	}
	template <typename T = uintptr_t> static T CreateArgumentOutOfRangeException(Il2CppString* paramName, uintptr_t actualValue, Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4DE9CA8))(0, paramName, actualValue, message);
	}
	template <typename T = Il2CppString*> static T ToString(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF2840))(0, value);
	}
	template <typename T = int32_t> static T ByteArrayCompare(Il2CppArray<uintptr_t>* a1, Il2CppArray<uintptr_t>* a2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF2978))(0, a1, a2);
	}
	template <typename T = Il2CppString*> static T GetPrefix(Il2CppString* qualifiedName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DF2A3C))(0, qualifiedName);
	}
	template <typename T = Il2CppString*> static T GetLocalName(Il2CppString* qualifiedName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DF2B0C))(0, qualifiedName);
	}
	template <typename T = void> static T GetQualifiedNameParts(Il2CppString* qualifiedName, uintptr_t* prefix, uintptr_t* localName) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DF2A6C))(0, qualifiedName, prefix, localName);
	}
	template <typename T = Il2CppString*> static T FormatValueForPrint(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF2B3C))(0, value);
	}

};

}
