#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CubicBezier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CubicBezier"));
	}

	template <typename T = Il2CppVector2> T& m_p0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_p1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_p2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& m_p3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_segment() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reconstruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalSegmentRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_XtoTx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvalItr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Lerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T set_P0(Il2CppVector2 value) {
		return ((T (*)(CubicBezier*, Il2CppVector2))(Il2CppBase() + 0x415BBA0))(this, value);
	}
	template <typename T = Il2CppVector2> T get_P0() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BBB8))(this);
	}
	template <typename T = void> T set_P1(Il2CppVector2 value) {
		return ((T (*)(CubicBezier*, Il2CppVector2))(Il2CppBase() + 0x415BBCC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_P1() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BBE4))(this);
	}
	template <typename T = void> T set_P2(Il2CppVector2 value) {
		return ((T (*)(CubicBezier*, Il2CppVector2))(Il2CppBase() + 0x415BBF8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_P2() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BC10))(this);
	}
	template <typename T = void> T set_P3(Il2CppVector2 value) {
		return ((T (*)(CubicBezier*, Il2CppVector2))(Il2CppBase() + 0x415BC24))(this, value);
	}
	template <typename T = Il2CppVector2> T get_P3() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BC3C))(this);
	}
	template <typename T = void> T Reconstruct() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BC50))(this);
	}
	template <typename T = float> T CalSegmentRange() {
		return ((T (*)(CubicBezier*))(Il2CppBase() + 0x415BCF8))(this);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(CubicBezier*, float))(Il2CppBase() + 0x415BDA4))(this, x);
	}
	template <typename T = float> T XtoTx(float x) {
		return ((T (*)(CubicBezier*, float))(Il2CppBase() + 0x415C088))(this, x);
	}
	template <typename T = float> T EvalItr(float x, float lBound, float rBound, int32_t maxIterationTime, float epsilon) {
		return ((T (*)(CubicBezier*, float, float, float, int32_t, float))(Il2CppBase() + 0x415BED8))(this, x, lBound, rBound, maxIterationTime, epsilon);
	}
	template <typename T = Il2CppVector2> T Lerp(float t) {
		return ((T (*)(CubicBezier*, float))(Il2CppBase() + 0x415C144))(this, t);
	}

};

}
