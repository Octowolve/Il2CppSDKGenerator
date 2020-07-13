#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass00
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass0_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOFadeb__0() {
		return ((T (*)(cDisplayClass00*))(Il2CppBase() + 0x44CE9C4))(this);
	}
	template <typename T = void> T DOFadeb__1(float x) {
		return ((T (*)(cDisplayClass00*, float))(Il2CppBase() + 0x44CE9F0))(this, x);
	}

};

}
