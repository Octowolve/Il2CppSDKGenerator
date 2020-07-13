#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MatchTargetWeightMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MatchTargetWeightMask"));
	}

	template <typename T = Il2CppVector3> T& m_PositionXYZWeight() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_RotationWeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
