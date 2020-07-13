#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BurrowAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BurrowAttackConfig"));
	}

	template <typename T = uintptr_t> T& burrowAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& burrowOutInAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speedMultiplier() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AttackRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& spawnDemonSeedCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& demonSeedPreset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& seedSpawnOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& pushMomentum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(BurrowAttackConfig*))(Il2CppBase() + 0x45FD024))(this);
	}
	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(BurrowAttackConfig*))(Il2CppBase() + 0x45FD034))(this);
	}
	template <typename T = float> T get_nextPrepareTime() {
		return ((T (*)(BurrowAttackConfig*))(Il2CppBase() + 0x45FD044))(this);
	}
	template <typename T = float> T get_burrowAnimDuration() {
		return ((T (*)(BurrowAttackConfig*))(Il2CppBase() + 0x45FD054))(this);
	}

};

}
