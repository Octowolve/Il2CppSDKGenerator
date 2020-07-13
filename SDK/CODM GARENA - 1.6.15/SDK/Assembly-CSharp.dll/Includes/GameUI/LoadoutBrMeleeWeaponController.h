#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrMeleeWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrMeleeWeaponController"));
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
	template <typename T = uintptr_t> static T& CacheEquipedMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheWeaponMeleeType() {
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
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C0D0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C1A4))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C2DC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C534))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C678))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, bool))(Il2CppBase() + 0x234C764))(this, refreshDetail);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234C858))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234CB14))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234CE80))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t))(Il2CppBase() + 0x234D0C4))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234D220))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, bool))(Il2CppBase() + 0x234D304))(this, show);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, bool))(Il2CppBase() + 0x234C964))(this, refreshDetail);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234DA6C))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234E100))(this);
	}
	template <typename T = void> T ShowCurrnetEquipWeapon() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234E6D0))(this);
	}
	template <typename T = void> T UpdateTab(bool refreshReddot) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, bool))(Il2CppBase() + 0x234D96C))(this, refreshReddot);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234E228))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t))(Il2CppBase() + 0x234F5C0))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t))(Il2CppBase() + 0x234F7EC))(this, message);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234FAD0))(this);
	}
	template <typename T = void> T OnWeaponEquipedBtnClick() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234FD74))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t))(Il2CppBase() + 0x234FE3C))(this, message);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x234E994))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x23500DC))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x23501B0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t, int32_t))(Il2CppBase() + 0x2350590))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350714))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350718))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x235071C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrMeleeWeaponController*))(Il2CppBase() + 0x2350724))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutBrMeleeWeaponController*, uintptr_t))(Il2CppBase() + 0x2350728))(this, P0);
	}

};

}
