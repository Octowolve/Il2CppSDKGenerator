#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass70
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass7_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOOrthoSizeb__0() {
		return ((T (*)(cDisplayClass70*))(Il2CppBase() + 0x51D4428))(this);
	}
	template <typename T = void> T DOOrthoSizeb__1(float x) {
		return ((T (*)(cDisplayClass70*, float))(Il2CppBase() + 0x51D4454))(this, x);
	}

};

}
