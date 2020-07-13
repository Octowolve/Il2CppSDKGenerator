#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Math.Prime {

class PrimalityTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Math.Prime", "PrimalityTest"));
	}


	template <typename T = bool> T Invoke_1(uintptr_t bi, uintptr_t confidence) {
		return ((T (*)(PrimalityTest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9ED64))(this, bi, confidence);
	}
	template <typename T = uintptr_t> T BeginInvoke_1(uintptr_t bi, uintptr_t confidence, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PrimalityTest*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F9EE28))(this, bi, confidence, callback, object);
	}
	template <typename T = bool> T EndInvoke_1(uintptr_t result) {
		return ((T (*)(PrimalityTest*, uintptr_t))(Il2CppBase() + 0x3F9EEF0))(this, result);
	}

};

}
