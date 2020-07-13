#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_FireModeHUD() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchWeapon2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchButtonEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFireModeHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGunGameSwitchGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C5633C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C564B8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C569FC))(this);
	}
	template <typename T = bool> T OnSwitchWeapon() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C56BC0))(this);
	}
	template <typename T = bool> T OnSwitchWeapon2() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C56F80))(this);
	}
	template <typename T = void> T SetSwitchButtonEnabled(bool inEnabled) {
		return ((T (*)(WeaponBtnController*, bool))(Il2CppBase() + 0x1C57100))(this, inEnabled);
	}
	template <typename T = uintptr_t> T GetViewGameObject() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57228))(this);
	}
	template <typename T = uintptr_t> T get_FireModeHUD() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57344))(this);
	}
	template <typename T = void> T CreateFireModeHUD() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C566E8))(this);
	}
	template <typename T = void> T SetActive(bool isActive, bool recursively, bool enableOptimize) {
		return ((T (*)(WeaponBtnController*, bool, bool, bool))(Il2CppBase() + 0x1C5734C))(this, isActive, recursively, enableOptimize);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C5742C))(this);
	}
	template <typename T = void> T OnGunGameSwitchGun(uintptr_t Msg) {
		return ((T (*)(WeaponBtnController*, uintptr_t))(Il2CppBase() + 0x1C57548))(this, Msg);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57670))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57720))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57728))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57730))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(WeaponBtnController*, bool, bool, bool))(Il2CppBase() + 0x1C57738))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57758))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WeaponBtnController*))(Il2CppBase() + 0x1C57760))(this);
	}

};

}
