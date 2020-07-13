#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutProfessionChipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutProfessionChipController"));
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
	template <typename T = uintptr_t> static T& CacheChipSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheSkinSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& mChipItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChipAllList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mChipShowList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& CacheShowChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& CacheShowChipIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& mOtherItemEasyList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherAllList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mOtherShowList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& CacheShowSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& CacheShowSkinIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> T& ChipTeachVideoUrl() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& VideoUrlKing() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& VideoUrlGarenaSA() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& VideoUrlKorea() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& VideoUrlVNG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& VideoUrlTest() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<uintptr_t, uint32_t>*>*> static T& CacheMenuReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x98);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChipList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChipTeachVideoUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCurrnetChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSlotReddotTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDetailItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponGotoBtnClick() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWebViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChipTeachVideoBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6BB3C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6BC10))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6BD4C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6C0FC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6C240))(this);
	}
	template <typename T = void> T ResetSomething() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6C338))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6C5B8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6CC74))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A6D118))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6D274))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A6D358))(this, show);
	}
	template <typename T = void> T SetWeaponData(bool refreshDetail) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A6C444))(this, refreshDetail);
	}
	template <typename T = void> T UpdateChipList() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6E028))(this);
	}
	template <typename T = void> T UpdateChipInfo() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6E674))(this);
	}
	template <typename T = Il2CppString*> T SetChipTeachVideoUrl(uintptr_t chipConf) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A70784))(this, chipConf);
	}
	template <typename T = void> T ShowCurrnetChip() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A70B44))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A71228))(this);
	}
	template <typename T = void> T UpdateTab(bool refreshReddot) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A6D9C8))(this, refreshReddot);
	}
	template <typename T = uint32_t> static T GetWeaponSlotReddotTimestamp(uint64_t weaponGuid, uintptr_t reddotSlot) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x1A6B534))(0, weaponGuid, reddotSlot);
	}
	template <typename T = void> T UpdateItemPanel(bool refreshDetail) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A6ECE8))(this, refreshDetail);
	}
	template <typename T = uintptr_t> T GetCurrentDetailItem() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A72448))(this);
	}
	template <typename T = void> T ShowItemList(bool refreshDetail) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A71F68))(this, refreshDetail);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6F44C))(this);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A6FAD8))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A72744))(this, message);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A72C58))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A72DB4))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A72FE0))(this, message);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A7329C))(this);
	}
	template <typename T = void> T OnWeaponEquipedBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A734F4))(this);
	}
	template <typename T = void> T OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A735BC))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A73C84))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A7402C))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A742A4))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A74540))(this, message);
	}
	template <typename T = void> T OnWebViewClose(uintptr_t message) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A74838))(this, message);
	}
	template <typename T = void> T OnChipTeachVideoBtn() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A74980))(this);
	}
	template <typename T = void> T RefreshAllView(bool refreshDetail) {
		return ((T (*)(LoadoutProfessionChipController*, bool))(Il2CppBase() + 0x1A74744))(this, refreshDetail);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A74AFC))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A74F08))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75130))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75138))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75158))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutProfessionChipController*))(Il2CppBase() + 0x1A75160))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutProfessionChipController*, uintptr_t))(Il2CppBase() + 0x1A75168))(this, P0);
	}

};

}
