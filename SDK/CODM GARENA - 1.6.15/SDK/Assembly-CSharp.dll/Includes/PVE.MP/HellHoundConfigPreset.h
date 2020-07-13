#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HellHoundConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HellHoundConfigPreset"));
	}

	template <typename T = float> T& sprintSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& visionRange() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& visionAngle() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ClimbAnim() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& prepareMoveDuration() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& climbAnimHeight() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& colorCorrectionConfig() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& delayedRecoverTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& meleeAttackRange() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& meleeStartDistance() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& explodeDamageRadius() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& explodeAttenuationRadius() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& maxDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& minDamageValueToPlayer() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& maxDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& minDamageValueToZombie() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_radiusZ() {
		return ((T (*)(HellHoundConfigPreset*))(Il2CppBase() + 0x460017C))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(HellHoundConfigPreset*))(Il2CppBase() + 0x460035C))(this);
	}
	template <typename T = float> T get_climbDuration() {
		return ((T (*)(HellHoundConfigPreset*))(Il2CppBase() + 0x460036C))(this);
	}

};

}
