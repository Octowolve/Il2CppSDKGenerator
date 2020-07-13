#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Color
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Color"));
	}

	template <typename T = float> T& r() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& g() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& b() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& a() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9F540))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9F5F0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Color*, uintptr_t))(Il2CppBase() + 0x4D9F718))(this, other);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9F720))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9F764))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Multiply(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9F7A8))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Multiply_1(uintptr_t a, float b) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4D9F7EC))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Multiply_2(float b, uintptr_t a) {
		return ((T (*)(void *, float, uintptr_t))(Il2CppBase() + 0x4D9F824))(0, b, a);
	}
	template <typename T = uintptr_t> static T op_Division(uintptr_t a, float b) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4D9F85C))(0, a, b);
	}
	template <typename T = bool> static T op_Equality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9F894))(0, lhs, rhs);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D9F920))(0, lhs, rhs);
	}
	template <typename T = uintptr_t> static T Lerp(uintptr_t a, uintptr_t b, float t) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4D9F960))(0, a, b, t);
	}
	template <typename T = uintptr_t> static T LerpUnclamped(uintptr_t a, uintptr_t b, float t) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4D9FAA0))(0, a, b, t);
	}
	template <typename T = uintptr_t> static T get_red() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB08))(0);
	}
	template <typename T = uintptr_t> static T get_green() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB20))(0);
	}
	template <typename T = uintptr_t> static T get_blue() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB38))(0);
	}
	template <typename T = uintptr_t> static T get_white() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB50))(0);
	}
	template <typename T = uintptr_t> static T get_black() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB5C))(0);
	}
	template <typename T = uintptr_t> static T get_yellow() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB78))(0);
	}
	template <typename T = uintptr_t> static T get_cyan() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FB98))(0);
	}
	template <typename T = uintptr_t> static T get_magenta() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FBB0))(0);
	}
	template <typename T = uintptr_t> static T get_gray() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FBC8))(0);
	}
	template <typename T = uintptr_t> static T get_grey() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FBE4))(0);
	}
	template <typename T = uintptr_t> static T get_clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D9FC00))(0);
	}
	template <typename T = float> T get_grayscale() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9FC4C))(this);
	}
	template <typename T = uintptr_t> T get_linear() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9FD7C))(this);
	}
	template <typename T = uintptr_t> T get_gamma() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9FE80))(this);
	}
	template <typename T = float> T get_maxColorComponent() {
		return ((T (*)(Color*))(Il2CppBase() + 0x4D9FF64))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9F5A0))(0, c);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D9FF6C))(0, v);
	}
	template <typename T = float> T get_Item(int32_t index) {
		return ((T (*)(Color*, int32_t))(Il2CppBase() + 0x4DA0074))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, float value) {
		return ((T (*)(Color*, int32_t, float))(Il2CppBase() + 0x4DA017C))(this, index, value);
	}
	template <typename T = uintptr_t> static T HSVToRGB(float H, float S, float V, bool hdr) {
		return ((T (*)(void *, float, float, float, bool))(Il2CppBase() + 0x4DA0184))(0, H, S, V, hdr);
	}

};

}
