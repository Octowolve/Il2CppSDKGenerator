#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ShakeCurve"));
	}


	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duration) {
		return ((T (*)(ShakeCurve*, float, float))(Il2CppBase() + 0x0))(this, elapsedTime, duration);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duration, uintptr_t type) {
		return ((T (*)(ShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x0))(this, elapsedTime, duration, type);
	}

};

}
