#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class RenderPipelineManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "RenderPipelineManager"));
	}

	template <typename T = uintptr_t> static T& s_CurrentPipelineAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& currentPipeline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_currentPipeline() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB2864))(0);
	}
	template <typename T = void> static T set_currentPipeline(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB28E4))(0, value);
	}
	template <typename T = void> static T CleanupRenderPipeline() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB2968))(0);
	}
	template <typename T = bool> static T DoRenderLoop_Internal(uintptr_t pipe, Il2CppArray<uintptr_t>* cameras, uintptr_t loopPtr) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4DB2AF0))(0, pipe, cameras, loopPtr);
	}
	template <typename T = bool> static T PrepareRenderPipeline(uintptr_t pipe) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB2C78))(0, pipe);
	}

};

}
