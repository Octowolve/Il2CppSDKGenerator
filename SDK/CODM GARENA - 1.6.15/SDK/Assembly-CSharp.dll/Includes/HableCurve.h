#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HableCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HableCurve"));
	}

	template <typename T = float> T& whitePoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& inverseWhitePoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& x0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& x1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& segments() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& uniforms() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSegments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SolveAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsSlopeIntercept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvalDerivativeLinearGamma() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = float> T get_whitePoint() {
		return ((T (*)(HableCurve*))(Il2CppBase() + 0x474BF34))(this);
	}
	template <typename T = void> T set_whitePoint(float value) {
		return ((T (*)(HableCurve*, float))(Il2CppBase() + 0x474BF3C))(this, value);
	}
	template <typename T = float> T get_inverseWhitePoint() {
		return ((T (*)(HableCurve*))(Il2CppBase() + 0x474BF44))(this);
	}
	template <typename T = void> T set_inverseWhitePoint(float value) {
		return ((T (*)(HableCurve*, float))(Il2CppBase() + 0x474BF4C))(this, value);
	}
	template <typename T = float> T get_x0() {
		return ((T (*)(HableCurve*))(Il2CppBase() + 0x474BF54))(this);
	}
	template <typename T = void> T set_x0(float value) {
		return ((T (*)(HableCurve*, float))(Il2CppBase() + 0x474BF5C))(this, value);
	}
	template <typename T = float> T get_x1() {
		return ((T (*)(HableCurve*))(Il2CppBase() + 0x474BF64))(this);
	}
	template <typename T = void> T set_x1(float value) {
		return ((T (*)(HableCurve*, float))(Il2CppBase() + 0x474BF6C))(this, value);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(HableCurve*, float))(Il2CppBase() + 0x474BF74))(this, x);
	}
	template <typename T = void> T Init(float toeStrength, float toeLength, float shoulderStrength, float shoulderLength, float shoulderAngle, float gamma) {
		return ((T (*)(HableCurve*, float, float, float, float, float, float))(Il2CppBase() + 0x474C1EC))(this, toeStrength, toeLength, shoulderStrength, shoulderLength, shoulderAngle, gamma);
	}
	template <typename T = void> T InitSegments(uintptr_t srcParams) {
		return ((T (*)(HableCurve*, uintptr_t))(Il2CppBase() + 0x474C450))(this, srcParams);
	}
	template <typename T = void> T SolveAB(uintptr_t* lnA, uintptr_t* B, float x0, float y0, float m) {
		return ((T (*)(HableCurve*, uintptr_t*, uintptr_t*, float, float, float))(Il2CppBase() + 0x474CC74))(this, lnA, B, x0, y0, m);
	}
	template <typename T = void> T AsSlopeIntercept(uintptr_t* m, uintptr_t* b, float x0, float x1, float y0, float y1) {
		return ((T (*)(HableCurve*, uintptr_t*, uintptr_t*, float, float, float, float))(Il2CppBase() + 0x474CA24))(this, m, b, x0, x1, y0, y1);
	}
	template <typename T = float> T EvalDerivativeLinearGamma(float m, float b, float g, float x) {
		return ((T (*)(HableCurve*, float, float, float, float))(Il2CppBase() + 0x474CB34))(this, m, b, g, x);
	}

};

}
