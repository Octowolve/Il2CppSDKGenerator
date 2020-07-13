#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Matrix4x4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Matrix4x4"));
	}

	template <typename T = float> T& m00() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m10() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m20() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m30() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m01() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m11() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m21() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m31() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m02() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m12() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m22() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m32() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m03() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m13() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m23() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m33() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> static T Inverse(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB2B34))(0, m);
	}
	template <typename T = void> static T INTERNAL_CALL_Inverse(uintptr_t m, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AB2C18))(0, m, value);
	}
	template <typename T = uintptr_t> static T Transpose(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB2CB8))(0, m);
	}
	template <typename T = void> static T INTERNAL_CALL_Transpose(uintptr_t m, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AB2D9C))(0, m, value);
	}
	template <typename T = uintptr_t> T get_inverse() {
		return ((T (*)(Matrix4x4*))(Il2CppBase() + 0x4AB2F50))(this);
	}
	template <typename T = uintptr_t> T get_transpose() {
		return ((T (*)(Matrix4x4*))(Il2CppBase() + 0x4AB3078))(this);
	}
	template <typename T = bool> T get_isIdentity() {
		return ((T (*)(Matrix4x4*))(Il2CppBase() + 0x4AB3124))(this);
	}
	template <typename T = void> T SetTRS(Il2CppVector3 pos, Il2CppQuaternion q, Il2CppVector3 s) {
		return ((T (*)(Matrix4x4*, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x4AB328C))(this, pos, q, s);
	}
	template <typename T = uintptr_t> static T TRS(Il2CppVector3 pos, Il2CppQuaternion q, Il2CppVector3 s) {
		return ((T (*)(void *, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x4AB31C4))(0, pos, q, s);
	}
	template <typename T = void> static T INTERNAL_CALL_TRS(uintptr_t pos, uintptr_t q, uintptr_t s, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AB3328))(0, pos, q, s, value);
	}
	template <typename T = float> T get_Item(int32_t row, int32_t column) {
		return ((T (*)(Matrix4x4*, int32_t, int32_t))(Il2CppBase() + 0x4AB3564))(this, row, column);
	}
	template <typename T = void> T set_Item(int32_t row, int32_t column, float value) {
		return ((T (*)(Matrix4x4*, int32_t, int32_t, float))(Il2CppBase() + 0x4AB3700))(this, row, column, value);
	}
	template <typename T = float> T get_Item_1(int32_t index) {
		return ((T (*)(Matrix4x4*, int32_t))(Il2CppBase() + 0x4AB3710))(this, index);
	}
	template <typename T = void> T set_Item_1(int32_t index, float value) {
		return ((T (*)(Matrix4x4*, int32_t, float))(Il2CppBase() + 0x4AB3718))(this, index, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Matrix4x4*))(Il2CppBase() + 0x4AB387C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Matrix4x4*, uintptr_t))(Il2CppBase() + 0x4AB3B48))(this, other);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB3B50))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T op_Multiply_1(uintptr_t lhs, uintptr_t v) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB3FD8))(0, lhs, v);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB40AC))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AB4328))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> T GetColumn(int32_t i) {
		return ((T (*)(Matrix4x4*, int32_t))(Il2CppBase() + 0x4AB441C))(this, i);
	}
	template <typename T = void> T SetColumn(int32_t i, uintptr_t v) {
		return ((T (*)(Matrix4x4*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB448C))(this, i, v);
	}
	template <typename T = void> T SetRow(int32_t i, uintptr_t v) {
		return ((T (*)(Matrix4x4*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB4500))(this, i, v);
	}
	template <typename T = Il2CppVector3> T MultiplyPoint(Il2CppVector3 v) {
		return ((T (*)(Matrix4x4*, Il2CppVector3))(Il2CppBase() + 0x4AB45F8))(this, v);
	}
	template <typename T = Il2CppVector3> T MultiplyPoint3x4(Il2CppVector3 v) {
		return ((T (*)(Matrix4x4*, Il2CppVector3))(Il2CppBase() + 0x4AB46B0))(this, v);
	}
	template <typename T = Il2CppVector3> T MultiplyVector(Il2CppVector3 v) {
		return ((T (*)(Matrix4x4*, Il2CppVector3))(Il2CppBase() + 0x4AB4750))(this, v);
	}
	template <typename T = uintptr_t> static T Scale(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4AB4774))(0, v);
	}
	template <typename T = uintptr_t> static T get_zero() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AB48C0))(0);
	}
	template <typename T = uintptr_t> static T get_identity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AB49E4))(0);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Matrix4x4*))(Il2CppBase() + 0x4AB527C))(this);
	}

};

}
