#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CapsuleCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CapsuleCollider"));
	}


	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(CapsuleCollider*))(Il2CppBase() + 0x46A6FBC))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(CapsuleCollider*, Il2CppVector3))(Il2CppBase() + 0x46A70A4))(this, value);
	}
	template <typename T = void> T INTERNAL_get_center(uintptr_t* value) {
		return ((T (*)(CapsuleCollider*, uintptr_t*))(Il2CppBase() + 0x46A7004))(this, value);
	}
	template <typename T = void> T INTERNAL_set_center(uintptr_t value) {
		return ((T (*)(CapsuleCollider*, uintptr_t))(Il2CppBase() + 0x46A70C4))(this, value);
	}
	template <typename T = float> T get_radius() {
		return ((T (*)(CapsuleCollider*))(Il2CppBase() + 0x46A7164))(this);
	}
	template <typename T = void> T set_radius(float value) {
		return ((T (*)(CapsuleCollider*, float))(Il2CppBase() + 0x46A71FC))(this, value);
	}
	template <typename T = float> T get_height() {
		return ((T (*)(CapsuleCollider*))(Il2CppBase() + 0x46A729C))(this);
	}
	template <typename T = void> T set_height(float value) {
		return ((T (*)(CapsuleCollider*, float))(Il2CppBase() + 0x46A7334))(this, value);
	}
	template <typename T = int32_t> T get_direction() {
		return ((T (*)(CapsuleCollider*))(Il2CppBase() + 0x46A73D4))(this);
	}
	template <typename T = void> T set_direction(int32_t value) {
		return ((T (*)(CapsuleCollider*, int32_t))(Il2CppBase() + 0x46A746C))(this, value);
	}

};

}
