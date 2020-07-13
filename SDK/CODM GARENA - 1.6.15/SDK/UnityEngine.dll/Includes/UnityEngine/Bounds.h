#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Bounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Bounds"));
	}

	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Extents() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> static T Internal_Contains(uintptr_t m, Il2CppVector3 point) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x469EF80))(0, m, point);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_Contains(uintptr_t m, uintptr_t point) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x469EFD0))(0, m, point);
	}
	template <typename T = bool> T Contains(Il2CppVector3 point) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F0B0))(this, point);
	}
	template <typename T = float> static T Internal_SqrDistance(uintptr_t m, Il2CppVector3 point) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x469F0F4))(0, m, point);
	}
	template <typename T = float> static T INTERNAL_CALL_Internal_SqrDistance(uintptr_t m, uintptr_t point) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x469F144))(0, m, point);
	}
	template <typename T = float> T SqrDistance(Il2CppVector3 point) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F224))(this, point);
	}
	template <typename T = bool> static T Internal_IntersectRay(uintptr_t ray, uintptr_t bounds, uintptr_t* distance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x469F268))(0, ray, bounds, distance);
	}
	template <typename T = bool> static T INTERNAL_CALL_Internal_IntersectRay(uintptr_t ray, uintptr_t bounds, uintptr_t* distance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x469F280))(0, ray, bounds, distance);
	}
	template <typename T = bool> T IntersectRay(uintptr_t ray, uintptr_t* distance) {
		return ((T (*)(Bounds*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x469F374))(this, ray, distance);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469F450))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Bounds*, uintptr_t))(Il2CppBase() + 0x469F650))(this, other);
	}
	template <typename T = Il2CppVector3> T get_center() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469F658))(this);
	}
	template <typename T = void> T set_center(Il2CppVector3 value) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F674))(this, value);
	}
	template <typename T = Il2CppVector3> T get_size() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469F6CC))(this);
	}
	template <typename T = void> T set_size(Il2CppVector3 value) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F76C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_extents() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469F7C0))(this);
	}
	template <typename T = void> T set_extents(Il2CppVector3 value) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F7E0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_min() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469F840))(this);
	}
	template <typename T = void> T set_min(Il2CppVector3 value) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469F9F8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_max() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x469FA14))(this);
	}
	template <typename T = void> T set_max(Il2CppVector3 value) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469FAC8))(this, value);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x469FAE4))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x469FB50))(0, lhs, rhs);
	}
	template <typename T = void> T SetMinMax(Il2CppVector3 min, Il2CppVector3 max) {
		return ((T (*)(Bounds*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x469FBA8))(this, min, max);
	}
	template <typename T = void> T Encapsulate(Il2CppVector3 point) {
		return ((T (*)(Bounds*, Il2CppVector3))(Il2CppBase() + 0x469FCB0))(this, point);
	}
	template <typename T = void> T Encapsulate_1(uintptr_t bounds) {
		return ((T (*)(Bounds*, uintptr_t))(Il2CppBase() + 0x469FD64))(this, bounds);
	}
	template <typename T = bool> T Intersects(uintptr_t bounds) {
		return ((T (*)(Bounds*, uintptr_t))(Il2CppBase() + 0x46A0070))(this, bounds);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Bounds*))(Il2CppBase() + 0x46A0258))(this);
	}

};

}
