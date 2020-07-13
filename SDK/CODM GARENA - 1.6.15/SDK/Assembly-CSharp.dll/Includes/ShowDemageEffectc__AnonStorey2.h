#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowDemageEffectcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowDemageEffect>c__AnonStorey2"));
	}

	template <typename T = bool> T& bShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t explosionEff) {
		return ((T (*)(ShowDemageEffectcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B75E24))(this, explosionEff);
	}
	template <typename T = void> T m__1(uintptr_t brokenFireEff) {
		return ((T (*)(ShowDemageEffectcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B75FE0))(this, brokenFireEff);
	}
	template <typename T = void> T m__2(uintptr_t brokenSmokeEff) {
		return ((T (*)(ShowDemageEffectcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B76280))(this, brokenSmokeEff);
	}
	template <typename T = void> T m__3(uintptr_t brokenWhiteSmokeEff) {
		return ((T (*)(ShowDemageEffectcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B76520))(this, brokenWhiteSmokeEff);
	}

};

}
