#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Vector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Vector3"));
	}

	template <typename T = float> static T& kEpsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& z() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> static T Slerp(Il2CppVector3 a, Il2CppVector3 b, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4D3AF84))(0, a, b, t);
	}
	template <typename T = void> static T INTERNAL_CALL_Slerp(uintptr_t a, uintptr_t b, float t, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t*))(Il2CppBase() + 0x4D3B000))(0, a, b, t, value);
	}
	template <typename T = void> static T Internal_OrthoNormalize2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3B0B0))(0, a, b);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_OrthoNormalize2(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3B0B4))(0, a, b);
	}
	template <typename T = void> static T OrthoNormalize(uintptr_t normal, uintptr_t tangent) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3B154))(0, normal, tangent);
	}
	template <typename T = Il2CppVector3> static T RotateTowards(Il2CppVector3 current, Il2CppVector3 target, float maxRadiansDelta, float maxMagnitudeDelta) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x4D3B158))(0, current, target, maxRadiansDelta, maxMagnitudeDelta);
	}
	template <typename T = void> static T INTERNAL_CALL_RotateTowards(uintptr_t current, uintptr_t target, float maxRadiansDelta, float maxMagnitudeDelta, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, uintptr_t*))(Il2CppBase() + 0x4D3B1DC))(0, current, target, maxRadiansDelta, maxMagnitudeDelta, value);
	}
	template <typename T = Il2CppVector3> static T Lerp(Il2CppVector3 a, Il2CppVector3 b, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4D3B2A4))(0, a, b, t);
	}
	template <typename T = Il2CppVector3> static T LerpUnclamped(Il2CppVector3 a, Il2CppVector3 b, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4D3B3C0))(0, a, b, t);
	}
	template <typename T = Il2CppVector3> static T MoveTowards(Il2CppVector3 current, Il2CppVector3 target, float maxDistanceDelta) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4D3B410))(0, current, target, maxDistanceDelta);
	}
	template <typename T = float> T get_Item(int32_t index) {
		return ((T (*)(Vector3*, int32_t))(Il2CppBase() + 0x4D3B6F4))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, float value) {
		return ((T (*)(Vector3*, int32_t, float))(Il2CppBase() + 0x4D3B7E0))(this, index, value);
	}
	template <typename T = void> T Set(float new_x, float new_y, float new_z) {
		return ((T (*)(Vector3*, float, float, float))(Il2CppBase() + 0x4D3B7F0))(this, new_x, new_y, new_z);
	}
	template <typename T = Il2CppVector3> static T Scale(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3B7FC))(0, a, b);
	}
	template <typename T = void> T Scale_1(Il2CppVector3 scale) {
		return ((T (*)(Vector3*, Il2CppVector3))(Il2CppBase() + 0x4D3B864))(this, scale);
	}
	template <typename T = Il2CppVector3> static T Cross(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3B898))(0, lhs, rhs);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3B920))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Vector3*, uintptr_t))(Il2CppBase() + 0x4D3BA28))(this, other);
	}
	template <typename T = Il2CppVector3> static T Reflect(Il2CppVector3 inDirection, Il2CppVector3 inNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3BA30))(0, inDirection, inNormal);
	}
	template <typename T = Il2CppVector3> static T Normalize(Il2CppVector3 value) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3BAEC))(0, value);
	}
	template <typename T = void> T Normalize_1() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3BCCC))(this);
	}
	template <typename T = Il2CppVector3> T get_normalized() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3BD20))(this);
	}
	template <typename T = float> static T Dot(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3BA8C))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector3> static T Project(Il2CppVector3 vector, Il2CppVector3 onNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3BD70))(0, vector, onNormal);
	}
	template <typename T = Il2CppVector3> static T ProjectOnPlane(Il2CppVector3 vector, Il2CppVector3 planeNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3BED4))(0, vector, planeNormal);
	}
	template <typename T = float> static T Angle(Il2CppVector3 from, Il2CppVector3 to) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3BF44))(0, from, to);
	}
	template <typename T = float> static T Distance(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3C0B4))(0, a, b);
	}
	template <typename T = Il2CppVector3> static T ClampMagnitude(Il2CppVector3 vector, float maxLength) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4D3C1D4))(0, vector, maxLength);
	}
	template <typename T = float> static T Magnitude(Il2CppVector3 a) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3BB70))(0, a);
	}
	template <typename T = float> T get_magnitude() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3C294))(this);
	}
	template <typename T = float> static T SqrMagnitude(Il2CppVector3 a) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3C29C))(0, a);
	}
	template <typename T = float> T get_sqrMagnitude() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3C2C4))(this);
	}
	template <typename T = Il2CppVector3> static T Min(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3C2EC))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector3> static T Max(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3C3F8))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector3> static T get_zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D39EA8))(0);
	}
	template <typename T = Il2CppVector3> static T get_one() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3C504))(0);
	}
	template <typename T = Il2CppVector3> static T get_forward() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D37404))(0);
	}
	template <typename T = Il2CppVector3> static T get_back() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D39EBC))(0);
	}
	template <typename T = Il2CppVector3> static T get_up() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D37328))(0);
	}
	template <typename T = Il2CppVector3> static T get_down() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3C518))(0);
	}
	template <typename T = Il2CppVector3> static T get_left() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3C530))(0);
	}
	template <typename T = Il2CppVector3> static T get_right() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D37250))(0);
	}
	template <typename T = Il2CppVector3> static T op_Addition(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3825C))(0, a, b);
	}
	template <typename T = Il2CppVector3> static T op_Subtraction(Il2CppVector3 a, Il2CppVector3 b) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D38854))(0, a, b);
	}
	template <typename T = Il2CppVector3> static T op_UnaryNegation(Il2CppVector3 a) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3C548))(0, a);
	}
	template <typename T = Il2CppVector3> static T op_Multiply(Il2CppVector3 a, float d) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4D3B5E8))(0, a, d);
	}
	template <typename T = Il2CppVector3> static T op_Multiply_1(float d, Il2CppVector3 a) {
		return ((T (*)(void *, float, Il2CppVector3))(Il2CppBase() + 0x4D3BAC0))(0, d, a);
	}
	template <typename T = Il2CppVector3> static T op_Division(Il2CppVector3 a, float d) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x4D3B5BC))(0, a, d);
	}
	template <typename T = bool> static T op_Equality(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3C564))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(Il2CppVector3 lhs, Il2CppVector3 rhs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4D3C5B8))(0, lhs, rhs);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Vector3*))(Il2CppBase() + 0x4D3C814))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format) {
		return ((T (*)(Vector3*, Il2CppString*))(Il2CppBase() + 0x4D3C9E8))(this, format);
	}

};

}
