#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HingeJoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HingeJoint"));
	}


	template <typename T = uintptr_t> T get_limits() {
		return ((T (*)(HingeJoint*))(Il2CppBase() + 0x47A1A74))(this);
	}
	template <typename T = void> T INTERNAL_get_limits(uintptr_t* value) {
		return ((T (*)(HingeJoint*, uintptr_t*))(Il2CppBase() + 0x47A1AC0))(this, value);
	}
	template <typename T = uintptr_t> T get_spring() {
		return ((T (*)(HingeJoint*))(Il2CppBase() + 0x47A1B60))(this);
	}
	template <typename T = void> T INTERNAL_get_spring(uintptr_t* value) {
		return ((T (*)(HingeJoint*, uintptr_t*))(Il2CppBase() + 0x47A1BA8))(this, value);
	}
	template <typename T = bool> T get_useMotor() {
		return ((T (*)(HingeJoint*))(Il2CppBase() + 0x47A1C48))(this);
	}
	template <typename T = bool> T get_useLimits() {
		return ((T (*)(HingeJoint*))(Il2CppBase() + 0x47A1CE0))(this);
	}
	template <typename T = bool> T get_useSpring() {
		return ((T (*)(HingeJoint*))(Il2CppBase() + 0x47A1D78))(this);
	}

};

}
