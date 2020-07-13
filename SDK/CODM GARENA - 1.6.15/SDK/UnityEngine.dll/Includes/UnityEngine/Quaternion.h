#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Quaternion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Quaternion"));
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
	template <typename T = float> T& w() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> static T& kEpsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppQuaternion> static T AngleAxis(float angle, Il2CppVector3 axis) {
		return ((T (*)(void *, float, Il2CppVector3))(Il2CppBase() + 0x4AC883C))(0, angle, axis);
	}
	template <typename T = void> static T INTERNAL_CALL_AngleAxis(float angle, uintptr_t axis, uintptr_t* value) {
		return ((T (*)(void *, float, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC8890))(0, angle, axis, value);
	}
	template <typename T = void> T ToAngleAxis(uintptr_t* angle, uintptr_t* axis) {
		return ((T (*)(Quaternion*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AC89BC))(this, angle, axis);
	}
	template <typename T = Il2CppQuaternion> static T FromToRotation(Il2CppVector3 fromDirection, Il2CppVector3 toDirection) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC8A04))(0, fromDirection, toDirection);
	}
	template <typename T = void> static T INTERNAL_CALL_FromToRotation(uintptr_t fromDirection, uintptr_t toDirection, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC8A68))(0, fromDirection, toDirection, value);
	}
	template <typename T = void> T SetFromToRotation(Il2CppVector3 fromDirection, Il2CppVector3 toDirection) {
		return ((T (*)(Quaternion*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC8B58))(this, fromDirection, toDirection);
	}
	template <typename T = Il2CppQuaternion> static T LookRotation(Il2CppVector3 forward, Il2CppVector3 upwards) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4AC8BB0))(0, forward, upwards);
	}
	template <typename T = Il2CppQuaternion> static T LookRotation_1(Il2CppVector3 forward) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AC8CBC))(0, forward);
	}
	template <typename T = void> static T INTERNAL_CALL_LookRotation(uintptr_t forward, uintptr_t upwards, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC8C14))(0, forward, upwards, value);
	}
	template <typename T = Il2CppQuaternion> static T Slerp(Il2CppQuaternion a, Il2CppQuaternion b, float t) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4AC8D38))(0, a, b, t);
	}
	template <typename T = void> static T INTERNAL_CALL_Slerp(uintptr_t a, uintptr_t b, float t, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t*))(Il2CppBase() + 0x4AC8DB4))(0, a, b, t, value);
	}
	template <typename T = Il2CppQuaternion> static T SlerpUnclamped(Il2CppQuaternion a, Il2CppQuaternion b, float t) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4AC8E64))(0, a, b, t);
	}
	template <typename T = void> static T INTERNAL_CALL_SlerpUnclamped(uintptr_t a, uintptr_t b, float t, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t*))(Il2CppBase() + 0x4AC8EE0))(0, a, b, t, value);
	}
	template <typename T = Il2CppQuaternion> static T Lerp(Il2CppQuaternion a, Il2CppQuaternion b, float t) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4AC8F90))(0, a, b, t);
	}
	template <typename T = void> static T INTERNAL_CALL_Lerp(uintptr_t a, uintptr_t b, float t, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t*))(Il2CppBase() + 0x4AC900C))(0, a, b, t, value);
	}
	template <typename T = Il2CppQuaternion> static T RotateTowards(Il2CppQuaternion from, Il2CppQuaternion to, float maxDegreesDelta) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion, float))(Il2CppBase() + 0x4AC90BC))(0, from, to, maxDegreesDelta);
	}
	template <typename T = Il2CppQuaternion> static T Inverse(Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x4AC937C))(0, rotation);
	}
	template <typename T = void> static T INTERNAL_CALL_Inverse(uintptr_t rotation, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC93CC))(0, rotation, value);
	}
	template <typename T = Il2CppVector3> T get_eulerAngles() {
		return ((T (*)(Quaternion*))(Il2CppBase() + 0x4AC9620))(this);
	}
	template <typename T = void> T set_eulerAngles(Il2CppVector3 value) {
		return ((T (*)(Quaternion*, Il2CppVector3))(Il2CppBase() + 0x4AC9700))(this, value);
	}
	template <typename T = Il2CppQuaternion> static T Euler(float x, float y, float z) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AC971C))(0, x, y, z);
	}
	template <typename T = Il2CppQuaternion> static T Euler_1(Il2CppVector3 euler) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AC97CC))(0, euler);
	}
	template <typename T = Il2CppVector3> static T Internal_ToEulerRad(Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x4AC9504))(0, rotation);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_ToEulerRad(uintptr_t rotation, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC9850))(0, rotation, value);
	}
	template <typename T = Il2CppQuaternion> static T Internal_FromEulerRad(Il2CppVector3 euler) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AC96B8))(0, euler);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_FromEulerRad(uintptr_t euler, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AC98F0))(0, euler, value);
	}
	template <typename T = void> static T Internal_ToAxisAngleRad(Il2CppQuaternion q, uintptr_t* axis, uintptr_t* angle) {
		return ((T (*)(void *, Il2CppQuaternion, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AC897C))(0, q, axis, angle);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_ToAxisAngleRad(uintptr_t q, uintptr_t* axis, uintptr_t* angle) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AC9990))(0, q, axis, angle);
	}
	template <typename T = Il2CppQuaternion> static T EulerAngles(float x, float y, float z) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x4AC9A38))(0, x, y, z);
	}
	template <typename T = Il2CppVector3> static T ToEulerAngles(Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x4AC9AC4))(0, rotation);
	}
	template <typename T = float> T get_Item(int32_t index) {
		return ((T (*)(Quaternion*, int32_t))(Il2CppBase() + 0x4AC9C30))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, float value) {
		return ((T (*)(Quaternion*, int32_t, float))(Il2CppBase() + 0x4AC9D38))(this, index, value);
	}
	template <typename T = Il2CppQuaternion> static T get_identity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC9D40))(0);
	}
	template <typename T = Il2CppQuaternion> static T op_Multiply(Il2CppQuaternion lhs, Il2CppQuaternion rhs) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4AC9D5C))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector3> static T op_Multiply_1(Il2CppQuaternion rotation, Il2CppVector3 point) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x4AC9DEC))(0, rotation, point);
	}
	template <typename T = bool> static T op_Equality(Il2CppQuaternion lhs, Il2CppQuaternion rhs) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4AC9EB8))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(Il2CppQuaternion lhs, Il2CppQuaternion rhs) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4AC9F54))(0, lhs, rhs);
	}
	template <typename T = float> static T Dot(Il2CppQuaternion a, Il2CppQuaternion b) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4AC9F10))(0, a, b);
	}
	template <typename T = float> static T Angle(Il2CppQuaternion a, Il2CppQuaternion b) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppQuaternion))(Il2CppBase() + 0x4AC9234))(0, a, b);
	}
	template <typename T = Il2CppVector3> static T Internal_MakePositive(Il2CppVector3 euler) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AC9560))(0, euler);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Quaternion*))(Il2CppBase() + 0x4AC9FF8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Quaternion*, uintptr_t))(Il2CppBase() + 0x4ACA120))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Quaternion*))(Il2CppBase() + 0x4ACA3A0))(this);
	}

};

}
