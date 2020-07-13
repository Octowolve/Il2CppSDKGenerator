#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LOD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LOD"));
	}

	template <typename T = float> T& screenRelativeTransitionHeight() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& fadeTransitionWidth() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& renderers() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& unloadable() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
