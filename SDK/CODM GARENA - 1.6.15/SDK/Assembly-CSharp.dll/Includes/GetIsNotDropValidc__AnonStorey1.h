#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetIsNotDropValidcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetIsNotDropValid>c__AnonStorey1"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetIsNotDropValidcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x43445EC))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetIsNotDropValidcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4344624))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetIsNotDropValidcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x434465C))(this, it);
	}

};

}
