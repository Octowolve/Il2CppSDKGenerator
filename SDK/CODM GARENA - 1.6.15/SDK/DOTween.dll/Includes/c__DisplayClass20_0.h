#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass200
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass20_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T DOFadeb__0() {
		return ((T (*)(cDisplayClass200*))(Il2CppBase() + 0x51D2638))(this);
	}
	template <typename T = void> T DOFadeb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass200*, uintptr_t))(Il2CppBase() + 0x51D2664))(this, x);
	}

};

}
