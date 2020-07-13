#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutRoleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutRoleController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CacheAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheSquadMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheBrMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CachePveMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheEquipedRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheSelectedMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& CacheRoleSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> T& mRoleItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRoleAllList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRoleShowList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& CacheShowRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& CacheShowRoleIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
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
	template <typename T = uintptr_t> static T& CacheShowDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& CacheShowDetailItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& CacheShowRoleAppearanceMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& CacheEquipedRoleAppearance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = float> T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeoutItemUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResModelChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDetailItemToMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MenuCellToSkinType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverCacheRoleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentReddotFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRequestRoleSkinData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemFromMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F32770))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F32844))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F32AB4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F32E64))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail, bool bPlayEntranAni) {
		return ((T (*)(LoadoutRoleController*, bool, bool))(Il2CppBase() + 0x1F32F58))(this, refreshDetail, bPlayEntranAni);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F33084))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F33370))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F33A1C))(this);
	}
	template <typename T = void> T OnNotifyTimeoutItemUpdate(uintptr_t message) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F33EDC))(this, message);
	}
	template <typename T = void> T SetRoleData(bool refreshDetail, bool bPlayEntranAni) {
		return ((T (*)(LoadoutRoleController*, bool, bool))(Il2CppBase() + 0x1F33190))(this, refreshDetail, bPlayEntranAni);
	}
	template <typename T = void> T UpdateRoleList() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F35020))(this);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F36B90))(this);
	}
	template <typename T = void> T UpdateRoleInfo(bool bPlayEntranAni) {
		return ((T (*)(LoadoutRoleController*, bool))(Il2CppBase() + 0x1F3552C))(this, bPlayEntranAni);
	}
	template <typename T = void> T OnResModelChanged() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F38084))(this);
	}
	template <typename T = void> T UpdateTab(bool refreshReddot) {
		return ((T (*)(LoadoutRoleController*, bool))(Il2CppBase() + 0x1F34A5C))(this, refreshReddot);
	}
	template <typename T = uint32_t> static T GetRoleSlotReddotTimestamp(uint64_t roleGuid, uintptr_t appearance) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x1F38DA0))(0, roleGuid, appearance);
	}
	template <typename T = void> T UpdateItemPanel(bool refreshDetail, bool bPlayEntranAni) {
		return ((T (*)(LoadoutRoleController*, bool, bool))(Il2CppBase() + 0x1F363E4))(this, refreshDetail, bPlayEntranAni);
	}
	template <typename T = int32_t> T GetLoadoutIdx() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F38FD0))(this);
	}
	template <typename T = void> T CheckCurrentDetailItem() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F36E48))(this);
	}
	template <typename T = void> T AddDetailItemToMap(uintptr_t aType, uintptr_t item) {
		return ((T (*)(LoadoutRoleController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F3924C))(this, aType, item);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutRoleController*, bool))(Il2CppBase() + 0x1F3962C))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo(bool bPlayEntranAni) {
		return ((T (*)(LoadoutRoleController*, bool))(Il2CppBase() + 0x1F39DB4))(this, bPlayEntranAni);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F371F8))(this);
	}
	template <typename T = uintptr_t> T MenuCellToSkinType(uintptr_t menuType) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F387C8))(this, menuType);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F3A9D8))(this, message);
	}
	template <typename T = void> T RecoverCacheRoleSkin(uintptr_t menuType) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F3AC94))(this, menuType);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3AF10))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F3B094))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F3B2C0))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F341B8))(this, message);
	}
	template <typename T = uintptr_t> static T GetCurrentReddotFlag() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F3B580))(0);
	}
	template <typename T = void> T OnRoleEquipBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3B6D4))(this);
	}
	template <typename T = void> T OnRoleEquipedBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3BCF4))(this);
	}
	template <typename T = void> T OnRoleGotoBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3BDBC))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3C31C))(this);
	}
	template <typename T = uintptr_t> T GetRequestRoleSkinData() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3C964))(this);
	}
	template <typename T = void> T RemoveItemFromMap(uintptr_t item) {
		return ((T (*)(LoadoutRoleController*, uintptr_t))(Il2CppBase() + 0x1F3CEDC))(this, item);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3D09C))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3D7D4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutRoleController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F3DA14))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutRoleController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F3E438))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutRoleController*))(Il2CppBase() + 0x1F3E6F8))(this);
	}

};

}
