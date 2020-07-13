#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class IRenderPipeline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "IRenderPipeline"));
	}


	template <typename T = bool> T get_disposed() {
		return ((T (*)(IRenderPipeline*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Render(uintptr_t renderContext, Il2CppArray<uintptr_t>* cameras) {
		return ((T (*)(IRenderPipeline*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, renderContext, cameras);
	}

};

}
