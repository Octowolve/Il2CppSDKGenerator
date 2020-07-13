#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ContactPoint2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ContactPoint2D"));
	}

	template <typename T = Il2CppVector2> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_RelativeVelocity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Separation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_NormalImpulse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TangentImpulse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_OtherCollider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_Rigidbody() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_OtherRigidbody() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
