#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mEdit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingsViewModeType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> static T& bOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& LastSelectedWidget() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GameLogoController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsBr() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mJoystickPvpTlog() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mHudPvpTlog() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultGameLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterOnce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMessageBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangeConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogUploadJoystick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogUploadHudlayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSelectSettingsEditWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetSettingWidgets() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25717A4))(this);
	}
	template <typename T = void> T SetMode(bool isBr) {
		return ((T (*)(SettingsEditController*, bool))(Il2CppBase() + 0x2572520))(this, isBr);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25725F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25726CC))(this);
	}
	template <typename T = void> T InitDefaultGameLogo() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2572DB4))(this);
	}
	template <typename T = void> T RegisterOnce() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x257282C))(this);
	}
	template <typename T = void> T OnMessageBoxCallback(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x2573298))(this, result, context);
	}
	template <typename T = void> T OnReturnKeyPress(uintptr_t Msg) {
		return ((T (*)(SettingsEditController*, uintptr_t))(Il2CppBase() + 0x2573708))(this, Msg);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2573BE4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2573E08))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2573F30))(this);
	}
	template <typename T = void> T LoadConfig() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25741F4))(this);
	}
	template <typename T = bool> T IsChangeConfig() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2573940))(this);
	}
	template <typename T = void> T SaveConfig() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25733E4))(this);
	}
	template <typename T = void> T TlogUploadJoystick() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2575970))(this);
	}
	template <typename T = void> T TlogUploadHudlayout() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2575B3C))(this);
	}
	template <typename T = void> T DoSelectSettingsEditWidget(uintptr_t widget, bool selected) {
		return ((T (*)(SettingsEditController*, uintptr_t, bool))(Il2CppBase() + 0x25746A4))(this, widget, selected);
	}
	template <typename T = void> T OnWidgetSelected(uintptr_t msg) {
		return ((T (*)(SettingsEditController*, uintptr_t))(Il2CppBase() + 0x25760DC))(this, msg);
	}
	template <typename T = void> T OnWidgetDrag(uintptr_t msg) {
		return ((T (*)(SettingsEditController*, uintptr_t))(Il2CppBase() + 0x2576290))(this, msg);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25767A0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2577200))(this);
	}
	template <typename T = void> T SetUIAnchor() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2572B6C))(this);
	}
	template <typename T = void> T RegisterOncem__0() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2577380))(this);
	}
	template <typename T = void> T RegisterOncem__1() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2577650))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25777F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x25777FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2577804))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x257780C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x2577814))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettingsEditController*))(Il2CppBase() + 0x257781C))(this);
	}

};

}
