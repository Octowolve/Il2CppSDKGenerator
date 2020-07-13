#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetActivitycAnonStoreyB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActivity>c__AnonStoreyB"));
	}

	template <typename T = uintptr_t> T& activityType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetActivitycAnonStoreyB*, uintptr_t))(Il2CppBase() + 0x35313EC))(this, it);
	}

};

}
