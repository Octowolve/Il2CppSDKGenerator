#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CrossAssistanceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CrossAssistanceInfo"));
	}

	template <typename T = uintptr_t> T& CrossAssistanceGO() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsEffectVisible() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& meshRenderers() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
