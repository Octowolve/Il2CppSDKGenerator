#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewGamePadController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewGamePadController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingsDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& pvpSensitiveHelper() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& brSensitiveHelper() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& pveSensitiveHelper() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIntroductionClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMPSensitivityClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRSensitivityClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZMSensitivityClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSettingUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableGamePadToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnXAxisToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnYAxisToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnADSToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAutoRunToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoyStickToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCursorSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSettingValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableGamePadToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConnectBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetConnectBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGamePadToggleValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onResGamepadStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287B5E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287B68C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287C23C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287C3EC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287C4E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287C67C))(this);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewGamePadController*, uintptr_t))(Il2CppBase() + 0x287CEA4))(this, message);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D104))(this, depth);
	}
	template <typename T = void> T OnIntroductionClick(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D054))(this, index);
	}
	template <typename T = void> T OnSettingClick(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D518))(this, index);
	}
	template <typename T = void> T OnMPSensitivityClick(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D684))(this, index);
	}
	template <typename T = void> T OnBRSensitivityClick(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D754))(this, index);
	}
	template <typename T = void> T OnZMSensitivityClick(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D824))(this, index);
	}
	template <typename T = void> T SetTabActive(int32_t index) {
		return ((T (*)(SettingsNewGamePadController*, int32_t))(Il2CppBase() + 0x287D2BC))(this, index);
	}
	template <typename T = void> T RegisterSettingUIEvent() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287B824))(this);
	}
	template <typename T = void> T OnConnectBtnClick() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287D8F4))(this);
	}
	template <typename T = void> T OnEnableGamePadToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287DAA0))(this);
	}
	template <typename T = void> T OnXAxisToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287DCBC))(this);
	}
	template <typename T = void> T OnYAxisToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287DE30))(this);
	}
	template <typename T = void> T OnTriggerToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287DFA4))(this);
	}
	template <typename T = void> T OnADSToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E118))(this);
	}
	template <typename T = void> T OnAutoRunToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E28C))(this);
	}
	template <typename T = void> T OnJoyStickToggleChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E400))(this);
	}
	template <typename T = void> T OnCursorSliderChange() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E574))(this);
	}
	template <typename T = void> T SetSettingValues() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287D5D0))(this);
	}
	template <typename T = void> T SetEnableGamePadToggle() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E60C))(this);
	}
	template <typename T = void> T SetConnectBtn() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E710))(this);
	}
	template <typename T = void> T SetConnectBtn_1(bool isConnected) {
		return ((T (*)(SettingsNewGamePadController*, bool))(Il2CppBase() + 0x287EDB8))(this, isConnected);
	}
	template <typename T = void> T SetGamePadToggleValues() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287E7D0))(this);
	}
	template <typename T = void> T onResGamepadStateChange(uintptr_t Msg) {
		return ((T (*)(SettingsNewGamePadController*, uintptr_t))(Il2CppBase() + 0x287EEE4))(this, Msg);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287DBA8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287F0E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287F0EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287F0F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287F0FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewGamePadController*))(Il2CppBase() + 0x287F104))(this);
	}

};

}
