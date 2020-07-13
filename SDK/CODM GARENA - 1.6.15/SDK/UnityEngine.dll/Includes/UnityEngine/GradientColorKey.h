#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GradientColorKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GradientColorKey"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
