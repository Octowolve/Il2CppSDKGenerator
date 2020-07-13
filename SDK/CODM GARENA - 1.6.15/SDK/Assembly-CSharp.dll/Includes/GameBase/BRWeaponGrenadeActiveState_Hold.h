#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRWeaponGrenadeActiveStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRWeaponGrenadeActiveState_Hold"));
	}

	template <typename T = bool> T& m_HadSwitchNextWeapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x21);
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
	template <typename T = uintptr_t> static T& __Hotfix0_TickTrySwitchToOtherWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(BRWeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3747708))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(BRWeaponGrenadeActiveStateHold*, float))(Il2CppBase() + 0x3747A58))(this, DeltaTime);
	}
	template <typename T = void> T TickTrySwitchToOtherWeapon() {
		return ((T (*)(BRWeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3747B64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(BRWeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3747EC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWeaponGrenadeActiveStateHold*, float))(Il2CppBase() + 0x3747EC8))(this, P0);
	}

};

}
