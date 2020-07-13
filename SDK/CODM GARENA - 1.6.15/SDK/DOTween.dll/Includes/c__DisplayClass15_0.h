#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass150
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass15_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOIntensityb__0() {
		return ((T (*)(cDisplayClass150*))(Il2CppBase() + 0x44CEDBC))(this);
	}
	template <typename T = void> T DOIntensityb__1(float x) {
		return ((T (*)(cDisplayClass150*, float))(Il2CppBase() + 0x44CEDE8))(this, x);
	}

};

}
