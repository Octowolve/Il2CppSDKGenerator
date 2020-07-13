#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SpinAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SpinAttackConfig"));
	}

	template <typename T = uintptr_t> T& SpinAttackAmin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& AttackTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FanAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& FanRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_TotalDuration() {
		return ((T (*)(SpinAttackConfig*))(Il2CppBase() + 0x435AF3C))(this);
	}

};

}
