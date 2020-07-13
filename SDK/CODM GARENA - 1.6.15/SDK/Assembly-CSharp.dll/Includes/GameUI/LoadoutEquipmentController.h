#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutEquipmentController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutEquipmentController"));
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
	template <typename T = uintptr_t> static T& CacheLethalType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& CacheTacticalType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& CachePosType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Lathel_2_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutEquipmentController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutEquipmentController_EquipClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_LoadoutEquipmentController_ItemClick() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResModelChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = void> T T_Lathel_2_Init() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A238E8))(this);
	}
	template <typename T = void> T T_LoadoutEquipmentController_Go() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A23B20))(this);
	}
	template <typename T = void> T T_LoadoutEquipmentController_EquipClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A24028))(this);
	}
	template <typename T = void> T T_LoadoutEquipmentController_ItemClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2423C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A243F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A244CC))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A24610))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2486C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A263C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A26588))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A266A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A26AA4))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A26D4C))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A26EA8))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutEquipmentController*, bool))(Il2CppBase() + 0x1A26F8C))(this, show);
	}
	template <typename T = void> T UpdateItemList() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A24B34))(this);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A282B8))(this);
	}
	template <typename T = void> T UpdateItemInfo(int32_t index) {
		return ((T (*)(LoadoutEquipmentController*, int32_t))(Il2CppBase() + 0x1A25B44))(this, index);
	}
	template <typename T = void> T SetWeaponAssetState(int32_t itemId) {
		return ((T (*)(LoadoutEquipmentController*, int32_t))(Il2CppBase() + 0x1A28D00))(this, itemId);
	}
	template <typename T = void> T SetWeaponAssetInfo(int32_t itemId) {
		return ((T (*)(LoadoutEquipmentController*, int32_t))(Il2CppBase() + 0x1A28E90))(this, itemId);
	}
	template <typename T = void> T OnResModelChanged() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A29084))(this);
	}
	template <typename T = void> T UpdateBtnView() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A28570))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A249DC))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A2A0B4))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A2A6B8))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A2A8E0))(this, message);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2AC20))(this);
	}
	template <typename T = void> T OnTakeOffBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2AEE4))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2B0D0))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A2B318))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A2B56C))(this, list, userContext);
	}
	template <typename T = void> T T_Lathel_2_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A2B71C))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_2_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A2B830))(this, tutorialType, info);
	}
	template <typename T = void> T T_Lathel_2_Initm__2() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2B9BC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutEquipmentController*, uintptr_t))(Il2CppBase() + 0x1A2BB4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutEquipmentController*))(Il2CppBase() + 0x1A2BB54))(this);
	}

};

}
