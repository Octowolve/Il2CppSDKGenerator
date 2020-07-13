#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderStrippingCallbackWithDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ShaderStrippingCallbackWithDetail"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t shader, uint64_t keywordSetPart1, uint64_t keywordSetPart2, uint64_t keywordSetPart3, uint64_t keywordSetPart4, bool isCompilingForGameRelease, int32_t shaderLod, Il2CppString* passName) {
		return ((T (*)(ShaderStrippingCallbackWithDetail*, uintptr_t, uint64_t, uint64_t, uint64_t, uint64_t, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x4E80B94))(this, shader, keywordSetPart1, keywordSetPart2, keywordSetPart3, keywordSetPart4, isCompilingForGameRelease, shaderLod, passName);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t shader, uint64_t keywordSetPart1, uint64_t keywordSetPart2, uint64_t keywordSetPart3, uint64_t keywordSetPart4, bool isCompilingForGameRelease, int32_t shaderLod, Il2CppString* passName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ShaderStrippingCallbackWithDetail*, uintptr_t, uint64_t, uint64_t, uint64_t, uint64_t, bool, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E81F8C))(this, shader, keywordSetPart1, keywordSetPart2, keywordSetPart3, keywordSetPart4, isCompilingForGameRelease, shaderLod, passName, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ShaderStrippingCallbackWithDetail*, uintptr_t))(Il2CppBase() + 0x4E82108))(this, result);
	}

};

}
