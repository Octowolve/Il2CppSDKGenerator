#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderStrippingCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ShaderStrippingCallback"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t shader, uint64_t keywordSetPart1, uint64_t keywordSetPart2, uint64_t keywordSetPart3, uint64_t keywordSetPart4) {
		return ((T (*)(ShaderStrippingCallback*, uintptr_t, uint64_t, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x4E80D7C))(this, shader, keywordSetPart1, keywordSetPart2, keywordSetPart3, keywordSetPart4);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t shader, uint64_t keywordSetPart1, uint64_t keywordSetPart2, uint64_t keywordSetPart3, uint64_t keywordSetPart4, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ShaderStrippingCallback*, uintptr_t, uint64_t, uint64_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E81E14))(this, shader, keywordSetPart1, keywordSetPart2, keywordSetPart3, keywordSetPart4, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ShaderStrippingCallback*, uintptr_t))(Il2CppBase() + 0x4E81F44))(this, result);
	}

};

}
