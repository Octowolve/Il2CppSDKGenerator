#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass160
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass16_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOShadowStrengthb__0() {
		return ((T (*)(cDisplayClass160*))(Il2CppBase() + 0x44CEE14))(this);
	}
	template <typename T = void> T DOShadowStrengthb__1(float x) {
		return ((T (*)(cDisplayClass160*, float))(Il2CppBase() + 0x44CEE40))(this, x);
	}

};

}
