#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GPUSkinRendererForAnyBones
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GPUSkinRendererForAnyBones"));
	}


	template <typename T = void> T ResetBones(Il2CppArray<uintptr_t>* inBones) {
		return ((T (*)(GPUSkinRendererForAnyBones*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47729FC))(this, inBones);
	}

};

}
