#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Base64ToArabic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBase64Str() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ArabicCorrectSpell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsArabic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReverseByLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T Base64ToArabic(Il2CppString* base64Str, bool forceBase64) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x492CEB8))(0, base64Str, forceBase64);
	}
	template <typename T = bool> static T IsBase64Str(Il2CppString* content) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492D114))(0, content);
	}
	template <typename T = Il2CppString*> static T ArabicCorrectSpell(Il2CppString* rawStr) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492D2D8))(0, rawStr);
	}
	template <typename T = bool> static T IsArabic(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x492D468))(0, ch);
	}
	template <typename T = Il2CppString*> static T ReverseByLine(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492D514))(0, str);
	}

};

}
