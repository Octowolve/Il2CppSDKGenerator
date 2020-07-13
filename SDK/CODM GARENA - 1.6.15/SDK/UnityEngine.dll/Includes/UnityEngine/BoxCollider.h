#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class BoxCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "BoxCollider"));
	}


	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(BoxCollider*))(Il2CppBase() + 0x46A0260))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(BoxCollider*, Il2CppVector3))(Il2CppBase() + 0x46A0348))(this, value);
	}
	template <typename T = void> T INTERNAL_get_center(uintptr_t* value) {
		return ((T (*)(BoxCollider*, uintptr_t*))(Il2CppBase() + 0x46A02A8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_center(uintptr_t value) {
		return ((T (*)(BoxCollider*, uintptr_t))(Il2CppBase() + 0x46A0368))(this, value);
	}
	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(BoxCollider*))(Il2CppBase() + 0x46A0408))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(BoxCollider*, Il2CppVector3))(Il2CppBase() + 0x46A04F0))(this, value);
	}
	template <typename T = void> T INTERNAL_get_size(uintptr_t* value) {
		return ((T (*)(BoxCollider*, uintptr_t*))(Il2CppBase() + 0x46A0450))(this, value);
	}
	template <typename T = void> T INTERNAL_set_size(uintptr_t value) {
		return ((T (*)(BoxCollider*, uintptr_t))(Il2CppBase() + 0x46A0510))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_rotation() {
		return ((T (*)(BoxCollider*))(Il2CppBase() + 0x46A05B0))(this);
	}
	template <typename T = void> T INTERNAL_get_rotation(uintptr_t* value) {
		return ((T (*)(BoxCollider*, uintptr_t*))(Il2CppBase() + 0x46A05E8))(this, value);
	}

};

}
