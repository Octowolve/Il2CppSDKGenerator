#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class PoisonAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "PoisonAttackConfig"));
	}

	template <typename T = int32_t> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& poisonCountPerAttack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& projectileConfig() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& posionSplashRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& posionSplashDamage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& poisonBuffIDList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& poisionSplashDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& prepareAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& poisonAttackAnim() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& endAttackAnim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& projConfig() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& nodeSelectAngleRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& nodeSelectMinDistance() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& poisonMinDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& poisonResidualAssetID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(PoisonAttackConfig*))(Il2CppBase() + 0x3EC3C40))(this);
	}
	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(PoisonAttackConfig*))(Il2CppBase() + 0x3EC3C50))(this);
	}
	template <typename T = float> T get_endAttackAnimLen() {
		return ((T (*)(PoisonAttackConfig*))(Il2CppBase() + 0x3EC3C60))(this);
	}

};

}
