#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ArabicSupport {

class ArabicFixer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ArabicSupport", "ArabicFixer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Fix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Fix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Fix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T Fix(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22CED3C))(0, str);
	}
	template <typename T = Il2CppString*> static T Fix_1(Il2CppString* str, bool rtl) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x22CF1BC))(0, str, rtl);
	}
	template <typename T = Il2CppString*> static T Fix_2(Il2CppString* str, bool showTashkeel, bool useHinduNumbers) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x22CEDF0))(0, str, showTashkeel, useHinduNumbers);
	}
	template <typename T = Il2CppString*> static T Fix_3(Il2CppString* str, bool showTashkeel, bool combineTashkeel, bool useHinduNumbers) {
		return ((T (*)(void *, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x22CF614))(0, str, showTashkeel, combineTashkeel, useHinduNumbers);
	}

};

}
