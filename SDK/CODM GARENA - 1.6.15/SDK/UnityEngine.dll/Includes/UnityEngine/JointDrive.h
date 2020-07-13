#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class JointDrive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "JointDrive"));
	}

	template <typename T = float> T& m_PositionSpring() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_PositionDamper() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_MaximumForce() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_positionSpring(float value) {
		return ((T (*)(JointDrive*, float))(Il2CppBase() + 0x47A483C))(this, value);
	}
	template <typename T = void> T set_positionDamper(float value) {
		return ((T (*)(JointDrive*, float))(Il2CppBase() + 0x47A484C))(this, value);
	}
	template <typename T = void> T set_maximumForce(float value) {
		return ((T (*)(JointDrive*, float))(Il2CppBase() + 0x47A485C))(this, value);
	}

};

}
