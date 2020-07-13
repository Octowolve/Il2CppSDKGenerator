#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShaderCompileCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ShaderCompileCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* shaderName, Il2CppString* passName, int32_t passType, Il2CppString* stageType, Il2CppString* keywords) {
		return ((T (*)(ShaderCompileCallback*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x469A770))(this, shaderName, passName, passType, stageType, keywords);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* shaderName, Il2CppString* passName, int32_t passType, Il2CppString* stageType, Il2CppString* keywords, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ShaderCompileCallback*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x469AE14))(this, shaderName, passName, passType, stageType, keywords, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ShaderCompileCallback*, uintptr_t))(Il2CppBase() + 0x469AF00))(this, result);
	}

};

}
