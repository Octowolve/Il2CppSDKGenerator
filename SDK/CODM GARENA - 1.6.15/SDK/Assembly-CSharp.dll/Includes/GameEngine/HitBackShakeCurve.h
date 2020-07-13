#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HitBackShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HitBackShakeCurve"));
	}

	template <typename T = uintptr_t> T& m_OwnerShaker() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_HitBackAngle() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T SetParameters(float hitBackAngle, uintptr_t owner) {
		return ((T (*)(HitBackShakeCurve*, float, uintptr_t))(Il2CppBase() + 0x36FCC64))(this, hitBackAngle, owner);
	}
	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duartion) {
		return ((T (*)(HitBackShakeCurve*, float, float))(Il2CppBase() + 0x36FCC70))(this, elapsedTime, duartion);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(HitBackShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x36FCC88))(this, elapsedTime, duartion, type);
	}

};

}
