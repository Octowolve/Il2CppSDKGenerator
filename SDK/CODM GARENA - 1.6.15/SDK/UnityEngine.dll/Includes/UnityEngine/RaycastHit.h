#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RaycastHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RaycastHit"));
	}

	template <typename T = Il2CppVector3> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_FaceID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& m_UV() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppVector3> T get_point() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB17C))(this);
	}
	template <typename T = Il2CppVector3> T get_normal() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB1A4))(this);
	}
	template <typename T = float> T get_distance() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB1C0))(this);
	}
	template <typename T = uintptr_t> T get_collider() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB1D0))(this);
	}
	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB2B0))(this);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(RaycastHit*))(Il2CppBase() + 0x4ACB3F0))(this);
	}

};

}
