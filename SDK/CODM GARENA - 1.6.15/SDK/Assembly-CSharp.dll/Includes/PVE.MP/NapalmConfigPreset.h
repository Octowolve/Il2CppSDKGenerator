#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class NapalmConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "NapalmConfigPreset"));
	}

	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& explosionDelayTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& deathFireDamagePerSecond() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& deathFireDamageToZombiePerSecond() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& deathFireDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& deathFireRadius() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& fireAssetID() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& meleeAttackRange() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& meleeStartDistance() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& explodeHealthRatio() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& explosionTriggerRadius() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& explodeDamageRadius() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& explodeAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& maxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& minDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& maxDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& minDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& beHeavyDamagedConfig() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(NapalmConfigPreset*))(Il2CppBase() + 0x462A544))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(NapalmConfigPreset*))(Il2CppBase() + 0x462A554))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(NapalmConfigPreset*, uintptr_t))(Il2CppBase() + 0x462A564))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(NapalmConfigPreset*, uintptr_t))(Il2CppBase() + 0x462A658))(this, P0);
	}

};

}
