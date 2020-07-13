#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime.Generator {

class PrimeGeneratorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Math.Prime.Generator", "PrimeGeneratorBase"));
	}


	template <typename T = uintptr_t> T get_Confidence() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x47C7C18))(this);
	}
	template <typename T = uintptr_t> T get_PrimalityTest() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x47C7C20))(this);
	}
	template <typename T = int32_t> T get_TrialDivisionBounds() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x47C7CD4))(this);
	}
	template <typename T = uintptr_t> T GenerateNewPrime(int32_t bits) {
		return ((T (*)(PrimeGeneratorBase*, int32_t))(Il2CppBase() + 0x0))(this, bits);
	}

};

}
