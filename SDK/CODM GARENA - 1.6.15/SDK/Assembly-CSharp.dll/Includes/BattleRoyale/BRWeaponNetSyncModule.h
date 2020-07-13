#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWeaponNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWeaponNetSyncModule"));
	}

	template <typename T = uintptr_t> T& akObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartFireImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopFireImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResSwitchWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnSyncSwitchWeapon(uintptr_t msg) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661128))(this, msg);
	}
	template <typename T = void> T OnStartFireImpl(uintptr_t Msg) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661478))(this, Msg);
	}
	template <typename T = void> T OnStopFireImpl(uintptr_t Msg) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x26617DC))(this, Msg);
	}
	template <typename T = void> T OnResSwitchWeapon(uintptr_t msg) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661A1C))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncSwitchWeapon(uintptr_t P0) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661AD0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartFireImpl(uintptr_t P0) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661AD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStopFireImpl(uintptr_t P0) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661AE0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnResSwitchWeapon(uintptr_t P0) {
		return ((T (*)(BRWeaponNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2661AE8))(this, P0);
	}

};

}
