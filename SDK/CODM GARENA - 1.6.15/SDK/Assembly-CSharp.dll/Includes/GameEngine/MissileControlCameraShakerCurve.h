#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MissileControlCameraShakerCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MissileControlCameraShakerCurve"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& shakeQueue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& randomStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(MissileControlCameraShakerCurve*, float, float, uintptr_t))(Il2CppBase() + 0x2709B9C))(this, elapsedTime, duartion, type);
	}
	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duartion) {
		return ((T (*)(MissileControlCameraShakerCurve*, float, float))(Il2CppBase() + 0x2709BB4))(this, elapsedTime, duartion);
	}

};

}
