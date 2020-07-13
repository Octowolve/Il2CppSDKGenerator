#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditControllerPVE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditController_PVE"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetSettingWidgets() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257A474))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257B0A4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257B1B4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetSettingWidgets() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257B258))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257B25C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsEditControllerPVE*))(Il2CppBase() + 0x257B260))(this);
	}

};

}
