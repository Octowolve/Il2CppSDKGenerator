#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeActiveState"));
	}

	template <typename T = bool> T& DelayCheckAmmo() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadeActiveState*, float))(Il2CppBase() + 0x1C6F340))(this, DeltaTime);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6F648))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6F7E0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6F90C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadeActiveState*, float))(Il2CppBase() + 0x1C6FA50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6FA54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6FA58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGrenadeActiveState*))(Il2CppBase() + 0x1C6FA5C))(this);
	}

};

}
