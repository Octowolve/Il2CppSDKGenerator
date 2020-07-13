#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsWestControlController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsWestControlController"));
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
	template <typename T = uintptr_t> T& mModeType() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUIEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCategoryFireModeToggele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCategoryFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAdvanceEXUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssaultRiflesToggele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubMachineGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShotGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLightMachineGunToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSniperRifleToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPistolToggeleADSToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetToggle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExtendAdvanceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAdvanceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAvanceEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvanceEnableControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableLimitFireRangeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPvpModeTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrModeTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFeedbackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDefaultBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitTabsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BCCDC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BCD80))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BD8D0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BDAE8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BDBF8))(this);
	}
	template <typename T = void> T RegisterUIEvent() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BCF20))(this);
	}
	template <typename T = void> T OnCustomBtnClick() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BE424))(this);
	}
	template <typename T = void> T SetCategoryFireModeToggele(uintptr_t ads, uintptr_t hip, uintptr_t type) {
		return ((T (*)(SettingsWestControlController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BE6D8))(this, ads, hip, type);
	}
	template <typename T = void> T SetCategoryFireMode(uintptr_t ads, uintptr_t type) {
		return ((T (*)(SettingsWestControlController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28BE824))(this, ads, type);
	}
	template <typename T = void> T UpdateAdvanceEXUI() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BE928))(this);
	}
	template <typename T = void> T OnAssaultRiflesToggele() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BEA9C))(this);
	}
	template <typename T = void> T OnSubMachineGunToggeleADSToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BEB60))(this);
	}
	template <typename T = void> T OnShotGunToggeleADSToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BEC24))(this);
	}
	template <typename T = void> T OnLightMachineGunToggeleADSToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BECE8))(this);
	}
	template <typename T = void> T OnSniperRifleToggeleADSToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BEDAC))(this);
	}
	template <typename T = void> T OnPistolToggeleADSToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BEE70))(this);
	}
	template <typename T = void> T UpdateUI(uintptr_t modeType) {
		return ((T (*)(SettingsWestControlController*, uintptr_t))(Il2CppBase() + 0x28BEF34))(this, modeType);
	}
	template <typename T = void> T SetToggle() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BE2C8))(this);
	}
	template <typename T = void> T OnExtendAdvanceBtn() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF2B8))(this);
	}
	template <typename T = void> T OnCloseAdvanceBtn() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF478))(this);
	}
	template <typename T = void> T UpdateEnableControl() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF534))(this);
	}
	template <typename T = void> T UpdateAvanceEnableControl() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF6A0))(this);
	}
	template <typename T = void> T OnEnableControl() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF80C))(this);
	}
	template <typename T = void> T OnAvanceEnableControl() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BF920))(this);
	}
	template <typename T = void> T OnEnableLimitFireRangeChange() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BFA34))(this);
	}
	template <typename T = void> T OnPvpModeTabClick(int32_t index) {
		return ((T (*)(SettingsWestControlController*, int32_t))(Il2CppBase() + 0x28BFB4C))(this, index);
	}
	template <typename T = void> T OnBrModeTabClick(int32_t index) {
		return ((T (*)(SettingsWestControlController*, int32_t))(Il2CppBase() + 0x28BFC6C))(this, index);
	}
	template <typename T = void> T OnFeedbackBtnClick() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BFD8C))(this);
	}
	template <typename T = void> T OnDefaultBtnClick() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BFED0))(this);
	}
	template <typename T = void> T OnLogoutBtnClick() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BFFC0))(this);
	}
	template <typename T = void> T OnQuitClick() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C00C4))(this);
	}
	template <typename T = void> T OnQuitCallBack(uintptr_t result, int32_t context) {
		return ((T (*)(SettingsWestControlController*, uintptr_t, int32_t))(Il2CppBase() + 0x28C04B8))(this, result, context);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTabInfoList() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28BE080))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsWestControlController*, int32_t))(Il2CppBase() + 0x28C05C4))(this, depth);
	}
	template <typename T = void> T OnInitTabsFinish(uintptr_t message) {
		return ((T (*)(SettingsWestControlController*, uintptr_t))(Il2CppBase() + 0x28C0700))(this, message);
	}
	template <typename T = void> T OnRestoreChange(uintptr_t message) {
		return ((T (*)(SettingsWestControlController*, uintptr_t))(Il2CppBase() + 0x28C0970))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C0A8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C0A94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C0A9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C0AA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(SettingsWestControlController*))(Il2CppBase() + 0x28C0AAC))(this);
	}

};

}
