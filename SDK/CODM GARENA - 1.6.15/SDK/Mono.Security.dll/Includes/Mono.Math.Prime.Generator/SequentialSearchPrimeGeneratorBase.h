#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime.Generator {

class SequentialSearchPrimeGeneratorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase"));
	}


	template <typename T = uintptr_t> T GenerateSearchBase(int32_t bits, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t, uintptr_t))(Il2CppBase() + 0x47C7CDC))(this, bits, context);
	}
	template <typename T = uintptr_t> T GenerateNewPrime(int32_t bits) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t))(Il2CppBase() + 0x47C7DA8))(this, bits);
	}
	template <typename T = uintptr_t> T GenerateNewPrime_1(int32_t bits, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t, uintptr_t))(Il2CppBase() + 0x47C7DBC))(this, bits, context);
	}
	template <typename T = bool> T IsPrimeAcceptable(uintptr_t bi, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C8238))(this, bi, context);
	}

};

}
