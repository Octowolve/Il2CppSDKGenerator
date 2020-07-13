#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class TweenCameraShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "TweenCameraShakeCurve"));
	}

	template <typename T = uintptr_t> T& tweenIntensity() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T SetIntensity(uintptr_t intensity) {
		return ((T (*)(TweenCameraShakeCurve*, uintptr_t))(Il2CppBase() + 0x2E70CCC))(this, intensity);
	}
	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duration) {
		return ((T (*)(TweenCameraShakeCurve*, float, float))(Il2CppBase() + 0x2E70CD4))(this, elapsedTime, duration);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duration, uintptr_t type) {
		return ((T (*)(TweenCameraShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x2E70CEC))(this, elapsedTime, duration, type);
	}

};

}
