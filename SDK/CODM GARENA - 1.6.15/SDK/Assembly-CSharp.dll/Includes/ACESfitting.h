#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ACESfitting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ACESfitting"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pow2_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pow3_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pow4_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Abs_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StandardDeviation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SolveLinearEquation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareCurveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInitialSampes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IterationFit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Fit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Fit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = double> static T Pow2_d(double x) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4A104E0))(0, x);
	}
	template <typename T = double> static T Pow3_d(double x) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4A105A0))(0, x);
	}
	template <typename T = double> static T Pow4_d(double x) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4A10664))(0, x);
	}
	template <typename T = double> static T Abs_d(double val) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4A10728))(0, val);
	}
	template <typename T = double> static T StandardDeviation(Il2CppList<double>* _dataX, Il2CppList<double>* _dataY, void* _curve) {
		return ((T (*)(void *, Il2CppList<double>*, Il2CppList<double>*, void*))(Il2CppBase() + 0x4A107F0))(0, _dataX, _dataY, _curve);
	}
	template <typename T = bool> static T SolveLinearEquation(uintptr_t M) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A10A28))(0, M);
	}
	template <typename T = bool> static T Fit(Il2CppList<double>* _curveSampleX, Il2CppList<double>* _curveSampleY, uintptr_t result) {
		return ((T (*)(void *, Il2CppList<double>*, Il2CppList<double>*, uintptr_t))(Il2CppBase() + 0x4A111D8))(0, _curveSampleX, _curveSampleY, result);
	}
	template <typename T = void> static T PrepareCurveData(uintptr_t _curve, uintptr_t _cfg, uintptr_t _result) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A11C20))(0, _curve, _cfg, _result);
	}
	template <typename T = void> static T PrepareInitialSampes(void* _curveFunction, uintptr_t _curveData, uintptr_t _cfg, uintptr_t _resultSampleX, uintptr_t _resultSampleY) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A11FE8))(0, _curveFunction, _curveData, _cfg, _resultSampleX, _resultSampleY);
	}
	template <typename T = float> static T IterationFit(void* _originalCurve, uintptr_t _curveData, Il2CppList<double>* _initialSampleX, Il2CppList<double>* _initialSampleY, uintptr_t setting, uintptr_t _result) {
		return ((T (*)(void *, void*, uintptr_t, Il2CppList<double>*, Il2CppList<double>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A1251C))(0, _originalCurve, _curveData, _initialSampleX, _initialSampleY, setting, _result);
	}
	template <typename T = float> static T Fit_1(uintptr_t _originalCurve, uintptr_t _result, uintptr_t _cfg, uintptr_t* _orgData, uintptr_t* _sampleBufferX, uintptr_t* _sampleBufferY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4A0F270))(0, _originalCurve, _result, _cfg, _orgData, _sampleBufferX, _sampleBufferY);
	}
	template <typename T = float> static T Fit_2(uintptr_t _originalCurve, uintptr_t _result, uintptr_t _cfg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A126E0))(0, _originalCurve, _result, _cfg);
	}

};

}
