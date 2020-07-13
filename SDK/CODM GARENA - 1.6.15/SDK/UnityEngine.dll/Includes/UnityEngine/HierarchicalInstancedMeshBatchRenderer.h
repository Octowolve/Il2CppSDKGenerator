#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HierarchicalInstancedMeshBatchRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HierarchicalInstancedMeshBatchRenderer"));
	}


	template <typename T = void> T AddRenderer(uintptr_t renderer) {
		return ((T (*)(HierarchicalInstancedMeshBatchRenderer*, uintptr_t))(Il2CppBase() + 0x47A1660))(this, renderer);
	}

};

}
