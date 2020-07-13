#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass140
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass14_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T DOColorb__0() {
		return ((T (*)(cDisplayClass140*))(Il2CppBase() + 0x44CED54))(this);
	}
	template <typename T = void> T DOColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass140*, uintptr_t))(Il2CppBase() + 0x44CED80))(this, x);
	}

};

}
