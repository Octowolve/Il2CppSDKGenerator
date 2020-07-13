#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass740
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass74_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOTimeScaleb__0() {
		return ((T (*)(cDisplayClass740*))(Il2CppBase() + 0x51D4638))(this);
	}
	template <typename T = void> T DOTimeScaleb__1(float x) {
		return ((T (*)(cDisplayClass740*, float))(Il2CppBase() + 0x51D465C))(this, x);
	}

};

}
