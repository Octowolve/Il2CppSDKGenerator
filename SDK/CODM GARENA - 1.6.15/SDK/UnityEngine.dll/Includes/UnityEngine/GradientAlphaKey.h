#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GradientAlphaKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GradientAlphaKey"));
	}

	template <typename T = float> T& alpha() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
