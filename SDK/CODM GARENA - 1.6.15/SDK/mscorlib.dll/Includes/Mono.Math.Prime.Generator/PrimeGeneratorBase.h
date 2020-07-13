#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime.Generator {

class PrimeGeneratorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Math.Prime.Generator", "PrimeGeneratorBase"));
	}


	template <typename T = uintptr_t> T get_Confidence_1() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x3F9E800))(this);
	}
	template <typename T = uintptr_t> T get_PrimalityTest_1() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x3F9E808))(this);
	}
	template <typename T = int32_t> T get_TrialDivisionBounds_1() {
		return ((T (*)(PrimeGeneratorBase*))(Il2CppBase() + 0x3F9E8BC))(this);
	}
	template <typename T = uintptr_t> T GenerateNewPrime_1(int32_t bits) {
		return ((T (*)(PrimeGeneratorBase*, int32_t))(Il2CppBase() + 0x0))(this, bits);
	}

};

}
