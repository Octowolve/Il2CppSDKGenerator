#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BrutusConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BrutusConfigPreset"));
	}

	template <typename T = float> T& spawnEffectDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& meleeAttackRange() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& meleeStartDistance() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& chargePrepAnim() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& chargeEndAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& chargeDamage() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& chargeMinDistance() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& chargeMaxDistance() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& chargeSpeed() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& maxChargeRange() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& chargeCoolDown() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& helmetDropDamage() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& slashAngle() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& slashDamageRadius() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& slashDamage() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& slashAttackTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& slashAnim() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& beHitConfig() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& beHitWeakPointConfig() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& beHeavyDamagedConfig() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& ChargeDizzyDist() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DizzyBuffID() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackAnimLength() {
		return ((T (*)(BrutusConfigPreset*))(Il2CppBase() + 0x45FCF3C))(this);
	}
	template <typename T = float> T get_chargePrepAnimDuration() {
		return ((T (*)(BrutusConfigPreset*))(Il2CppBase() + 0x45FCF4C))(this);
	}
	template <typename T = float> T get_chargeEndAnimDuration() {
		return ((T (*)(BrutusConfigPreset*))(Il2CppBase() + 0x45FCF5C))(this);
	}

};

}
