#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TimeSpan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "TimeSpan"));
	}

	template <typename T = int64_t> static T& TicksPerDay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& TicksPerHour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& TicksPerMillisecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& TicksPerMinute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& TicksPerSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MinValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Zero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int64_t> T& _ticks() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int64_t> static T CalculateTicks(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4D8D4F8))(0, days, hours, minutes, seconds, milliseconds);
	}
	template <typename T = int32_t> T get_Days() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8D9C8))(this);
	}
	template <typename T = int32_t> T get_Hours() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DA18))(this);
	}
	template <typename T = int32_t> T get_Milliseconds() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DA74))(this);
	}
	template <typename T = int32_t> T get_Minutes() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DAD0))(this);
	}
	template <typename T = int32_t> T get_Seconds() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DB30))(this);
	}
	template <typename T = int64_t> T get_Ticks() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DB68))(this);
	}
	template <typename T = double> T get_TotalDays() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DBA0))(this);
	}
	template <typename T = double> T get_TotalHours() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DC00))(this);
	}
	template <typename T = double> T get_TotalMilliseconds() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DC30))(this);
	}
	template <typename T = double> T get_TotalMinutes() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DC90))(this);
	}
	template <typename T = double> T get_TotalSeconds() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8DCF0))(this);
	}
	template <typename T = uintptr_t> T Add(uintptr_t ts) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8DF24))(this, ts);
	}
	template <typename T = int32_t> static T Compare(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8DF40))(0, t1, t2);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t value) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8E134))(this, value);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t value) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8E228))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8E260))(this, obj);
	}
	template <typename T = uintptr_t> T Duration() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8E27C))(this);
	}
	template <typename T = bool> T Equals_1(uintptr_t value) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8E3B4))(this, value);
	}
	template <typename T = uintptr_t> static T FromDays(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4D8E3BC))(0, value);
	}
	template <typename T = uintptr_t> static T FromHours(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4D8E964))(0, value);
	}
	template <typename T = uintptr_t> static T FromMinutes(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4D8EA30))(0, value);
	}
	template <typename T = uintptr_t> static T FromSeconds(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4D8EAFC))(0, value);
	}
	template <typename T = uintptr_t> static T FromMilliseconds(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x4D8EBC8))(0, value);
	}
	template <typename T = uintptr_t> static T From(double value, int64_t tickMultiplicator) {
		return ((T (*)(void *, double, int64_t))(Il2CppBase() + 0x4D8E488))(0, value, tickMultiplicator);
	}
	template <typename T = uintptr_t> static T FromTicks(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4D8EC90))(0, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8ECA8))(this);
	}
	template <typename T = uintptr_t> T Negate() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8EDF0))(this);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D8EE04))(0, s);
	}
	template <typename T = uintptr_t> T Subtract(uintptr_t ts) {
		return ((T (*)(TimeSpan*, uintptr_t))(Il2CppBase() + 0x4D8F524))(this, ts);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TimeSpan*))(Il2CppBase() + 0x4D8F844))(this);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F84C))(0, t1, t2);
	}
	template <typename T = bool> static T op_Equality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F880))(0, t1, t2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F89C))(0, t1, t2);
	}
	template <typename T = bool> static T op_GreaterThanOrEqual(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F8C0))(0, t1, t2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F8E4))(0, t1, t2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F8FC))(0, t1, t2);
	}
	template <typename T = bool> static T op_LessThanOrEqual(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F920))(0, t1, t2);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t t1, uintptr_t t2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8F944))(0, t1, t2);
	}

};

}
