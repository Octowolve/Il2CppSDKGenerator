#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetUnClaimExpcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetUnClaimExp>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& ExpUnClaim() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t s) {
		return ((T (*)(GetUnClaimExpcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B5F468))(this, s);
	}

};

}
