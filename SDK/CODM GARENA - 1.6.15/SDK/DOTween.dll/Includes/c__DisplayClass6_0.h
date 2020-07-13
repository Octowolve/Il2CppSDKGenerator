#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass6_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DONearClipPlaneb__0() {
		return ((T (*)(cDisplayClass60*))(Il2CppBase() + 0x51D3BBC))(this);
	}
	template <typename T = void> T DONearClipPlaneb__1(float x) {
		return ((T (*)(cDisplayClass60*, float))(Il2CppBase() + 0x51D3BE8))(this, x);
	}

};

}
