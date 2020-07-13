#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Cloth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Cloth"));
	}


	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Cloth*, bool))(Il2CppBase() + 0x46AA070))(this, value);
	}
	template <typename T = void> T ClearTransformMotion() {
		return ((T (*)(Cloth*))(Il2CppBase() + 0x46AA110))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_ClearTransformMotion(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46AA118))(0, self);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_capsuleColliders() {
		return ((T (*)(Cloth*))(Il2CppBase() + 0x46AA1B0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sphereColliders() {
		return ((T (*)(Cloth*))(Il2CppBase() + 0x46AA248))(this);
	}

};

}
