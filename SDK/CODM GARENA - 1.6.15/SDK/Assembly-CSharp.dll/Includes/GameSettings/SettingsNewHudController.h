#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewHudController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewHudController"));
	}

	template <typename T = uintptr_t> T& View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabTypeList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& IsBind() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadAssetIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUIEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAddedDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPermitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrivacyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFeedbackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefaultBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnLoginCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NofitySyncFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySettingsSyncFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEscapleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x287F254))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetLoadAssetIds() {
		return ((T (*)(void *))(Il2CppBase() + 0x287F2F8))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x287F3E4))(this);
	}
	template <typename T = void> T RegisterUIEvents() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x287F5D4))(this);
	}
	template <typename T = void> T InitSubController() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x287F754))(this);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SettingsNewHudController*, int32_t))(Il2CppBase() + 0x288049C))(this, tabIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2881240))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28817C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2881C3C))(this);
	}
	template <typename T = int32_t> T GetAddedDepth() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28828E4))(this);
	}
	template <typename T = void> T OnPermitClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28829E8))(this);
	}
	template <typename T = void> T OnPrivacyClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2882AE4))(this);
	}
	template <typename T = void> T OnFeedbackBtnClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2882BE0))(this);
	}
	template <typename T = void> T OnDefaultBtnClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2882D24))(this);
	}
	template <typename T = void> T OnLogoutBtnClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2882E14))(this);
	}
	template <typename T = void> T OnReturnLoginCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsNewHudController*, uintptr_t, int32_t))(Il2CppBase() + 0x2882FF8))(this, result, context);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28830AC))(this);
	}
	template <typename T = void> T OnShowSettingTips(uintptr_t message) {
		return ((T (*)(SettingsNewHudController*, uintptr_t))(Il2CppBase() + 0x288349C))(this, message);
	}
	template <typename T = void> T OnInitTabs(uintptr_t message) {
		return ((T (*)(SettingsNewHudController*, uintptr_t))(Il2CppBase() + 0x2883718))(this, message);
	}
	template <typename T = void> T OnRestoreChange(uintptr_t msg) {
		return ((T (*)(SettingsNewHudController*, uintptr_t))(Il2CppBase() + 0x2883CDC))(this, msg);
	}
	template <typename T = void> T NofitySyncFireMode() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2883DC0))(this);
	}
	template <typename T = void> T OnNotifySettingsSyncFireMode(uintptr_t Msg) {
		return ((T (*)(SettingsNewHudController*, uintptr_t))(Il2CppBase() + 0x2884000))(this, Msg);
	}
	template <typename T = bool> T OnEscapleBtnClick() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28840AC))(this);
	}
	template <typename T = void> T RegisterUIEventsm__0() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x2884198))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SettingsNewHudController*, int32_t))(Il2CppBase() + 0x28844D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettingsNewHudController*))(Il2CppBase() + 0x28844F4))(this);
	}

};

}
