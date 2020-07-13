#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditControllerBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditController_BR"));
	}

	template <typename T = uintptr_t> T& mJoystickBrTlog() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mHudBrTlog() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogUploadJoystick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogUploadHudlayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCustomSettingsFromMP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetSettingWidgets() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2577944))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257892C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2578A3C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2578AE0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2578D24))(this);
	}
	template <typename T = void> T TlogUploadJoystick() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2578F68))(this);
	}
	template <typename T = void> T TlogUploadHudlayout() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x2579104))(this);
	}
	template <typename T = void> T OnSyncButtonClicked() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x25792A0))(this);
	}
	template <typename T = void> T OnSyncCustomSettingsFromMP() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x25793BC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetSettingWidgets() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A384))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A38C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TlogUploadJoystick() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TlogUploadHudlayout() {
		return ((T (*)(SettingsEditControllerBR*))(Il2CppBase() + 0x257A398))(this);
	}

};

}
