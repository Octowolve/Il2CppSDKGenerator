#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Plane
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Plane"));
	}

	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppVector3> T get_normal() {
		return ((T (*)(Plane*))(Il2CppBase() + 0x4AC64A8))(this);
	}
	template <typename T = void> T set_normal(Il2CppVector3 value) {
		return ((T (*)(Plane*, Il2CppVector3))(Il2CppBase() + 0x4AC64BC))(this, value);
	}
	template <typename T = float> T get_distance() {
		return ((T (*)(Plane*))(Il2CppBase() + 0x4AC64C8))(this);
	}
	template <typename T = void> T set_distance(float value) {
		return ((T (*)(Plane*, float))(Il2CppBase() + 0x4AC64D0))(this, value);
	}
	template <typename T = void> T SetNormalAndPosition(Il2CppVector3 inNormal, Il2CppVector3 inPoint) {
		return ((T (*)(Plane*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC6560))(this, inNormal, inPoint);
	}
	template <typename T = float> T GetDistanceToPoint(Il2CppVector3 inPt) {
		return ((T (*)(Plane*, Il2CppVector3))(Il2CppBase() + 0x4AC65E0))(this, inPt);
	}
	template <typename T = bool> T Raycast(uintptr_t ray, uintptr_t* enter) {
		return ((T (*)(Plane*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC67C0))(this, ray, enter);
	}

};

}
