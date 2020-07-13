#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Vector2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Vector2"));
	}

	template <typename T = float> T& x() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> static T& kEpsilon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_Item(int32_t index) {
		return ((T (*)(Vector2*, int32_t))(Il2CppBase() + 0x4D3A0B8))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, float value) {
		return ((T (*)(Vector2*, int32_t, float))(Il2CppBase() + 0x4D3A194))(this, index, value);
	}
	template <typename T = void> T Set(float newX, float newY) {
		return ((T (*)(Vector2*, float, float))(Il2CppBase() + 0x4D3A1A4))(this, newX, newY);
	}
	template <typename T = Il2CppVector2> static T Lerp(Il2CppVector2 a, Il2CppVector2 b, float t) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x4D3A1B0))(0, a, b, t);
	}
	template <typename T = Il2CppVector2> static T LerpUnclamped(Il2CppVector2 a, Il2CppVector2 b, float t) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x4D3A2A8))(0, a, b, t);
	}
	template <typename T = Il2CppVector2> static T MoveTowards(Il2CppVector2 current, Il2CppVector2 target, float maxDistanceDelta) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x4D3A2E0))(0, current, target, maxDistanceDelta);
	}
	template <typename T = Il2CppVector2> static T Scale(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3A49C))(0, a, b);
	}
	template <typename T = void> T Normalize() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3A514))(this);
	}
	template <typename T = Il2CppVector2> T get_normalized() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3A560))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3A744))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* format) {
		return ((T (*)(Vector2*, Il2CppString*))(Il2CppBase() + 0x4D3A8C4))(this, format);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3A8F8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Vector2*, uintptr_t))(Il2CppBase() + 0x4D3AA08))(this, other);
	}
	template <typename T = float> static T Dot(Il2CppVector2 lhs, Il2CppVector2 rhs) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AA10))(0, lhs, rhs);
	}
	template <typename T = float> T get_magnitude() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3AA34))(this);
	}
	template <typename T = float> T get_sqrMagnitude() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3AA50))(this);
	}
	template <typename T = float> static T Angle(Il2CppVector2 from, Il2CppVector2 to) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AA64))(0, from, to);
	}
	template <typename T = float> static T Distance(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AB9C))(0, a, b);
	}
	template <typename T = Il2CppVector2> static T ClampMagnitude(Il2CppVector2 vector, float maxLength) {
		return ((T (*)(void *, Il2CppVector2, float))(Il2CppBase() + 0x4D3ABE4))(0, vector, maxLength);
	}
	template <typename T = float> static T SqrMagnitude(Il2CppVector2 a) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4D3AC7C))(0, a);
	}
	template <typename T = float> T SqrMagnitude_1() {
		return ((T (*)(Vector2*))(Il2CppBase() + 0x4D3AC98))(this);
	}
	template <typename T = Il2CppVector2> static T Min(Il2CppVector2 lhs, Il2CppVector2 rhs) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3ACAC))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector2> static T Max(Il2CppVector2 lhs, Il2CppVector2 rhs) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AD88))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector2> static T op_Addition(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D2CB5C))(0, a, b);
	}
	template <typename T = Il2CppVector2> static T op_Subtraction(Il2CppVector2 a, Il2CppVector2 b) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D2E6C0))(0, a, b);
	}
	template <typename T = Il2CppVector2> static T op_UnaryNegation(Il2CppVector2 a) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4D3AE64))(0, a);
	}
	template <typename T = Il2CppVector2> static T op_Multiply(Il2CppVector2 a, float d) {
		return ((T (*)(void *, Il2CppVector2, float))(Il2CppBase() + 0x4D3A47C))(0, a, d);
	}
	template <typename T = Il2CppVector2> static T op_Multiply_1(float d, Il2CppVector2 a) {
		return ((T (*)(void *, float, Il2CppVector2))(Il2CppBase() + 0x4D3AE74))(0, d, a);
	}
	template <typename T = Il2CppVector2> static T op_Division(Il2CppVector2 a, float d) {
		return ((T (*)(void *, Il2CppVector2, float))(Il2CppBase() + 0x4D3A45C))(0, a, d);
	}
	template <typename T = bool> static T op_Equality(Il2CppVector2 lhs, Il2CppVector2 rhs) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AE94))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(Il2CppVector2 lhs, Il2CppVector2 rhs) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4D3AED4))(0, lhs, rhs);
	}
	template <typename T = Il2CppVector2> static T op_Implicit(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3AF14))(0, v);
	}
	template <typename T = Il2CppVector3> static T op_Implicit_1(Il2CppVector2 v) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4D3AF1C))(0, v);
	}
	template <typename T = Il2CppVector2> static T get_zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D29D30))(0);
	}
	template <typename T = Il2CppVector2> static T get_one() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3AF2C))(0);
	}
	template <typename T = Il2CppVector2> static T get_up() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3AF3C))(0);
	}
	template <typename T = Il2CppVector2> static T get_right() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3AF4C))(0);
	}

};

}
