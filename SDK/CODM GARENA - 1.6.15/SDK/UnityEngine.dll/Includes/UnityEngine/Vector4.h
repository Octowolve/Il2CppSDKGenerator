#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Vector4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Vector4"));
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
	template <typename T = float> T& w() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = float> T get_Item(int32_t index) {
		return ((T (*)(Vector4*, int32_t))(Il2CppBase() + 0x4D3CB40))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, float value) {
		return ((T (*)(Vector4*, int32_t, float))(Il2CppBase() + 0x4D3CC48))(this, index, value);
	}
	template <typename T = void> T Set(float new_x, float new_y, float new_z, float new_w) {
		return ((T (*)(Vector4*, float, float, float, float))(Il2CppBase() + 0x4D3CC60))(this, new_x, new_y, new_z, new_w);
	}
	template <typename T = uintptr_t> static T Lerp(uintptr_t a, uintptr_t b, float t) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4D3CC74))(0, a, b, t);
	}
	template <typename T = uintptr_t> static T Scale(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3CDB4))(0, a, b);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Vector4*))(Il2CppBase() + 0x4D3CE44))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Vector4*, uintptr_t))(Il2CppBase() + 0x4D3CF6C))(this, other);
	}
	template <typename T = void> T Normalize() {
		return ((T (*)(Vector4*))(Il2CppBase() + 0x4D3D138))(this);
	}
	template <typename T = float> static T Dot(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D140))(0, a, b);
	}
	template <typename T = float> static T Magnitude(uintptr_t a) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3CFF8))(0, a);
	}
	template <typename T = float> T get_magnitude() {
		return ((T (*)(Vector4*))(Il2CppBase() + 0x4D3D274))(this);
	}
	template <typename T = float> T get_sqrMagnitude() {
		return ((T (*)(Vector4*))(Il2CppBase() + 0x4D3D2B0))(this);
	}
	template <typename T = uintptr_t> static T Max(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D2E4))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T get_zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3D12C))(0);
	}
	template <typename T = uintptr_t> static T get_one() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D3D408))(0);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D414))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D458))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_UnaryNegation(uintptr_t a) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3D49C))(0, a);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t a, float d) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4D3D4C0))(0, a, d);
	}
	template <typename T = uintptr_t> static T op_Multiply_1(float d, uintptr_t a) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4D3D4F8))(0, d, a);
	}
	template <typename T = uintptr_t> static T op_Division(uintptr_t a, float d) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4D3D0F4))(0, a, d);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D530))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3D5CC))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4D3D634))(0, v);
	}
	template <typename T = Il2CppVector3> static T op_Implicit_1(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3D64C))(0, v);
	}
	template <typename T = uintptr_t> static T op_Implicit_2(Il2CppVector2 v) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4D3D65C))(0, v);
	}
	template <typename T = Il2CppVector2> static T op_Implicit_3(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3D670))(0, v);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Vector4*))(Il2CppBase() + 0x4D3D8E8))(this);
	}
	template <typename T = float> static T SqrMagnitude(uintptr_t a) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3D598))(0, a);
	}

};

}
