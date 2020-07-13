#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SimpleShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SimpleShakeCurve"));
	}

	template <typename T = float> T& m_ShakeIntensity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_ShakeScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T SetParameters(float intensity) {
		return ((T (*)(SimpleShakeCurve*, float))(Il2CppBase() + 0x33F3340))(this, intensity);
	}
	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duration) {
		return ((T (*)(SimpleShakeCurve*, float, float))(Il2CppBase() + 0x33F3348))(this, elapsedTime, duration);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duration, uintptr_t type) {
		return ((T (*)(SimpleShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x33F3360))(this, elapsedTime, duration, type);
	}

};

}
