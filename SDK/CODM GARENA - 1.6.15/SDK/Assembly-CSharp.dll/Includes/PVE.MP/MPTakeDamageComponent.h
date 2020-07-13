#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class MPTakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "MPTakeDamageComponent"));
	}

	template <typename T = float> T& HitBackAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& hitEffectDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T ShouldTriggerHitEffect(uintptr_t damageInfo) {
		return ((T (*)(MPTakeDamageComponent*, uintptr_t))(Il2CppBase() + 0x4624F90))(this, damageInfo);
	}
	template <typename T = void> T SimulateTakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(MPTakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4624FC8))(this, pawn, damageInfo);
	}

};

}
