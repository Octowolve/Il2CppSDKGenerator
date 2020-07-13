#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ContactPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ContactPoint"));
	}

	template <typename T = Il2CppVector3> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_ThisColliderInstanceID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_OtherColliderInstanceID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Separation() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppVector3> T get_point() {
		return ((T (*)(ContactPoint*))(Il2CppBase() + 0x4DA3150))(this);
	}
	template <typename T = Il2CppVector3> T get_normal() {
		return ((T (*)(ContactPoint*))(Il2CppBase() + 0x4DA3178))(this);
	}
	template <typename T = uintptr_t> T get_thisCollider() {
		return ((T (*)(ContactPoint*))(Il2CppBase() + 0x4DA322C))(this);
	}
	template <typename T = uintptr_t> T get_otherCollider() {
		return ((T (*)(ContactPoint*))(Il2CppBase() + 0x4DA323C))(this);
	}
	template <typename T = uintptr_t> static T ColliderFromInstanceId(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DA3194))(0, instanceID);
	}

};

}
