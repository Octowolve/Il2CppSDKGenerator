#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveEquipmentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveEquipmentController"));
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
	template <typename T = uintptr_t> static T& CachePVELoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& CacheShowItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& CacheShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheEquipedItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& CacheSortRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& CacheFilterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CachePosType() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentEquipmentItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A76410))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A764E4))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A76620))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7687C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A77AE4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A77BF0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A77FF0))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A78298))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A783F4))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutPveEquipmentController*, bool))(Il2CppBase() + 0x1A784D8))(this, show);
	}
	template <typename T = uintptr_t> T GetCurrentEquipmentItem() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A78B48))(this);
	}
	template <typename T = void> T UpdateItemList() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A76ADC))(this);
	}
	template <typename T = void> T UpdateItemInfo(int32_t index) {
		return ((T (*)(LoadoutPveEquipmentController*, int32_t))(Il2CppBase() + 0x1A77494))(this, index);
	}
	template <typename T = void> T UpdateBtnView() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A78D80))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A769E4))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A79800))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A79C8C))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A79EB4))(this, message);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7A0EC))(this);
	}
	template <typename T = void> T OnTakeOffBtnClick() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7A39C))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7A59C))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A7A7DC))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A7AA30))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPveEquipmentController*))(Il2CppBase() + 0x1A7ABE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A7ABF0))(this, P0);
	}

};

}
