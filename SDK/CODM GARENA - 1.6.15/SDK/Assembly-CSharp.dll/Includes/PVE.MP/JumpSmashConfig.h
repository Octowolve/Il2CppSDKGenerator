#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class JumpSmashConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "JumpSmashConfig"));
	}

	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& jumpAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& smashAttackTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(JumpSmashConfig*))(Il2CppBase() + 0x4600BAC))(this);
	}
	template <typename T = float> T get_attackTotalDuration() {
		return ((T (*)(JumpSmashConfig*))(Il2CppBase() + 0x4600BBC))(this);
	}
	template <typename T = float> T get_smashAttackAbsoluateTime() {
		return ((T (*)(JumpSmashConfig*))(Il2CppBase() + 0x4600C04))(this);
	}

};

}
