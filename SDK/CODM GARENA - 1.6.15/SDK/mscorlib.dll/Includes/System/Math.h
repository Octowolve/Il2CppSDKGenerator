#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Math
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Math"));
	}


	template <typename T = double> static T Abs(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454CE94))(0, value);
	}
	template <typename T = float> static T Abs_1(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x454CEAC))(0, value);
	}
	template <typename T = int32_t> static T Abs_2(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x454CEC4))(0, value);
	}
	template <typename T = int64_t> static T Abs_3(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x454CFD0))(0, value);
	}
	template <typename T = double> static T Ceiling(double a) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454D0C4))(0, a);
	}
	template <typename T = double> static T Floor(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454D104))(0, d);
	}
	template <typename T = double> static T Log(double a, double newBase) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x454D110))(0, a, newBase);
	}
	template <typename T = float> static T Max(float val1, float val2) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x454D164))(0, val1, val2);
	}
	template <typename T = int32_t> static T Max_1(int32_t val1, int32_t val2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x454D1D0))(0, val1, val2);
	}
	template <typename T = int64_t> static T Max_2(int64_t val1, int64_t val2) {
		return ((T (*)(void *, int64_t, int64_t))(Il2CppBase() + 0x454D1E0))(0, val1, val2);
	}
	template <typename T = uint32_t> static T Max_3(uint32_t val1, uint32_t val2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x454D218))(0, val1, val2);
	}
	template <typename T = float> static T Min(float val1, float val2) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x454D228))(0, val1, val2);
	}
	template <typename T = int32_t> static T Min_1(int32_t val1, int32_t val2) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x454D294))(0, val1, val2);
	}
	template <typename T = int64_t> static T Min_2(int64_t val1, int64_t val2) {
		return ((T (*)(void *, int64_t, int64_t))(Il2CppBase() + 0x454D2A4))(0, val1, val2);
	}
	template <typename T = uint32_t> static T Min_3(uint32_t val1, uint32_t val2) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x454D2DC))(0, val1, val2);
	}
	template <typename T = uintptr_t> static T Round(uintptr_t d) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x454D2EC))(0, d);
	}
	template <typename T = double> static T Round_1(double a) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454D7B8))(0, a);
	}
	template <typename T = double> static T Round_2(double value, int32_t digits) {
		return ((T (*)(void *, double, int32_t))(Il2CppBase() + 0x454D884))(0, value, digits);
	}
	template <typename T = double> static T Round2(double value, int32_t digits, bool away_from_zero) {
		return ((T (*)(void *, double, int32_t, bool))(Il2CppBase() + 0x454D968))(0, value, digits, away_from_zero);
	}
	template <typename T = double> static T Round_3(double value, uintptr_t mode) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x454D98C))(0, value, mode);
	}
	template <typename T = double> static T Truncate(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DBF8))(0, d);
	}
	template <typename T = int32_t> static T Sign(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x454DC1C))(0, value);
	}
	template <typename T = int32_t> static T Sign_1(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x454DD08))(0, value);
	}
	template <typename T = double> static T Sin(double a) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD40))(0, a);
	}
	template <typename T = double> static T Cos(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD4C))(0, d);
	}
	template <typename T = double> static T Tan(double a) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD58))(0, a);
	}
	template <typename T = double> static T Acos(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD64))(0, d);
	}
	template <typename T = double> static T Asin(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD70))(0, d);
	}
	template <typename T = double> static T Atan(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DD7C))(0, d);
	}
	template <typename T = double> static T Atan2(double y, double x) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x454DD88))(0, y, x);
	}
	template <typename T = double> static T Exp(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DDAC))(0, d);
	}
	template <typename T = double> static T Log_1(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DDB8))(0, d);
	}
	template <typename T = double> static T Log10(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DDC4))(0, d);
	}
	template <typename T = double> static T Pow(double x, double y) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x454DDD0))(0, x, y);
	}
	template <typename T = double> static T Sqrt(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x454DDF4))(0, d);
	}

};

}
