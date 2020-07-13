#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsHudController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsHudController"));
	}

	template <typename T = uintptr_t> T& View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabTypeList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUIEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSubController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabInteracted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettingTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEscapleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_HandleSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTutorial_SettingsShowTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2583084))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2583128))(this);
	}
	template <typename T = void> T RegisterUIEvents() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2583244))(this);
	}
	template <typename T = void> T InitSubController() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x258336C))(this);
	}
	template <typename T = void> T OnTabInteracted(int32_t tabIndex) {
		return ((T (*)(SettingsHudController*, int32_t))(Il2CppBase() + 0x2583D7C))(this, tabIndex);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2583FE8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2584248))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2584410))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2584630))(this);
	}
	template <typename T = void> T OnShowSettingTips(uintptr_t message) {
		return ((T (*)(SettingsHudController*, uintptr_t))(Il2CppBase() + 0x2584A20))(this, message);
	}
	template <typename T = void> T OnInitTabs(uintptr_t message) {
		return ((T (*)(SettingsHudController*, uintptr_t))(Il2CppBase() + 0x2584C9C))(this, message);
	}
	template <typename T = bool> T OnEscapleBtnClick() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x25850BC))(this);
	}
	template <typename T = void> T T_HandleSettings() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x25851A8))(this);
	}
	template <typename T = void> T OnTutorial_SettingsShowTip(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(SettingsHudController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2585240))(this, tutorial, triggerInfo);
	}
	template <typename T = void> T RegisterUIEventsm__0() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x25852F4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTabInteracted(int32_t P0) {
		return ((T (*)(SettingsHudController*, int32_t))(Il2CppBase() + 0x2585338))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettingsHudController*))(Il2CppBase() + 0x2585358))(this);
	}

};

}
