#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass40
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass4_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOFarClipPlaneb__0() {
		return ((T (*)(cDisplayClass40*))(Il2CppBase() + 0x51D3284))(this);
	}
	template <typename T = void> T DOFarClipPlaneb__1(float x) {
		return ((T (*)(cDisplayClass40*, float))(Il2CppBase() + 0x51D32B0))(this, x);
	}

};

}
