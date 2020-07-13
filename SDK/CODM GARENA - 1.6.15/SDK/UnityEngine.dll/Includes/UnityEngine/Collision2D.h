#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Collision2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Collision2D"));
	}

	template <typename T = int32_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_OtherCollider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Rigidbody() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_OtherRigidbody() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Contacts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_RelativeVelocity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_collider() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9EDCC))(this);
	}
	template <typename T = uintptr_t> T get_otherCollider() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9EE78))(this);
	}
	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9EF24))(this);
	}
	template <typename T = uintptr_t> T get_otherRigidbody() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9EFD0))(this);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9F07C))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9F168))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_contacts() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9F254))(this);
	}
	template <typename T = Il2CppVector2> T get_relativeVelocity() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9F25C))(this);
	}
	template <typename T = bool> T get_enabled() {
		return ((T (*)(Collision2D*))(Il2CppBase() + 0x4D9F270))(this);
	}

};

}
