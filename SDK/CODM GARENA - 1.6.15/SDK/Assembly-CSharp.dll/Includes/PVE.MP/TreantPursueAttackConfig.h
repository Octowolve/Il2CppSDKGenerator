#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class TreantPursueAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "TreantPursueAttackConfig"));
	}

	template <typename T = float> T& speedMultiplier() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fanAngle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& firstAttackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& secondAttackTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(TreantPursueAttackConfig*))(Il2CppBase() + 0x435DB20))(this);
	}

};

}
