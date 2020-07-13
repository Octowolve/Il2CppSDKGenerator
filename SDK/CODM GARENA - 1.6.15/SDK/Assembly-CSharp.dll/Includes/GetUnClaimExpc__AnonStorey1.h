#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUnClaimExpcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUnClaimExp>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& s() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t t) {
		return ((T (*)(GetUnClaimExpcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B5F754))(this, t);
	}
	template <typename T = bool> T m__1(uintptr_t t) {
		return ((T (*)(GetUnClaimExpcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B5F7B4))(this, t);
	}
	template <typename T = bool> T m__2(uintptr_t t) {
		return ((T (*)(GetUnClaimExpcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3B5F814))(this, t);
	}

};

}
