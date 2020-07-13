#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheLoadout() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReddotNotNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutWeaponNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutBrWeaponNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutBrThrowingNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutBrMeleeWeaponNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutProfessionChipController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F69674))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F69718))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F698D8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F69980))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(LoadoutWeaponItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1F69A28))(this, list, index, data);
	}
	template <typename T = void> T SetAssetInfo() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F6A02C))(this);
	}
	template <typename T = void> T SetReddotActive(uintptr_t state) {
		return ((T (*)(LoadoutWeaponItemController*, uintptr_t))(Il2CppBase() + 0x1F66990))(this, state);
	}
	template <typename T = bool> T IsReddotNotNull() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F667A8))(this);
	}
	template <typename T = void> T RefreshLoadoutWeaponNavController(int32_t index) {
		return ((T (*)(LoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x1F6A1E4))(this, index);
	}
	template <typename T = void> T RefreshLoadoutBrWeaponNavController(int32_t index) {
		return ((T (*)(LoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x1F6ABB4))(this, index);
	}
	template <typename T = void> T RefreshLoadoutBrThrowingNavController(int32_t index) {
		return ((T (*)(LoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x1F6B888))(this, index);
	}
	template <typename T = void> T RefreshLoadoutBrMeleeWeaponNavController(int32_t index) {
		return ((T (*)(LoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x1F6AEF4))(this, index);
	}
	template <typename T = void> T RefreshLoadoutProfessionChipController(int32_t index) {
		return ((T (*)(LoadoutWeaponItemController*, int32_t))(Il2CppBase() + 0x1F6B1A4))(this, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F6BB28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F6BB30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F6BB38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponItemController*))(Il2CppBase() + 0x1F6BB40))(this);
	}

};

}
