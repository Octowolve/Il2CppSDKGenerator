#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HuntConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HuntConfig"));
	}

	template <typename T = bool> T& EnableSpinAttack() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& attackRange() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& damageRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& fanAngle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& speedMultiplier() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& huntAnim() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& attackTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& maxAttackCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_attackDuration() {
		return ((T (*)(HuntConfig*))(Il2CppBase() + 0x46007D0))(this);
	}

};

}
