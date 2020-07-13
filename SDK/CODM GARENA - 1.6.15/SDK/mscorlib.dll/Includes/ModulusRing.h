#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModulusRing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ModulusRing"));
	}

	template <typename T = uintptr_t> T& mod() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& constant() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T BarrettReduction_1(uintptr_t x) {
		return ((T (*)(ModulusRing*, uintptr_t))(Il2CppBase() + 0x3F9E150))(this, x);
	}
	template <typename T = uintptr_t> T Multiply_1(uintptr_t a, uintptr_t b) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9E4B8))(this, a, b);
	}
	template <typename T = uintptr_t> T Difference_1(uintptr_t a, uintptr_t b) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9DEA4))(this, a, b);
	}
	template <typename T = uintptr_t> T Pow_2(uintptr_t a, uintptr_t k) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9AD58))(this, a, k);
	}
	template <typename T = uintptr_t> T Pow_3(uint32_t b, uintptr_t exp) {
		return ((T (*)(ModulusRing*, uint32_t, uintptr_t))(Il2CppBase() + 0x3F9E754))(this, b, exp);
	}

};

}
