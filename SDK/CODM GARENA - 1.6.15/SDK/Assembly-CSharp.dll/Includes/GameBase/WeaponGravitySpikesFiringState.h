#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGravitySpikesFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGravitySpikesFiringState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_StateMachine() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6DE20))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6DED8))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6DFFC))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E11C))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E1B4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E5B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E5B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E5C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E5C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGravitySpikesFiringState*))(Il2CppBase() + 0x1C6E5D0))(this);
	}

};

}
