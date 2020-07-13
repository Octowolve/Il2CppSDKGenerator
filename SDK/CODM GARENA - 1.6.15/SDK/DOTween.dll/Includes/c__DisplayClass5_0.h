#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass50
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass5_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOFieldOfViewb__0() {
		return ((T (*)(cDisplayClass50*))(Il2CppBase() + 0x51D3714))(this);
	}
	template <typename T = void> T DOFieldOfViewb__1(float x) {
		return ((T (*)(cDisplayClass50*, float))(Il2CppBase() + 0x51D3740))(this, x);
	}

};

}
