#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrimeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "", "PrimeHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& primes_table() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T TestPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4C221CC))(0, x);
	}
	template <typename T = int32_t> static T CalcPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4C22258))(0, x);
	}
	template <typename T = int32_t> static T ToPrime(int32_t x) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4C22344))(0, x);
	}

};

}
