#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBrJetpackEquipmentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBrJetpackEquipmentController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mItemShowList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mItemAllList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CacheShowItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheEquipedItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheSquadMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& CachePosType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
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

	template <typename T = uintptr_t> T get_loadoutDS() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x23468C4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2346960))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2346A34))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2346B6C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2346DC4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2346E9C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2347EF8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2347FD0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2348450))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t))(Il2CppBase() + 0x2348754))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x23488B0))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, bool))(Il2CppBase() + 0x2348994))(this, show);
	}
	template <typename T = void> T UpdateItemList() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x23470F8))(this);
	}
	template <typename T = void> T UpdateItemInfo(int32_t index) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, int32_t))(Il2CppBase() + 0x2347840))(this, index);
	}
	template <typename T = void> T UpdateBtnView() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2348FFC))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x2347000))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t))(Il2CppBase() + 0x2349FCC))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t))(Il2CppBase() + 0x234A3B8))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t))(Il2CppBase() + 0x234A5E0))(this, message);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234A818))(this);
	}
	template <typename T = void> T OnEquipedBtnClick() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234AC34))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234ACFC))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234AF3C))(this);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x23496A0))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B0AC))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x234B2C4))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t, int32_t))(Il2CppBase() + 0x234B534))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBrJetpackEquipmentController*))(Il2CppBase() + 0x234B6F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutBrJetpackEquipmentController*, uintptr_t))(Il2CppBase() + 0x234B6F8))(this, P0);
	}

};

}
