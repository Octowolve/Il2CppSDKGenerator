#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SprintingCameraShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SprintingCameraShakeCurve"));
	}

	template <typename T = float> static T& SHAKE_AMPLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HIGH_SHAKE_AMPLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& INV_SHAKE_PERIOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T EvalPosition(float elapsedTime, float duartion) {
		return ((T (*)(SprintingCameraShakeCurve*, float, float))(Il2CppBase() + 0x34037E4))(this, elapsedTime, duartion);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation(float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(SprintingCameraShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x34039C8))(this, elapsedTime, duartion, type);
	}

};

}
