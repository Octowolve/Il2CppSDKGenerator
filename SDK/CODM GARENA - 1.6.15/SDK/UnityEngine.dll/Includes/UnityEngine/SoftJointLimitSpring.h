#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SoftJointLimitSpring
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SoftJointLimitSpring"));
	}

	template <typename T = float> T& m_Spring() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Damper() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = float> T get_spring() {
		return ((T (*)(SoftJointLimitSpring*))(Il2CppBase() + 0x4E85348))(this);
	}
	template <typename T = void> T set_spring(float value) {
		return ((T (*)(SoftJointLimitSpring*, float))(Il2CppBase() + 0x4E85358))(this, value);
	}
	template <typename T = float> T get_damper() {
		return ((T (*)(SoftJointLimitSpring*))(Il2CppBase() + 0x4E85368))(this);
	}
	template <typename T = void> T set_damper(float value) {
		return ((T (*)(SoftJointLimitSpring*, float))(Il2CppBase() + 0x4E85378))(this, value);
	}

};

}
