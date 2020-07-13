#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class IRenderPipelineAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "IRenderPipelineAsset"));
	}


	template <typename T = void> T DestroyCreatedInstances() {
		return ((T (*)(IRenderPipelineAsset*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CreatePipeline() {
		return ((T (*)(IRenderPipelineAsset*))(Il2CppBase() + 0x0))(this);
	}

};

}
