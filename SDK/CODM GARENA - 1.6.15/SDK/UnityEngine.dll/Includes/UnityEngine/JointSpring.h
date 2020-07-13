#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class JointSpring
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "JointSpring"));
	}

	template <typename T = float> T& spring() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& damper() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
