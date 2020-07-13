#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CombatAxeProjectileSimulator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CombatAxeProjectileSimulator"));
	}

	template <typename T = uintptr_t> T& mWeaponImpactComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBounceWhenHitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreOneTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayBounceSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BounceImpact() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleImpactComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsCanBounceWhenHitPawn() {
		return ((T (*)(CombatAxeProjectileSimulator*))(Il2CppBase() + 0x4199A10))(this);
	}
	template <typename T = bool> T PreOneTick(uintptr_t deltaTime) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199AB0))(this, deltaTime);
	}
	template <typename T = void> T _PlayBounceSound(uintptr_t pPhyMaterial) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199B64))(this, pPhyMaterial);
	}
	template <typename T = void> T PlayStopSound() {
		return ((T (*)(CombatAxeProjectileSimulator*))(Il2CppBase() + 0x4199C94))(this);
	}
	template <typename T = void> T BounceImpact(uintptr_t info) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199DBC))(this, info);
	}
	template <typename T = void> T RecycleImpactComponent() {
		return ((T (*)(CombatAxeProjectileSimulator*))(Il2CppBase() + 0x4199E84))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanBounceWhenHitPawn() {
		return ((T (*)(CombatAxeProjectileSimulator*))(Il2CppBase() + 0x4199F98))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_PreOneTick(uintptr_t P0) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199FA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy__PlayBounceSound(uintptr_t P0) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199FA8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayStopSound() {
		return ((T (*)(CombatAxeProjectileSimulator*))(Il2CppBase() + 0x4199FB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BounceImpact(uintptr_t P0) {
		return ((T (*)(CombatAxeProjectileSimulator*, uintptr_t))(Il2CppBase() + 0x4199FB8))(this, P0);
	}

};

}
