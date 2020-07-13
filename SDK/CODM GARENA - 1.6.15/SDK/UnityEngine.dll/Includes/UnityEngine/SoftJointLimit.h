#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SoftJointLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SoftJointLimit"));
	}

	template <typename T = float> T& m_Limit() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Bounciness() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_ContactDistance() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T get_limit() {
		return ((T (*)(SoftJointLimit*))(Il2CppBase() + 0x4E85308))(this);
	}
	template <typename T = void> T set_limit(float value) {
		return ((T (*)(SoftJointLimit*, float))(Il2CppBase() + 0x4E85318))(this, value);
	}
	template <typename T = float> T get_bounciness() {
		return ((T (*)(SoftJointLimit*))(Il2CppBase() + 0x4E85328))(this);
	}
	template <typename T = void> T set_bounciness(float value) {
		return ((T (*)(SoftJointLimit*, float))(Il2CppBase() + 0x4E85338))(this, value);
	}

};

}
