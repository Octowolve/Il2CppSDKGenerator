#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewLevelController"));
	}

	template <typename T = int32_t> static T& PanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mBattlePassConfDs() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& SelectedLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SelectedItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& SelectedIsVip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& curBpFrom() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> static T& IsAssignLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mAwardListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_BattlePass_Init_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_GetTutorialProgressAreaWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassSeasonChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAnchorPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLevelBestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBuyBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAwardFromLuckBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassLevelItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemTemplateClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySplitMaxlevelTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllMaskBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControlMaxlevelTipShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuickBuyLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindow_QuickBuyTire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}

	template <typename T = void> T T_BattlePass_Init_2() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C21B7C))(this);
	}
	template <typename T = int32_t> T T_GetTutorialProgressAreaWidth() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C21FBC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2211C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C221F0))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C224B4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C22628))(this);
	}
	template <typename T = void> T OnNotifyBattlePassSeasonChange(uintptr_t msg) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C11DC4))(this, msg);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C235A4))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C238BC))(this);
	}
	template <typename T = void> T ShowCommonAvatarView(bool bShow) {
		return ((T (*)(BattlePassNewLevelController*, bool))(Il2CppBase() + 0x2C2293C))(this, bShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C239A0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C23E0C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2C24138))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = float> T GetAvatarAnchorPosX() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C24660))(this);
	}
	template <typename T = void> T ShowLevelBestInfo(int32_t level, bool isOpenVips) {
		return ((T (*)(BattlePassNewLevelController*, int32_t, bool))(Il2CppBase() + 0x2C2477C))(this, level, isOpenVips);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C24E5C))(this);
	}
	template <typename T = void> T RefreshBuyBtn() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C244CC))(this);
	}
	template <typename T = void> T RefreshAward() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C23270))(this);
	}
	template <typename T = void> T RefreshAwardFromLuckBox() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C230D0))(this);
	}
	template <typename T = void> T RefreshAllData() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C237CC))(this);
	}
	template <typename T = void> T SetSeasonTime() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C234A4))(this);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C242E8))(this);
	}
	template <typename T = void> T CheckForProtocal() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2368C))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C27558))(this);
	}
	template <typename T = void> T OnBuyBtnClick() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C27760))(this);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C27B34))(this);
	}
	template <typename T = void> T OnNotifyBattlePassLevelItemClick(uintptr_t message) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C27E40))(this, message);
	}
	template <typename T = void> T OnItemTemplateClick(uintptr_t param) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C281C0))(this, param);
	}
	template <typename T = void> T SetWeaponAssetState() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C28458))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C28828))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C28A60))(this);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C28D4C))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(BattlePassNewLevelController*, bool))(Il2CppBase() + 0x2C22AC4))(this, show);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C28E7C))(this, msg);
	}
	template <typename T = void> T OnNotifySplitMaxlevelTipBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C28FD8))(this, msg);
	}
	template <typename T = void> T OnAllMaskBtnClick() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C290B8))(this);
	}
	template <typename T = void> T ControlMaxlevelTipShow(bool flag) {
		return ((T (*)(BattlePassNewLevelController*, bool))(Il2CppBase() + 0x2C26FA4))(this, flag);
	}
	template <typename T = void> T OnNotifyQuickBuyLevelBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t))(Il2CppBase() + 0x2C29190))(this, msg);
	}
	template <typename T = void> T ShowPopupWindow_QuickBuyTire(int32_t TireToLevel, int32_t CurrentLevel) {
		return ((T (*)(BattlePassNewLevelController*, int32_t, int32_t))(Il2CppBase() + 0x2C29308))(this, TireToLevel, CurrentLevel);
	}
	template <typename T = void> T ShowWeaponInfo(int32_t duration_time) {
		return ((T (*)(BattlePassNewLevelController*, int32_t))(Il2CppBase() + 0x2C24F74))(this, duration_time);
	}
	template <typename T = void> T T_BattlePass_Init_2m__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C29704))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C299F0))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C2A0A8))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C2A5AC))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C2A824))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C2AABC))(this, tutorialType, info);
	}
	template <typename T = void> T T_BattlePass_Init_2m__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(BattlePassNewLevelController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2C2AD34))(this, tutorialType, info);
	}
	template <typename T = void> T RefreshAwardm__7() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2AF48))(this);
	}
	template <typename T = void> static T T_BattlePass_Init_2m__8() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C2B0C4))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B19C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassNewLevelController*))(Il2CppBase() + 0x2C2B1D4))(this);
	}

};

}
