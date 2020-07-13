#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "StringUtil"));
	}

	template <typename T = uintptr_t> static T& cul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& cmp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T IndexOf(Il2CppString* src, Il2CppString* target) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4CFC018))(0, src, target);
	}
	template <typename T = Il2CppString*> static T Format(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CFB258))(0, format, args);
	}

};

}
