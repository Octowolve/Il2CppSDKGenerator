#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZombieFireBurntConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZombieFireBurntConfigPreset"));
	}

	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& chooseTargetRadius() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& FireBallMaxDistance() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& FireBallStartDistance() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& FireBallSpawnPoint() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& FireBallContinueInterval() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& FireBallPreset() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& explodeDamageRadius() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& explodeAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& maxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& minDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& maxDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& minDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& dropRadius() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& dropPointsMinDistance() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& fireBallCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& fireBallInterval() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& lavaAssetID() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& lavaDamageRadius() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& lavaDamagePerSecond() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& lavaLifeSpan() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& endAttackAnim() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& beHeavyDamagedConfig() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(ZombieFireBurntConfigPreset*))(Il2CppBase() + 0x4363A94))(this);
	}
	template <typename T = float> T get_prepAnimLen() {
		return ((T (*)(ZombieFireBurntConfigPreset*))(Il2CppBase() + 0x4363AA4))(this);
	}
	template <typename T = float> T get_endAttackAnimLen() {
		return ((T (*)(ZombieFireBurntConfigPreset*))(Il2CppBase() + 0x4363AB4))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(ZombieFireBurntConfigPreset*, uintptr_t))(Il2CppBase() + 0x4363AC4))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(ZombieFireBurntConfigPreset*, uintptr_t))(Il2CppBase() + 0x4363C2C))(this, P0);
	}

};

}
