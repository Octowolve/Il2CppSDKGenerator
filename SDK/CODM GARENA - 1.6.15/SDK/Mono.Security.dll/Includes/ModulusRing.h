#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModulusRing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "ModulusRing"));
	}

	template <typename T = uintptr_t> T& mod() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& constant() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T BarrettReduction(uintptr_t x) {
		return ((T (*)(ModulusRing*, uintptr_t))(Il2CppBase() + 0x47C7544))(this, x);
	}
	template <typename T = uintptr_t> T Multiply(uintptr_t a, uintptr_t b) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C78AC))(this, a, b);
	}
	template <typename T = uintptr_t> T Difference(uintptr_t a, uintptr_t b) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C7298))(this, a, b);
	}
	template <typename T = uintptr_t> T Pow(uintptr_t a, uintptr_t k) {
		return ((T (*)(ModulusRing*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C4728))(this, a, k);
	}
	template <typename T = uintptr_t> T Pow_1(uint32_t b, uintptr_t exp) {
		return ((T (*)(ModulusRing*, uint32_t, uintptr_t))(Il2CppBase() + 0x47C7B6C))(this, b, exp);
	}

};

}
