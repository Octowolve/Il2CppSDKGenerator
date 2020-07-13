#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PerInstanceDataCompressed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PerInstanceDataCompressed"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& instanceData() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
