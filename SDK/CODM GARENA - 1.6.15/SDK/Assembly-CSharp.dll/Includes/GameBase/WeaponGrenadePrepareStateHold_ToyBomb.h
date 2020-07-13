#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadePrepareStateHoldToyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadePrepareStateHold_ToyBomb"));
	}

	template <typename T = bool> T& hasStartFire() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldSwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToNextWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanCancelThrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50624))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*, float))(Il2CppBase() + 0x3A506D4))(this, DeltaTime);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A508A0))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50940))(this);
	}
	template <typename T = bool> T CanCancelThrow() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50AB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50B58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*, float))(Il2CppBase() + 0x3A50B60))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50B64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToNextWeapon() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50B6C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanCancelThrow() {
		return ((T (*)(WeaponGrenadePrepareStateHoldToyBomb*))(Il2CppBase() + 0x3A50B74))(this);
	}

};

}
