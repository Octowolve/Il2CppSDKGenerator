#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsPrivacy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsPrivacy"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrivacyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955A40))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955AB8))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955AF0))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955AFC))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955B08))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955B14))(this);
	}
	template <typename T = Il2CppString*> T GetPrivacyValue() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955D2C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(SettingsPrivacy*))(Il2CppBase() + 0x4955E64))(this);
	}

};

}
