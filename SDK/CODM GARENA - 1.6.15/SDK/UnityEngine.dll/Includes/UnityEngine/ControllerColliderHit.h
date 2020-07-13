#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ControllerColliderHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ControllerColliderHit"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_MoveDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_MoveLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_Push() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_controller() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA3370))(this);
	}
	template <typename T = uintptr_t> T get_collider() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA3378))(this);
	}
	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA3380))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA33A8))(this);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA33D0))(this);
	}
	template <typename T = Il2CppVector3> T get_point() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA33F8))(this);
	}
	template <typename T = Il2CppVector3> T get_normal() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA340C))(this);
	}
	template <typename T = Il2CppVector3> T get_moveDirection() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA3420))(this);
	}
	template <typename T = float> T get_moveLength() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA3434))(this);
	}
	template <typename T = bool> T get_push() {
		return ((T (*)(ControllerColliderHit*))(Il2CppBase() + 0x4DA343C))(this);
	}
	template <typename T = void> T set_push(bool value) {
		return ((T (*)(ControllerColliderHit*, bool))(Il2CppBase() + 0x4DA344C))(this, value);
	}

};

}
