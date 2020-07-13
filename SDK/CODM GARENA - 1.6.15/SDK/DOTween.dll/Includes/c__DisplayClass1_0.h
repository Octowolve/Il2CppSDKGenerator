#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass1_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOPitchb__0() {
		return ((T (*)(cDisplayClass10*))(Il2CppBase() + 0x44CEA1C))(this);
	}
	template <typename T = void> T DOPitchb__1(float x) {
		return ((T (*)(cDisplayClass10*, float))(Il2CppBase() + 0x44CEA48))(this, x);
	}

};

}
