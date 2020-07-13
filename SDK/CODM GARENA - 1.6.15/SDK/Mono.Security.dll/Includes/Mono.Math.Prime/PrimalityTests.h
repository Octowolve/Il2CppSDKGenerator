#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime {

class PrimalityTests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Math.Prime", "PrimalityTests"));
	}


	template <typename T = int32_t> static T GetSPPRounds(uintptr_t bi, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C833C))(0, bi, confidence);
	}
	template <typename T = bool> static T RabinMillerTest(uintptr_t n, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x47C8534))(0, n, confidence);
	}

};

}
