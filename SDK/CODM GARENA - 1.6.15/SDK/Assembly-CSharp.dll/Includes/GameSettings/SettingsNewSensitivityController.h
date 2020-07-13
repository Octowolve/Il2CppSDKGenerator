#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewSensitivityController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewSensitivityController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& SensitiveMinValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& SensitiveMaxValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& ToggleGroupPVP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupPVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpZmModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveZmModeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateToRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateFromRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommonPanelValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommonPanelSwitchModeValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonToggleValuesChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonSwitchModeToggleValuesChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonSliderValuesChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableDeltaSlider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBrUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrViewTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFireTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrCommonPanelToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrCommonPanelSwitchModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrCommonPanelSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFreeViewTurnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFirstChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrThirdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrViewX3Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrViewX4Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrViewSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrViewAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeFirstChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeThirdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeRHMChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeX4Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrGyroscopeX3Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFiringFirstChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFiringThirdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFireX4Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFireSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFireAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrFireX3Change() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPvpUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpViewTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFiringTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPCommonPanelToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPCommonPanelSwitchModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVPCommonPanelSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpViewTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpViewSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpViewAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFireTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFireSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFireAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpGyroAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpFireSyncToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncRotateSensitiveInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPvpUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPveUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveViewTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFiringTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveGyroTacticScopeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVECommonPanelToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVECommonPanelSwitchModeToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVECommonPanelSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveViewTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveViewSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveViewAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFireTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFireSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveFireAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveGyroTurningChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveGyroSniperChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveGyroAimingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPveUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRotateSensitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCachedValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2893620))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x28936C4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2893974))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2893ACC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2893BB4))(this);
	}
	template <typename T = void> T OnBrModeClick(int32_t index) {
		return ((T (*)(SettingsNewSensitivityController*, int32_t))(Il2CppBase() + 0x289449C))(this, index);
	}
	template <typename T = void> T OnPvpZmModeClick(int32_t index) {
		return ((T (*)(SettingsNewSensitivityController*, int32_t))(Il2CppBase() + 0x2896488))(this, index);
	}
	template <typename T = void> T OnPveZmModeClick(int32_t index) {
		return ((T (*)(SettingsNewSensitivityController*, int32_t))(Il2CppBase() + 0x2897984))(this, index);
	}
	template <typename T = float> T TranslateToRange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x2898CAC))(this, value);
	}
	template <typename T = float> T TranslateFromRange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x2898D6C))(this, value);
	}
	template <typename T = void> T SetCommonPanelValues(uintptr_t settingConfig, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2898E2C))(this, settingConfig, commonPanel);
	}
	template <typename T = void> T SetCommonPanelSwitchModeValues(uintptr_t settingConfig, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28991B4))(this, settingConfig, commonPanel);
	}
	template <typename T = void> T OnCommonToggleValuesChange(uintptr_t settingConfig, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2899318))(this, settingConfig, commonPanel);
	}
	template <typename T = void> T OnCommonSwitchModeToggleValuesChange(uintptr_t settingConfig, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2899678))(this, settingConfig, commonPanel);
	}
	template <typename T = void> T OnCommonSliderValuesChange(uintptr_t settingConfig, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28997E8))(this, settingConfig, commonPanel);
	}
	template <typename T = void> T DisableDeltaSlider(bool bDisable, uintptr_t commonPanel) {
		return ((T (*)(SettingsNewSensitivityController*, bool, uintptr_t))(Il2CppBase() + 0x2899074))(this, bDisable, commonPanel);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2893D50))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewSensitivityController*, int32_t))(Il2CppBase() + 0x2899AD0))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t))(Il2CppBase() + 0x2899C88))(this, message);
	}
	template <typename T = void> T RegisterBrUIEvent() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2894794))(this);
	}
	template <typename T = void> T OnBrViewTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A058))(this, value);
	}
	template <typename T = void> T OnBrFireTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A2A0))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A364))(this, value);
	}
	template <typename T = void> T OnBrCommonPanelToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289A428))(this);
	}
	template <typename T = void> T OnBrCommonPanelSwitchModeToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289A520))(this);
	}
	template <typename T = void> T OnBrCommonPanelSliderChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289A618))(this);
	}
	template <typename T = void> T OnBrFreeViewTurnChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A710))(this, value);
	}
	template <typename T = void> T OnBrFirstChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A7D4))(this, value);
	}
	template <typename T = void> T OnBrThirdChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A898))(this, value);
	}
	template <typename T = void> T OnBrViewX3Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289A95C))(this, value);
	}
	template <typename T = void> T OnBrViewX4Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AA20))(this, value);
	}
	template <typename T = void> T OnBrViewSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AAE4))(this, value);
	}
	template <typename T = void> T OnBrViewAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289ABA8))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeFirstChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AC6C))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeThirdChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AD30))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeRHMChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289ADF4))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeX4Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AEB8))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289AF7C))(this, value);
	}
	template <typename T = void> T OnBrGyroscopeX3Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B040))(this, value);
	}
	template <typename T = void> T OnBrFiringFirstChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B104))(this, value);
	}
	template <typename T = void> T OnBrFiringThirdChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B1C8))(this, value);
	}
	template <typename T = void> T OnBrFireX4Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B28C))(this, value);
	}
	template <typename T = void> T OnBrFireSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B350))(this, value);
	}
	template <typename T = void> T OnBrFireAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B414))(this, value);
	}
	template <typename T = void> T OnBrFireX3Change(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289B4D8))(this, value);
	}
	template <typename T = void> T SetBrUIValues() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2895B7C))(this);
	}
	template <typename T = void> T RegisterPvpUIEvent() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289686C))(this);
	}
	template <typename T = void> T OnPvpViewTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289BC90))(this, value);
	}
	template <typename T = void> T OnPvpFiringTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289BD54))(this, value);
	}
	template <typename T = void> T OnPvpGyroTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289BE18))(this, value);
	}
	template <typename T = void> T OnPVPCommonPanelToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289BEDC))(this);
	}
	template <typename T = void> T OnPVPCommonPanelSwitchModeToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289BFC8))(this);
	}
	template <typename T = void> T OnPVPCommonPanelSliderChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289C0B4))(this);
	}
	template <typename T = void> T OnPvpViewTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C1A0))(this, value);
	}
	template <typename T = void> T OnPvpViewSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C3B0))(this, value);
	}
	template <typename T = void> T OnPvpViewAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C484))(this, value);
	}
	template <typename T = void> T OnPvpFireTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C558))(this, value);
	}
	template <typename T = void> T OnPvpFireSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C62C))(this, value);
	}
	template <typename T = void> T OnPvpFireAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C700))(this, value);
	}
	template <typename T = void> T OnPvpGyroTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C7D4))(this, value);
	}
	template <typename T = void> T OnPvpGyroSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C898))(this, value);
	}
	template <typename T = void> T OnPvpGyroAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289C95C))(this, value);
	}
	template <typename T = void> T OnPvpFireSyncToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289CA20))(this);
	}
	template <typename T = void> T SyncRotateSensitiveInput(uintptr_t targetType, uintptr_t sourceType) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x289C274))(this, targetType, sourceType);
	}
	template <typename T = void> T SetPvpUIValues() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289755C))(this);
	}
	template <typename T = void> T RegisterPveUIEvent() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2897CD0))(this);
	}
	template <typename T = void> T OnPveViewTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289CB40))(this, value);
	}
	template <typename T = void> T OnPveFiringTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289CC04))(this, value);
	}
	template <typename T = void> T OnPveGyroTacticScopeChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289CCC8))(this, value);
	}
	template <typename T = void> T OnPVECommonPanelToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289CD8C))(this);
	}
	template <typename T = void> T OnPVECommonPanelSwitchModeToggleChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289CE78))(this);
	}
	template <typename T = void> T OnPVECommonPanelSliderChange() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289CF64))(this);
	}
	template <typename T = void> T OnPveViewTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D050))(this, value);
	}
	template <typename T = void> T OnPveViewSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D114))(this, value);
	}
	template <typename T = void> T OnPveViewAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D1D8))(this, value);
	}
	template <typename T = void> T OnPveFireTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D29C))(this, value);
	}
	template <typename T = void> T OnPveFireSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D360))(this, value);
	}
	template <typename T = void> T OnPveFireAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D424))(this, value);
	}
	template <typename T = void> T OnPveGyroTurningChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D4E8))(this, value);
	}
	template <typename T = void> T OnPveGyroSniperChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D5AC))(this, value);
	}
	template <typename T = void> T OnPveGyroAimingChange(float value) {
		return ((T (*)(SettingsNewSensitivityController*, float))(Il2CppBase() + 0x289D670))(this, value);
	}
	template <typename T = void> T SetPveUIValues() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2898884))(this);
	}
	template <typename T = void> T SetRotateSensitive(uintptr_t modeType, uintptr_t sensitiveType, float value) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x289A11C))(this, modeType, sensitiveType, value);
	}
	template <typename T = float> T GetRotateSensitive(uintptr_t modeType, uintptr_t sensitiveType) {
		return ((T (*)(SettingsNewSensitivityController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x289B59C))(this, modeType, sensitiveType);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x2899564))(this);
	}
	template <typename T = void> T SaveCachedValueToServer() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x28999C8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289D734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289D73C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289D744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289D74C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewSensitivityController*))(Il2CppBase() + 0x289D754))(this);
	}

};

}
