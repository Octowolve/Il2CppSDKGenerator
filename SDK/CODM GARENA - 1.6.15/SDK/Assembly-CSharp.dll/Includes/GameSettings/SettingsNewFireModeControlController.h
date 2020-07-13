#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewFireModeControlController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewFireModeControlController"));
	}

	template <typename T = int32_t> static T& FireModePanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& WestControlSetting() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& settingModel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ToggleGroupFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupAssaultRifles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupSubMachineGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupShotGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupLightMachineGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupSniperRifle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ToggleGroupPistol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mModeType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_FireMode_Init_0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SettingsNewFireModeControlController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvanceEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEmulatorInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCategoryFireModeToggele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCategoryFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAdvanceEXUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllADSClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllHIPClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CoverCustomValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomWeaponValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DOpenClickManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTouchValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTouchValuesManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DEnableButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DEnableButtonClickManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DCloseClickManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrTouch3DConfirmClickManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DCloseSliderChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DSliderChangeManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTouch3DCloseSliderChangeManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTouch3DEnableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTouch3DEnableInfoManual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssaultRiflesToggele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubMachineGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShotGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLightMachineGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSniperRifleToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPistolToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI_EX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update3DTouchStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIOS13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExtendAdvanceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAdvanceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableLimitFireRangeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpModeTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPveModeTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveInstantValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveCachedValueToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}

	template <typename T = void> T T_FireMode_Init_0() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x286F4F0))(this);
	}
	template <typename T = void> T T_SettingsNewFireModeControlController_Go() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x286F9F8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x286FD94))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x286FE68))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2871A38))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2871C88))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2871DB8))(this);
	}
	template <typename T = void> T RegisterUIEvent() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287009C))(this);
	}
	template <typename T = void> T OnEnableControl() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28728BC))(this);
	}
	template <typename T = void> T OnAvanceEnableControl() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287342C))(this);
	}
	template <typename T = void> T TLogFireMode() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287314C))(this);
	}
	template <typename T = void> T OnCustomBtnClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287371C))(this);
	}
	template <typename T = void> T HandleEmulatorInit() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2871768))(this);
	}
	template <typename T = void> T SetCategoryFireModeToggele(uintptr_t ads, uintptr_t hip, uintptr_t type) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2873C78))(this, ads, hip, type);
	}
	template <typename T = void> T SetAllToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2873EB4))(this);
	}
	template <typename T = void> T SetCategoryFireMode(uintptr_t ads, uintptr_t type) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x287457C))(this, ads, type);
	}
	template <typename T = void> T UpdateAdvanceEXUI() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2874B18))(this);
	}
	template <typename T = void> T OnAllADSClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2874CC4))(this);
	}
	template <typename T = void> T OnAllHIPClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287571C))(this);
	}
	template <typename T = void> T OnCustomClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875AF4))(this);
	}
	template <typename T = void> T SetCustomValues() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875C48))(this);
	}
	template <typename T = void> T CoverCustomValues() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28748C8))(this);
	}
	template <typename T = void> T SetCustomWeaponValue(uintptr_t weaponCategory) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t))(Il2CppBase() + 0x2875D64))(this, weaponCategory);
	}
	template <typename T = void> T OnTouch3DOpenClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875ED0))(this);
	}
	template <typename T = void> T OnTouch3DOpenClickManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876248))(this);
	}
	template <typename T = void> T SetTouchValues() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28760C8))(this);
	}
	template <typename T = void> T SetTouchValuesManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876470))(this);
	}
	template <typename T = void> T OnTouch3DEnableButtonClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28765F0))(this);
	}
	template <typename T = void> T OnTouch3DEnableButtonClickManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876A94))(this);
	}
	template <typename T = void> T OnBrTouch3DCloseClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876BF8))(this);
	}
	template <typename T = void> T OnBrTouch3DConfirmClick() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876D4C))(this);
	}
	template <typename T = void> T OnBrTouch3DCloseClickManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876EA0))(this);
	}
	template <typename T = void> T OnBrTouch3DConfirmClickManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876FF4))(this);
	}
	template <typename T = void> T OnTouch3DSliderChange() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877148))(this);
	}
	template <typename T = void> T OnTouch3DCloseSliderChange() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28773D0))(this);
	}
	template <typename T = void> T OnTouch3DSliderChangeManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877520))(this);
	}
	template <typename T = void> T OnTouch3DCloseSliderChangeManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877670))(this);
	}
	template <typename T = void> T UpdateTouch3DEnableInfo() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2876754))(this);
	}
	template <typename T = void> T UpdateTouch3DEnableInfoManual() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28768F4))(this);
	}
	template <typename T = void> T OnAssaultRiflesToggele() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875064))(this);
	}
	template <typename T = void> T OnSubMachineGunToggeleADSToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875230))(this);
	}
	template <typename T = void> T OnShotGunToggeleADSToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287532C))(this);
	}
	template <typename T = void> T OnLightMachineGunToggeleADSToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875428))(this);
	}
	template <typename T = void> T OnSniperRifleToggeleADSToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875524))(this);
	}
	template <typename T = void> T OnPistolToggeleADSToggle() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2875620))(this);
	}
	template <typename T = void> T UpdateUI(uintptr_t modeType) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t))(Il2CppBase() + 0x2877934))(this, modeType);
	}
	template <typename T = void> T UpdateUI_EX() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877F70))(this);
	}
	template <typename T = void> T UpdateUIStatus() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877C0C))(this);
	}
	template <typename T = void> T Update3DTouchStatus() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2872B9C))(this);
	}
	template <typename T = bool> T IsIOS13() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28780A8))(this);
	}
	template <typename T = void> T OnExtendAdvanceBtn() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2878178))(this);
	}
	template <typename T = void> T OnCloseAdvanceBtn() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2878400))(this);
	}
	template <typename T = void> T OnEnableLimitFireRangeChange() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28784EC))(this);
	}
	template <typename T = void> T OnPvpModeTabClick(int32_t index) {
		return ((T (*)(SettingsNewFireModeControlController*, int32_t))(Il2CppBase() + 0x287863C))(this, index);
	}
	template <typename T = void> T OnBrModeTabClick(int32_t index) {
		return ((T (*)(SettingsNewFireModeControlController*, int32_t))(Il2CppBase() + 0x287908C))(this, index);
	}
	template <typename T = void> T OnPveModeTabClick(int32_t index) {
		return ((T (*)(SettingsNewFireModeControlController*, int32_t))(Il2CppBase() + 0x2879248))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2872150))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewFireModeControlController*, int32_t))(Il2CppBase() + 0x2879404))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t))(Il2CppBase() + 0x2879644))(this, message);
	}
	template <typename T = void> T OnRestoreChange(uintptr_t message) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t))(Il2CppBase() + 0x2879884))(this, message);
	}
	template <typename T = void> T SaveInstantValueToServer() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x28732E8))(this);
	}
	template <typename T = void> T SaveCachedValueToServer() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x2877298))(this);
	}
	template <typename T = void> T T_FireMode_Init_0m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2879A40))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2879CD8))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2879F74))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x287A214))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x287A378))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x287A564))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x287A6C8))(this, tutorialType, info);
	}
	template <typename T = void> T T_FireMode_Init_0m__7(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SettingsNewFireModeControlController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x287A82C))(this, tutorialType, info);
	}
	template <typename T = void> static T T_SettingsNewFireModeControlController_Gom__8() {
		return ((T (*)(void *))(Il2CppBase() + 0x287AAE0))(0);
	}
	template <typename T = void> T OnEnableControlm__9() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287ACF4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287AE60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287AE68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287AE70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287AE78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsNewFireModeControlController*))(Il2CppBase() + 0x287AE80))(this);
	}

};

}
