#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x68);
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
	template <typename T = uintptr_t> static T& CacheEquipedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CachePosType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheSelectedMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& CacheWeaponSortStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& CacheWeaponDetailType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& CacheOtherSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& CacheAttachmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
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
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& CacheShowWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
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
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& CacheShowWeaponAttachIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& mTabMap() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutAndWeapon_2_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_3_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutWeaponController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutWeaponController_WeaponUpgroupBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutWeaponController_WeaponEquipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutWeaponController_DetailEquipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutWeaponController_ItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTimeoutItemUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCrosshairUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUpgroupBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOtherWeaponWhenUseFireOpenPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDecorateTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentSelectedWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}

	template <typename T = void> T T_LoadoutAndWeapon_2_Init() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F53990))(this);
	}
	template <typename T = void> T T_Lathel_3_Init() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F53BD0))(this);
	}
	template <typename T = void> T T_LoadoutWeaponController_Go() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F53FB0))(this);
	}
	template <typename T = void> T T_LoadoutWeaponController_WeaponUpgroupBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F54A00))(this);
	}
	template <typename T = void> T T_LoadoutWeaponController_WeaponEquipClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F54E5C))(this);
	}
	template <typename T = void> T T_LoadoutWeaponController_DetailEquipClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F553E0))(this);
	}
	template <typename T = void> T T_LoadoutWeaponController_ItemClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F55638))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F559AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F55A80))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F55BC8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F56358))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F565EC))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail, bool bFirstShow) {
		return ((T (*)(LoadoutWeaponController*, bool, bool))(Il2CppBase() + 0x1F564C0))(this, refreshDetail, bFirstShow);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F56D48))(this);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F56898))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F56E64))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F570B0))(this);
	}
	template <typename T = void> T OnNotifyTimeoutItemUpdate(uintptr_t message) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F572D4))(this, message);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F57620))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5777C))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F578AC))(this, show);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail, bool bFirstRefresh) {
		return ((T (*)(LoadoutWeaponController*, bool, bool))(Il2CppBase() + 0x1F569A4))(this, refreshDetail, bFirstRefresh);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5894C))(this);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5AD30))(this);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5AFE8))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5B2E4))(this);
	}
	template <typename T = void> T UpdateWeaponInfo(bool bPlayWeaponEffect) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F59490))(this, bPlayWeaponEffect);
	}
	template <typename T = void> T ShowCurrnetEquipWeapon(bool bPlayWeaponEffect) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F5B49C))(this, bPlayWeaponEffect);
	}
	template <typename T = void> T ShowCrosshairUI(bool show) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F5DBEC))(this, show);
	}
	template <typename T = void> T UpdateTab(bool forceRefresh) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F57F1C))(this, forceRefresh);
	}
	template <typename T = uint32_t> static T GetWeaponSlotReddotTimestamp(uint64_t weaponGuid, uintptr_t reddotSlot) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x1F5FA2C))(0, weaponGuid, reddotSlot);
	}
	template <typename T = void> T UpdateItemPanel(uintptr_t preMenuType, bool refreshDetail) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, bool))(Il2CppBase() + 0x1F59730))(this, preMenuType, refreshDetail);
	}
	template <typename T = uintptr_t> T GetCurrentDetailItem() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5FC5C))(this);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutWeaponController*, bool))(Il2CppBase() + 0x1F602B0))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo(uintptr_t preMenuType) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F5A1E8))(this, preMenuType);
	}
	template <typename T = bool> static T IsAttachmentMenu(uintptr_t lwmt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F614F0))(0, lwmt);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F5BB78))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F61848))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F61B24))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F61D50))(this, message);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6215C))(this);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F622C8))(this);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F625F8))(this);
	}
	template <typename T = void> T OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6294C))(this);
	}
	template <typename T = void> T OnWeaponUpgroupBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6314C))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F633A0))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F64208))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F64D34))(this);
	}
	template <typename T = uintptr_t> static T GetOtherWeaponWhenUseFireOpenPerk() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F615CC))(0);
	}
	template <typename T = void> T OnDecorateTabSwitch(int32_t index) {
		return ((T (*)(LoadoutWeaponController*, int32_t))(Il2CppBase() + 0x1F65000))(this, index);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F656CC))(this, message);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F65EB0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F66B40))(this, list, userContext);
	}
	template <typename T = uintptr_t> T GetCurrentSelectedWeaponPos() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F640F4))(this);
	}
	template <typename T = void> T T_LoadoutAndWeapon_2_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F66DB0))(this, tutorialType, info);
	}
	template <typename T = void> T T_LoadoutAndWeapon_2_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F66F00))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__2(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F67098))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__3(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F671E8))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__4(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F67374))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__5(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F674C4))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__6(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F67A30))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_3_Initm__7(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1F67B80))(this, tutorialType, info);
	}
	template <typename T = void> static T T_LoadoutWeaponController_Gom__8() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F67D0C))(0);
	}
	template <typename T = void> static T T_LoadoutWeaponController_Gom__9() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F67E4C))(0);
	}
	template <typename T = void> T T_LoadoutWeaponController_ItemClickm__A() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F67F8C))(this);
	}
	template <typename T = uintptr_t> static T UpdateItemPanelm__B(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F683E8))(0, s);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F683F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F683F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F683FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68408))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68418))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6841C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F68420))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68428))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponCellClick(uintptr_t P0) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F68430))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponFilterClick(uintptr_t P0) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F68434))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponFilterItemClick(uintptr_t P0) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F68438))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6843C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCompareWeaponBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68440))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68444))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F6844C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutWeaponController*))(Il2CppBase() + 0x1F68454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDecorateTabSwitch(int32_t P0) {
		return ((T (*)(LoadoutWeaponController*, int32_t))(Il2CppBase() + 0x1F68458))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyLoadoutWeaponUpdateData(uintptr_t P0) {
		return ((T (*)(LoadoutWeaponController*, uintptr_t))(Il2CppBase() + 0x1F6845C))(this, P0);
	}

};

}
