#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BomberConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BomberConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& explosionTriggerRadius() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& explosionDelayTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& explodeDamageRadius() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& explodeAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& maxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& minDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& maxDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& minDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& beLimbedConfig() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& beHeavyDamagedConfig() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(BomberConfigPreset*))(Il2CppBase() + 0x49C526C))(this);
	}

};

}
