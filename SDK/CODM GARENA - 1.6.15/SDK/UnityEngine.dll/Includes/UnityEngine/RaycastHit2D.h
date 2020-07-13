#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RaycastHit2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RaycastHit2D"));
	}

	template <typename T = Il2CppVector2> T& m_Centroid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Fraction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppVector2> T get_point() {
		return ((T (*)(RaycastHit2D*))(Il2CppBase() + 0x4ACB470))(this);
	}
	template <typename T = Il2CppVector2> T get_normal() {
		return ((T (*)(RaycastHit2D*))(Il2CppBase() + 0x4ACB498))(this);
	}
	template <typename T = float> T get_fraction() {
		return ((T (*)(RaycastHit2D*))(Il2CppBase() + 0x4ACB4B4))(this);
	}
	template <typename T = uintptr_t> T get_collider() {
		return ((T (*)(RaycastHit2D*))(Il2CppBase() + 0x4ACB4C4))(this);
	}

};

}
