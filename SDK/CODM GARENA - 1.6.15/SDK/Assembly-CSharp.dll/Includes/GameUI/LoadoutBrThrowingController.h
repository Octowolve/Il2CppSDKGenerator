#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrThrowingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrThrowingController"));
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
	template <typename T = uintptr_t> static T& CacheSelectedMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
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
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& CacheShowWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
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
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& CacheShowWeaponAttachIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01660))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01734))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01870))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01C20))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01D64))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A01E54))(this, refreshDetail);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A01F48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A021C8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A02794))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A02BD8))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A02D34))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A02E18))(this, show);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A02054))(this, refreshDetail);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A03BEC))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A04238))(this);
	}
	template <typename T = void> T ShowCurrnetEquipWeapon() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A058BC))(this);
	}
	template <typename T = void> T UpdateTab(bool refreshReddot) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A036A0))(this, refreshReddot);
	}
	template <typename T = uint32_t> static T GetWeaponSlotReddotTimestamp(uint32_t weaponId, uintptr_t reddotSlot) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1A06D84))(0, weaponId, reddotSlot);
	}
	template <typename T = void> T UpdateItemPanel(bool refreshDetail) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A04360))(this, refreshDetail);
	}
	template <typename T = uintptr_t> T GetCurrentDetailItem() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A07AD8))(this);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutBrThrowingController*, bool))(Il2CppBase() + 0x1A075D8))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A04D24))(this);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A050F4))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A09078))(this, message);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A09688))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A097E4))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A09A10))(this, message);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A09CCC))(this);
	}
	template <typename T = void> T OnWeaponEquipedBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A09ED8))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A09FA0))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0A6B8))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0A8FC))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A0AB3C))(this, message);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A05CBC))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0AD40))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A0AE14))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A0B5B0))(this, list, userContext);
	}
	template <typename T = uintptr_t> static T UpdateItemPanelm__0(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A0B7C8))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B7F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrThrowingController*))(Il2CppBase() + 0x1A0B800))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutBrThrowingController*, uintptr_t))(Il2CppBase() + 0x1A0B808))(this, P0);
	}

};

}
