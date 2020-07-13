#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RuntimeAnimatorController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RuntimeAnimatorController"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_animationClips() {
		return ((T (*)(RuntimeAnimatorController*))(Il2CppBase() + 0x4E7B5E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetRuntimeParameters() {
		return ((T (*)(RuntimeAnimatorController*))(Il2CppBase() + 0x4E7B680))(this);
	}
	template <typename T = int32_t> T GetLayerIndex(Il2CppString* layerName) {
		return ((T (*)(RuntimeAnimatorController*, Il2CppString*))(Il2CppBase() + 0x4E7B718))(this, layerName);
	}

};

}
