#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "StateSettings"));
	}

	template <typename T = float> T& killDuration() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& deadMuscleWeight() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& deadMuscleDamper() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& maxFreezeSqrVelocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& freezePermanently() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& enableAngularLimitsOnKill() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& enableInternalCollisionsOnKill() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x38BDB58))(0);
	}

};

}
