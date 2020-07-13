#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass170
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass17_0"));
	}

	template <typename T = uintptr_t> T& startValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T DOColorb__0() {
		return ((T (*)(cDisplayClass170*))(Il2CppBase() + 0x44CEE6C))(this);
	}
	template <typename T = void> T DOColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass170*, uintptr_t))(Il2CppBase() + 0x44CEE8C))(this, x);
	}

};

}
