#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass210
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass21_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& property() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T DOFadeb__0() {
		return ((T (*)(cDisplayClass210*))(Il2CppBase() + 0x51D26A8))(this);
	}
	template <typename T = void> T DOFadeb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass210*, uintptr_t))(Il2CppBase() + 0x51D26DC))(this, x);
	}

};

}
