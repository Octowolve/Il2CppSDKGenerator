#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowLightEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowLightEffect>c__AnonStorey0"));
	}

	template <typename T = bool> T& bShow() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t lightEff) {
		return ((T (*)(ShowLightEffectcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2E2C6DC))(this, lightEff);
	}

};

}
