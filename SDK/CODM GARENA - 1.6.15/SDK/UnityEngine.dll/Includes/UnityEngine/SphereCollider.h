#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SphereCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SphereCollider"));
	}


	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(SphereCollider*))(Il2CppBase() + 0x4E85458))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(SphereCollider*, Il2CppVector3))(Il2CppBase() + 0x4E85540))(this, value);
	}
	template <typename T = void> T INTERNAL_get_center(uintptr_t* value) {
		return ((T (*)(SphereCollider*, uintptr_t*))(Il2CppBase() + 0x4E854A0))(this, value);
	}
	template <typename T = void> T INTERNAL_set_center(uintptr_t value) {
		return ((T (*)(SphereCollider*, uintptr_t))(Il2CppBase() + 0x4E85560))(this, value);
	}
	template <typename T = float> T get_radius() {
		return ((T (*)(SphereCollider*))(Il2CppBase() + 0x4E85600))(this);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(SphereCollider*, float))(Il2CppBase() + 0x4E85698))(this, value);
	}

};

}
