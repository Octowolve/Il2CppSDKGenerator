#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class EnumUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "EnumUtils"));
	}

	template <typename T = void*> static T& EnumMemberNamesPerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void*> static T InitializeEnumType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEE9C8))(0, type);
	}
	template <typename T = void*> static T GetValues(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DEEEF8))(0, enumType);
	}
	template <typename T = uintptr_t> static T ParseEnumName(Il2CppString* enumText, bool isNullable, uintptr_t t) {
		return ((T (*)(void *, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4DEF4A4))(0, enumText, isNullable, t);
	}
	template <typename T = Il2CppString*> static T ToEnumName(uintptr_t enumType, Il2CppString* enumText, bool camelCaseText) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4DEF938))(0, enumType, enumText, camelCaseText);
	}
	template <typename T = Il2CppString*> static T ResolvedEnumName(void* map, Il2CppString* enumText) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x4DEF878))(0, map, enumText);
	}

};

}
