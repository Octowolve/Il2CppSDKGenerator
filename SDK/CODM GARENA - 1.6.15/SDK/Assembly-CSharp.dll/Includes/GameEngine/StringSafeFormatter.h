#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class StringSafeFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "StringSafeFormatter"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatHelperInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T Format(Il2CppString* format, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x340482C))(0, format, arg0);
	}
	template <typename T = Il2CppString*> static T Format_1(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3404BB8))(0, format, arg0, arg1);
	}
	template <typename T = Il2CppString*> static T Format_2(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3404CAC))(0, format, arg0, arg1, arg2);
	}
	template <typename T = Il2CppString*> static T Format_3(Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3404DAC))(0, format, args);
	}
	template <typename T = Il2CppString*> static T FormatHelper(Il2CppString* format, uintptr_t args) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3404910))(0, format, args);
	}
	template <typename T = Il2CppString*> static T FormatHelperInternal(Il2CppString* format, uintptr_t args) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3404EF0))(0, format, args);
	}

};

}
