#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrWeaponController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CacheBRLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheSelectedMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> T& mWeaponItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponAllList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponShowList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& CacheShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& CacheShowWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& mDetailItemEasyList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherAllList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherShowList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& CacheShowWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& CacheShowWeaponAttachIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = float> T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUpgroupBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A14D78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A14E4C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A14F88))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A15338))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1548C))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A1557C))(this, refreshDetail);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A15670))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A158F0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A15E7C))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A162C0))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1641C))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A16500))(this, show);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A1577C))(this, refreshDetail);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A173D4))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A17A64))(this);
	}
	template <typename T = void> T ShowCurrnetEquipWeapon() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A19448))(this);
	}
	template <typename T = void> T UpdateTab(bool refreshReddot) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A16E88))(this, refreshReddot);
	}
	template <typename T = uint32_t> static T GetWeaponSlotReddotTimestamp(uint32_t weaponId, uintptr_t reddotSlot) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1A1AC44))(0, weaponId, reddotSlot);
	}
	template <typename T = void> T UpdateItemPanel(bool refreshDetail) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A17B8C))(this, refreshDetail);
	}
	template <typename T = uintptr_t> T GetCurrentDetailItem() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1BAE0))(this);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutBrWeaponController*, bool))(Il2CppBase() + 0x1A1B5E0))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A184DC))(this);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A188AC))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A1C084))(this, message);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1C5D0))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A1C72C))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A1C958))(this, message);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1CC80))(this);
	}
	template <typename T = void> T OnWeaponEquipedBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1CE8C))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1CFFC))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1D780))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1D9C4))(this);
	}
	template <typename T = void> T OnWeaponUpgroupBtnClick() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1DC6C))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A1DE6C))(this, message);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A19848))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E070))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A1E14C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A1E570))(this, list, userContext);
	}
	template <typename T = uintptr_t> static T UpdateItemPanelm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A1E7A4))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrWeaponController*))(Il2CppBase() + 0x1A1E7DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutBrWeaponController*, uintptr_t))(Il2CppBase() + 0x1A1E7E4))(this, P0);
	}

};

}
