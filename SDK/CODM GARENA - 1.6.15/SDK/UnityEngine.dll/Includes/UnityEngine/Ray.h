#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Ray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Ray"));
	}

	template <typename T = Il2CppVector3> T& m_Origin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Direction() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppVector3> T get_origin() {
		return ((T (*)(Ray*))(Il2CppBase() + 0x4ACAB70))(this);
	}
	template <typename T = void> T set_origin(Il2CppVector3 value) {
		return ((T (*)(Ray*, Il2CppVector3))(Il2CppBase() + 0x4ACAB8C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_direction() {
		return ((T (*)(Ray*))(Il2CppBase() + 0x4ACAB98))(this);
	}
	template <typename T = void> T set_direction(Il2CppVector3 value) {
		return ((T (*)(Ray*, Il2CppVector3))(Il2CppBase() + 0x4ACABEC))(this, value);
	}
	template <typename T = Il2CppVector3> T GetPoint(float distance) {
		return ((T (*)(Ray*, float))(Il2CppBase() + 0x4ACACA4))(this, distance);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Ray*))(Il2CppBase() + 0x4ACAE70))(this);
	}

};

}
