#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossSantaConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossSantaConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& spawnAnimLandTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& spawnAnimDuration() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& beAttackedRange() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& paradeHp() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& throwPropDamage() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& recoverCDMS() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& paradeZombieNum() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& detachSpawnZombieIntervalMs() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& danceZombieNum() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& danceZombieNumPerTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& danceZombies() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paradeZombies() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& throwPropConfig() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& fireBallConfig() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& summonDanceZombieConfig() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& fireBallIdleConfig() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& summonIdleConfig() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& gotoCombatCfg() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& leaveCombatCfg() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T get_extent() {
		return ((T (*)(BossSantaConfigPreset*))(Il2CppBase() + 0x49C6CD0))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(BossSantaConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6EFC))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossSantaConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6FEC))(this, P0);
	}

};

}
