#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MonotoneCubicBezier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MonotoneCubicBezier"));
	}

	template <typename T = Il2CppVector2> T& m_angPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_ctrStart() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ctrEnd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_curve() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Constrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateTangentPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppVector2> T get_Start() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331A910))(this);
	}
	template <typename T = void> T set_Start(Il2CppVector2 value) {
		return ((T (*)(MonotoneCubicBezier*, Il2CppVector2))(Il2CppBase() + 0x331A93C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_End() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331A9D8))(this);
	}
	template <typename T = void> T set_End(Il2CppVector2 value) {
		return ((T (*)(MonotoneCubicBezier*, Il2CppVector2))(Il2CppBase() + 0x331AA04))(this, value);
	}
	template <typename T = Il2CppVector2> T get_AnglePoint() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331AAA0))(this);
	}
	template <typename T = void> T set_AnglePoint(Il2CppVector2 value) {
		return ((T (*)(MonotoneCubicBezier*, Il2CppVector2))(Il2CppBase() + 0x331AAB4))(this, value);
	}
	template <typename T = float> T get_StartHandle() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331AFB8))(this);
	}
	template <typename T = void> T set_StartHandle(float value) {
		return ((T (*)(MonotoneCubicBezier*, float))(Il2CppBase() + 0x331AFC0))(this, value);
	}
	template <typename T = float> T get_EndHandle() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331B050))(this);
	}
	template <typename T = void> T set_EndHandle(float value) {
		return ((T (*)(MonotoneCubicBezier*, float))(Il2CppBase() + 0x331B058))(this, value);
	}
	template <typename T = void> T Constrain() {
		return ((T (*)(MonotoneCubicBezier*))(Il2CppBase() + 0x331AB90))(this);
	}
	template <typename T = Il2CppVector2> T CalculateTangentPoint(Il2CppVector2 from, Il2CppVector2 to, float t) {
		return ((T (*)(MonotoneCubicBezier*, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x331AEBC))(this, from, to, t);
	}
	template <typename T = void> T Set(Il2CppVector2 start, Il2CppVector2 end, Il2CppVector2 m_anglePoint, float startHandle, float endHandle) {
		return ((T (*)(MonotoneCubicBezier*, Il2CppVector2, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x331A718))(this, start, end, m_anglePoint, startHandle, endHandle);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(MonotoneCubicBezier*, float))(Il2CppBase() + 0x331B0E8))(this, x);
	}

};

}
