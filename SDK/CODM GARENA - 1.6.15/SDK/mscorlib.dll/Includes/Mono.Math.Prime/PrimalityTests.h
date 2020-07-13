#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime {

class PrimalityTests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Math.Prime", "PrimalityTests"));
	}


	template <typename T = int32_t> static T GetSPPRounds_1(uintptr_t bi, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9EF24))(0, bi, confidence);
	}
	template <typename T = bool> static T Test(uintptr_t n, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9B234))(0, n, confidence);
	}
	template <typename T = bool> static T RabinMillerTest_1(uintptr_t n, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9F3E0))(0, n, confidence);
	}
	template <typename T = bool> static T SmallPrimeSppTest(uintptr_t bi, uintptr_t confidence) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9F11C))(0, bi, confidence);
	}

};

}
