#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsActivityInProgresscAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsActivityInProgress>c__AnonStoreyC"));
	}

	template <typename T = uintptr_t> T& activityType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsActivityInProgresscAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x3531C5C))(this, it);
	}

};

}
