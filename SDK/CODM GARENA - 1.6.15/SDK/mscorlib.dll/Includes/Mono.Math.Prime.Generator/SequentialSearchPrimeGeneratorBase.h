#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime.Generator {

class SequentialSearchPrimeGeneratorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase"));
	}


	template <typename T = uintptr_t> T GenerateSearchBase_1(int32_t bits, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3F9E8C4))(this, bits, context);
	}
	template <typename T = uintptr_t> T GenerateNewPrime_2(int32_t bits) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t))(Il2CppBase() + 0x3F9E990))(this, bits);
	}
	template <typename T = uintptr_t> T GenerateNewPrime_3(int32_t bits, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, int32_t, uintptr_t))(Il2CppBase() + 0x3F9E9A4))(this, bits, context);
	}
	template <typename T = bool> T IsPrimeAcceptable_1(uintptr_t bi, uintptr_t context) {
		return ((T (*)(SequentialSearchPrimeGeneratorBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9EE20))(this, bi, context);
	}

};

}
