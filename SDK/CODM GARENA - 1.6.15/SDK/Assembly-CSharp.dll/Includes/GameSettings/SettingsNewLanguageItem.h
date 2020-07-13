#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewLanguageItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewLanguageItem"));
	}

	template <typename T = uintptr_t> T& languageCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& languageName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& enableLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& disableLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SettingsNewLanguageItem*))(Il2CppBase() + 0x2885EE4))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t code, Il2CppString* lanName, uintptr_t currentCode) {
		return ((T (*)(SettingsNewLanguageItem*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2885128))(this, code, lanName, currentCode);
	}
	template <typename T = void> T OnSelfClick(uintptr_t o) {
		return ((T (*)(SettingsNewLanguageItem*, uintptr_t))(Il2CppBase() + 0x2885FF8))(this, o);
	}

};

}
