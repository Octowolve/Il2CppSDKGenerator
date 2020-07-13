#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileHunterKiller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_HunterKiller"));
	}

	template <typename T = uintptr_t> T& Actor() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_HKSimulator() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> static T& m_RadarIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EnemyRadarIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetActor() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2438928))(this);
	}
	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileHunterKiller*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2438930))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T SyncStatus(uintptr_t msg) {
		return ((T (*)(WeaponProjectileHunterKiller*, uintptr_t))(Il2CppBase() + 0x2438A68))(this, msg);
	}
	template <typename T = void> T Explode(Il2CppVector3 ExplodeLocation, bool bCauseDamage, uintptr_t hitTarget) {
		return ((T (*)(WeaponProjectileHunterKiller*, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x2438CD8))(this, ExplodeLocation, bCauseDamage, hitTarget);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileHunterKiller*, float))(Il2CppBase() + 0x2438D40))(this, DeltaTime);
	}
	template <typename T = bool> T CheckTarget(Il2CppVector3 startPos, Il2CppVector3 rayDir, float dist, uintptr_t target) {
		return ((T (*)(WeaponProjectileHunterKiller*, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x24391FC))(this, startPos, rayDir, dist, target);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439474))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439A38))(this);
	}
	template <typename T = Il2CppString*> T GetRadarIcon() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439C7C))(this);
	}
	template <typename T = bool> T ShowInRadar() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439E34))(this);
	}
	template <typename T = bool> T ShouldCalBoundary() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439E3C))(this);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439E44))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439E4C))(this);
	}
	template <typename T = void> T EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectileHunterKiller*))(Il2CppBase() + 0x2439EF0))(this);
	}

};

}
