#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ZombieConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ZombieConfigPreset"));
	}

	template <typename T = uintptr_t> T& JumpUpAnim() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& JumpDownAnim() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ClimbOriginalAnim() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ClimbAnim() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& prepareMoveDuration() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& climbAnimHeight() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& attackAngle() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& meleeAttackRange() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& meleeStartDistance() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& attackTimeDefalut() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& attackSpeedScale() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& beLimbedConfig() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& beHeavyDamagedConfig() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_jumpUpDuration() {
		return ((T (*)(ZombieConfigPreset*))(Il2CppBase() + 0x43638EC))(this);
	}
	template <typename T = float> T get_jumpDownDuration() {
		return ((T (*)(ZombieConfigPreset*))(Il2CppBase() + 0x436391C))(this);
	}
	template <typename T = float> T get_climbDuration() {
		return ((T (*)(ZombieConfigPreset*))(Il2CppBase() + 0x436394C))(this);
	}
	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(ZombieConfigPreset*))(Il2CppBase() + 0x4363980))(this);
	}
	template <typename T = float> T get_attackTime() {
		return ((T (*)(ZombieConfigPreset*))(Il2CppBase() + 0x43639B0))(this);
	}

};

}
