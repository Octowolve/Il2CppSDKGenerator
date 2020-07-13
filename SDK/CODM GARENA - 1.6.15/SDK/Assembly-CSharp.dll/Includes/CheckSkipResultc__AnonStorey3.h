#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckSkipResultcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckSkipResult>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CheckSkipResultcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x236A9F4))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(CheckSkipResultcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x236AA64))(this, x);
	}
	template <typename T = bool> T m__2(uintptr_t x) {
		return ((T (*)(CheckSkipResultcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x236AAA8))(this, x);
	}

};

}
