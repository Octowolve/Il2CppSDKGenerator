#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ClusterTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ClusterTree"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Nodes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SortedInstances() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
