#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SpaceAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SpaceAttribute"));
	}

	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
