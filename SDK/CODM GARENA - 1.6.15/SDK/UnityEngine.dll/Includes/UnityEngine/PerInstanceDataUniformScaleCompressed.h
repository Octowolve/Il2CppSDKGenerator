#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PerInstanceDataUniformScaleCompressed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PerInstanceDataUniformScaleCompressed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& instanceData() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
