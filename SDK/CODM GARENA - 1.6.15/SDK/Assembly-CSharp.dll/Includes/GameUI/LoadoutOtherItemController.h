#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutOtherItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutOtherItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mWeaponPromotionDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReddotNotNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutWeaponNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutBrWeaponNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutBrThrowingNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutRoleNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutSkillNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutEquipmentNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutPveWeaponNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutPveEquipmentNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutKillStreakNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutProfessionChipNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutJetpackEquipmentNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutParachuteEquipmentNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutPveUltNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutPveMeleeNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInLoadoutPvePistolNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCachItemLockTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A63CA8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A63D4C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A63F2C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A63FD4))(this);
	}
	template <typename T = void> T SetReddotActive(uintptr_t state) {
		return ((T (*)(LoadoutOtherItemController*, uintptr_t))(Il2CppBase() + 0x1A0B400))(this, state);
	}
	template <typename T = bool> T IsReddotNotNull() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A0B218))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(LoadoutOtherItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1A6407C))(this, list, index, data);
	}
	template <typename T = void> T RefreshInLoadoutWeaponNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A648B8))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutBrWeaponNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A6547C))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutBrThrowingNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A65DB0))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutRoleNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A6645C))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutSkillNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A66B7C))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutEquipmentNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A671A8))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutPveWeaponNavigation(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A677D4))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutPveEquipmentNavigation(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A6820C))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutKillStreakNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A68844))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutProfessionChipNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A69390))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutJetpackEquipmentNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A697C8))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutParachuteEquipmentNavController(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A69B3C))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutPveUltNavigation(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A69EB0))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutPveMeleeNavigation(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A6A268))(this, index);
	}
	template <typename T = void> T RefreshInLoadoutPvePistolNavigation(int32_t index) {
		return ((T (*)(LoadoutOtherItemController*, int32_t))(Il2CppBase() + 0x1A6A62C))(this, index);
	}
	template <typename T = void> T SetCachItemLockTip(bool isshowLock) {
		return ((T (*)(LoadoutOtherItemController*, bool))(Il2CppBase() + 0x1A6B064))(this, isshowLock);
	}
	template <typename T = bool> T RefreshInLoadoutKillStreakNavControllerm__0(uintptr_t it) {
		return ((T (*)(LoadoutOtherItemController*, uintptr_t))(Il2CppBase() + 0x1A6B848))(this, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A6B8AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A6B8B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A6B8BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutOtherItemController*))(Il2CppBase() + 0x1A6B8C4))(this);
	}

};

}
