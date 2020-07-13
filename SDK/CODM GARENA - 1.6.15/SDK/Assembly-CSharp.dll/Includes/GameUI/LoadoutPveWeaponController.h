#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveWeaponController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mCacheSelectOffWallItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheSelectedMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CacheAttachmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> T& mWeaponItemEasyList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponAllList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponShowList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& CacheShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& CacheShowWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& mDetailItemEasyList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherAllList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherShowList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& CacheShowWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& CacheShowWeaponAttachIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& mCachePveLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& CacheEquipedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeoutItemUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUpgroupBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponShowedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuffTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSelectedWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9D460))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9D534))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9D6D4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9DA84))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9DCB8))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail) {
		return ((T (*)(LoadoutPveWeaponController*, bool))(Il2CppBase() + 0x1A9DBC4))(this, refreshDetail);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9DF10))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9E1F4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9E584))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1A9E864))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9E9C0))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutPveWeaponController*, bool))(Il2CppBase() + 0x1A9EAA4))(this, show);
	}
	template <typename T = void> T OnNotifyTimeoutItemUpdate(uintptr_t message) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1A9F114))(this, message);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail) {
		return ((T (*)(LoadoutPveWeaponController*, bool))(Il2CppBase() + 0x1A9E01C))(this, refreshDetail);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9FA2C))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA05C8))(this);
	}
	template <typename T = void> T ShowCurrnetEquipWeapon() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA3D68))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1A9F450))(this);
	}
	template <typename T = void> T UpdateItemPanel(uintptr_t preMenuType, bool refreshDetail, bool needRefreshView) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t, bool, bool))(Il2CppBase() + 0x1AA07A4))(this, preMenuType, refreshDetail, needRefreshView);
	}
	template <typename T = uintptr_t> T GetCurrentDetailItem() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA4374))(this);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutPveWeaponController*, bool))(Il2CppBase() + 0x1AA481C))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo(uintptr_t preMenuType) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA1038))(this, preMenuType);
	}
	template <typename T = bool> static T IsAttachmentMenu(uintptr_t lwmt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A6B458))(0, lwmt);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA18C8))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA5888))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA5B3C))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA5D64))(this, message);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA611C))(this);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA6294))(this);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA635C))(this);
	}
	template <typename T = void> T OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA6684))(this);
	}
	template <typename T = void> T OnWeaponUpgroupBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA6E84))(this);
	}
	template <typename T = void> T OnWeaponShowBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA70CC))(this);
	}
	template <typename T = void> T OnWeaponShowedBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA7308))(this);
	}
	template <typename T = void> T OnBuffTipBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA7480))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA75A0))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA7F44))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA8588))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA8814))(this, message);
	}
	template <typename T = uintptr_t> T GetCurrentSelectedWeaponPos() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA7E30))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1AA8EDC))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t, int32_t))(Il2CppBase() + 0x1AA9748))(this, list, userContext);
	}
	template <typename T = uintptr_t> static T UpdateItemPanelm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1AA98CC))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA98FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA9904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA990C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponCellClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA9914))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponFilterClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA991C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponFilterItemClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA9924))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA992C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCompareWeaponBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA9934))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA993C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA9944))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA994C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA9954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutPveWeaponController*))(Il2CppBase() + 0x1AA995C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponUpdateData(uintptr_t P0) {
		return ((T (*)(LoadoutPveWeaponController*, uintptr_t))(Il2CppBase() + 0x1AA9964))(this, P0);
	}

};

}
