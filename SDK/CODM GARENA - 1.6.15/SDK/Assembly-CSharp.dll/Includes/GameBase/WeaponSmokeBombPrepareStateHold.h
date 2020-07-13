#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSmokeBombPrepareStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSmokeBombPrepareStateHold"));
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
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84A68))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*, float))(Il2CppBase() + 0x3A84B18))(this, DeltaTime);
	}
	template <typename T = bool> T ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84CE4))(this);
	}
	template <typename T = void> T SwitchToNextWeapon() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84D84))(this);
	}
	template <typename T = bool> T CanCancelThrow() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84EFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*, float))(Il2CppBase() + 0x3A84FA4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldSwitchToNextWeapon() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToNextWeapon() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84FB0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanCancelThrow() {
		return ((T (*)(WeaponSmokeBombPrepareStateHold*))(Il2CppBase() + 0x3A84FB8))(this);
	}

};

}
