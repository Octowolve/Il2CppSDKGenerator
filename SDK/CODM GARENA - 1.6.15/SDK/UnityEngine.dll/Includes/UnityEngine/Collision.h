#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Collision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Collision"));
	}

	template <typename T = Il2CppVector3> T& m_Impulse() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_RelativeVelocity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Rigidbody() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Contacts() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppVector3> T get_relativeVelocity() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9E918))(this);
	}
	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9E92C))(this);
	}
	template <typename T = uintptr_t> T get_collider() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9E934))(this);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9E93C))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EAA0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_contacts() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EC0C))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EC14))(this);
	}
	template <typename T = Il2CppVector3> T get_impulse() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EC40))(this);
	}
	template <typename T = Il2CppVector3> T get_impactForceSum() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EC54))(this);
	}
	template <typename T = Il2CppVector3> T get_frictionForceSum() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9EC68))(this);
	}
	template <typename T = uintptr_t> T get_other() {
		return ((T (*)(Collision*))(Il2CppBase() + 0x4D9ECA0))(this);
	}

};

}
