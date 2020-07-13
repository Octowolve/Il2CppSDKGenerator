#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageManager"));
	}

	template <typename T = Il2CppString*> static T& PLAYER_PREFS_LANGUAGE_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _currentELanguageCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PLAYER_PREFS_LANGUAGE_AUDIO_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _currentELanguageCode_Audio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_TitleFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& m_BodyFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSystemLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDefaultLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WritePlayerPrefs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NameToCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultAudioListFromSDKMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> static T get_CurrentELanguageCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4929950))(0);
	}
	template <typename T = uintptr_t> static T GetCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x492A7D8))(0);
	}
	template <typename T = uintptr_t> static T GetSystemLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x492AB64))(0);
	}
	template <typename T = void> static T ResetDefaultLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x492B2F0))(0);
	}
	template <typename T = void> static T SetCustomLanguage(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x492B3E0))(0, value);
	}
	template <typename T = void> static T WritePlayerPrefs(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x492AF60))(0, value);
	}
	template <typename T = uintptr_t> static T get_CurrentELanguageCode_Audio() {
		return ((T (*)(void *))(Il2CppBase() + 0x492B7E8))(0);
	}
	template <typename T = void> static T set_CurrentELanguageCode_Audio(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x492BA64))(0, value);
	}
	template <typename T = uintptr_t> static T NameToCode(Il2CppString* name, uintptr_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x492B0B0))(0, name, defaultValue);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDefaultAudioListFromSDKMode(uintptr_t nativeEnv) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x492BBC4))(0, nativeEnv);
	}
	template <typename T = uintptr_t> static T get_TitleFont() {
		return ((T (*)(void *))(Il2CppBase() + 0x492BE3C))(0);
	}
	template <typename T = uintptr_t> static T get_BodyFont() {
		return ((T (*)(void *))(Il2CppBase() + 0x492C284))(0);
	}
	template <typename T = uintptr_t> static T LoadFont(uintptr_t category, uintptr_t language) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x492BFE8))(0, category, language);
	}
	template <typename T = uintptr_t> static T SelectFont(uintptr_t category) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x492C524))(0, category);
	}
	template <typename T = void> static T ResetFont() {
		return ((T (*)(void *))(Il2CppBase() + 0x492B588))(0);
	}
	template <typename T = bool> static T IsAR() {
		return ((T (*)(void *))(Il2CppBase() + 0x492C65C))(0);
	}
	template <typename T = uintptr_t> static T LoadFont_1(Il2CppString* address) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492C430))(0, address);
	}

};

}
