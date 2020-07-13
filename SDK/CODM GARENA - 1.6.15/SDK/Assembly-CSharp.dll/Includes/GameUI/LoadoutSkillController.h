#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutSkillController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F425CC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F426A0))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F427DC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F42A38))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F43E4C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F43F74))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4404C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4444C))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutSkillController*, uintptr_t))(Il2CppBase() + 0x1F446F4))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F44850))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutSkillController*, bool))(Il2CppBase() + 0x1F44934))(this, show);
	}
	template <typename T = void> T UpdateItemList() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F42C98))(this);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F44FA4))(this);
	}
	template <typename T = void> T UpdateItemInfo(int32_t index) {
		return ((T (*)(LoadoutSkillController*, int32_t))(Il2CppBase() + 0x1F434AC))(this, index);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F459AC))(this);
	}
	template <typename T = void> T UpdateBtnView() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4525C))(this);
	}
	template <typename T = void> T UpdateTab() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F42BA0))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutSkillController*, uintptr_t))(Il2CppBase() + 0x1F46224))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutSkillController*, uintptr_t))(Il2CppBase() + 0x1F466F4))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutSkillController*, uintptr_t))(Il2CppBase() + 0x1F4691C))(this, message);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F46B54))(this);
	}
	template <typename T = void> T OnTakeOffBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F46E1C))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F47020))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutSkillController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F4757C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutSkillController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F477D4))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4795C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F47964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4796C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F47974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4797C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F47984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F4798C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F47994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutSkillController*, uintptr_t))(Il2CppBase() + 0x1F4799C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutSkillController*))(Il2CppBase() + 0x1F479A4))(this);
	}

};

}
