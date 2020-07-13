#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelController"));
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
	template <typename T = int32_t> T& mCacheFloatRow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& SelectedLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SelectedItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& SelectedIsVip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& targetLevel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& curBpFrom() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> static T& IsAssignLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeasonSpriteShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassSeasonChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadLoadoutItemDetailPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLevelBestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBuyBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlowTableCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyPassBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleBtnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTargetBtnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TableFloatRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportBattlePassGetTiresBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckRewardBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHundredBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeasonShowCheckBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBattlePassLevelItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAwardFromLuckBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCheckRewardItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemTemplateClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuickBuyLevelBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySplitMaxlevelTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllMaskBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopupWindow_QuickBuyTire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291454))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32914F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291500))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291688))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291954))(this);
	}
	template <typename T = void> T SeasonSpriteShow() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292570))(this);
	}
	template <typename T = void> T OnNotifyBattlePassSeasonChange(uintptr_t msg) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3292754))(this, msg);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292AD8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292C4C))(this);
	}
	template <typename T = void> T ShowCommonAvatarView(bool bShow) {
		return ((T (*)(BattlePassLevelController*, bool))(Il2CppBase() + 0x3291C50))(this, bShow);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292D00))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329369C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BattlePassLevelController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3293ACC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshAllData() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292B88))(this);
	}
	template <typename T = void> T SetSeasonTime() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291EB4))(this);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3293C4C))(this);
	}
	template <typename T = float> T GetLoadLoadoutItemDetailPosX() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32959E8))(this);
	}
	template <typename T = void> T RefreshAward() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3292810))(this);
	}
	template <typename T = void> T ShowLevelBestInfo(int32_t level, bool isOpenVips) {
		return ((T (*)(BattlePassLevelController*, int32_t, bool))(Il2CppBase() + 0x3295AD4))(this, level, isOpenVips);
	}
	template <typename T = void> T RefreshBuyBtn() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3293E9C))(this);
	}
	template <typename T = void> T FlowTableCallback(int32_t row) {
		return ((T (*)(BattlePassLevelController*, int32_t))(Il2CppBase() + 0x3295FBC))(this, row);
	}
	template <typename T = void> T CheckForProtocal() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3291DA8))(this);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32966D0))(this);
	}
	template <typename T = void> T OnBuyPassBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32968A4))(this);
	}
	template <typename T = void> T OnTitleBtnDoubleClick(uintptr_t obj) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3296C44))(this, obj);
	}
	template <typename T = void> T OnTargetBtnDoubleClick(uintptr_t obj) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3296F48))(this, obj);
	}
	template <typename T = void> T TableFloatRow(int32_t level, int32_t style) {
		return ((T (*)(BattlePassLevelController*, int32_t, int32_t))(Il2CppBase() + 0x3296D40))(this, level, style);
	}
	template <typename T = void> T OnBuyLevelBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3297000))(this);
	}
	template <typename T = void> T ReportBattlePassGetTiresBtn() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32972A8))(this);
	}
	template <typename T = void> T OnCheckRewardBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32974B0))(this);
	}
	template <typename T = void> T OnHundredBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329766C))(this);
	}
	template <typename T = void> T OnSeasonShowCheckBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3297804))(this);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3297E64))(this);
	}
	template <typename T = void> T OnNotifyBattlePassLevelItemClick(uintptr_t message) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x32980E4))(this, message);
	}
	template <typename T = void> T RefreshAwardFromLuckBox() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3298480))(this);
	}
	template <typename T = void> T ShowWeaponInfo(bool isLevelItemClick, int32_t duration_time) {
		return ((T (*)(BattlePassLevelController*, bool, int32_t))(Il2CppBase() + 0x3293FF8))(this, isLevelItemClick, duration_time);
	}
	template <typename T = void> T SetWeaponAssetState() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3298644))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329896C))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3298B38))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassLevelController*, uintptr_t, int32_t))(Il2CppBase() + 0x32990B4))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(BattlePassLevelController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x32991B4))(this, table, cell, row);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3299498))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(BattlePassLevelController*, uintptr_t, int32_t))(Il2CppBase() + 0x32995B4))(this, table, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(BattlePassLevelController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x32997D8))(this, table, row, worldPos);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x32998A4))(this);
	}
	template <typename T = void> T SetCheckRewardItemList() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329796C))(this);
	}
	template <typename T = void> T OnItemTemplateClick(uintptr_t param) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3298DC4))(this, param);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x3299954))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(BattlePassLevelController*, bool))(Il2CppBase() + 0x3291F94))(this, show);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3299A94))(this, msg);
	}
	template <typename T = void> T OnNotifyQuickBuyLevelBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x3299BC0))(this, msg);
	}
	template <typename T = void> T OnNotifySplitMaxlevelTipBtnClick(uintptr_t msg) {
		return ((T (*)(BattlePassLevelController*, uintptr_t))(Il2CppBase() + 0x329A034))(this, msg);
	}
	template <typename T = void> T OnAllMaskBtnClick() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A160))(this);
	}
	template <typename T = void> T ShowPopupWindow_QuickBuyTire(int32_t TireToLevel, int32_t CurrentLevel) {
		return ((T (*)(BattlePassLevelController*, int32_t, int32_t))(Il2CppBase() + 0x3299CF8))(this, TireToLevel, CurrentLevel);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A284))(this);
	}
	template <typename T = void> T RefreshAwardm__1() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A370))(this);
	}
	template <typename T = void> T TableFloatRowm__2() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A568))(this);
	}
	template <typename T = void> T RefreshAwardFromLuckBoxm__3() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A6AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A73C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A74C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A754))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A75C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A76C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassLevelController*))(Il2CppBase() + 0x329A77C))(this);
	}

};

}
