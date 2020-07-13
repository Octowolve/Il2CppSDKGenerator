#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsGamePadReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsGamePadReport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadBasicSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadSensitivitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamePadStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x49543E8))(this);
	}
	template <typename T = Il2CppString*> T get_EventTime() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x4954460))(this);
	}
	template <typename T = Il2CppString*> T get_GameAppId() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x4954498))(this);
	}
	template <typename T = int32_t> T get_PlatID() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x49544A4))(this);
	}
	template <typename T = Il2CppString*> T get_OpenId() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x49544B0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x49544BC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetGamePadBasicSetting() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x4954728))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetGamePadSensitivitySetting() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x4954A30))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetGamePadName() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x495565C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetGamePadStatus() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x49557D4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T xLuaBaseProxy_GetTLogArgs() {
		return ((T (*)(SettingsGamePadReport*))(Il2CppBase() + 0x495599C))(this);
	}

};

}
