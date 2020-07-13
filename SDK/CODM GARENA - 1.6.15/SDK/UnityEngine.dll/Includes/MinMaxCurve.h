#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinMaxCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "MinMaxCurve"));
	}

	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_CurveMultiplier() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_CurveMin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_CurveMax() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ConstantMin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ConstantMax() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_mode() {
		return ((T (*)(MinMaxCurve*))(Il2CppBase() + 0x4AC13C4))(this);
	}
	template <typename T = float> T get_constantMax() {
		return ((T (*)(MinMaxCurve*))(Il2CppBase() + 0x4AC13D4))(this);
	}
	template <typename T = void> T set_constantMax(float value) {
		return ((T (*)(MinMaxCurve*, float))(Il2CppBase() + 0x4AC13E4))(this, value);
	}
	template <typename T = float> T get_constantMin() {
		return ((T (*)(MinMaxCurve*))(Il2CppBase() + 0x4AC13F4))(this);
	}
	template <typename T = void> T set_constantMin(float value) {
		return ((T (*)(MinMaxCurve*, float))(Il2CppBase() + 0x4AC1404))(this, value);
	}
	template <typename T = float> T get_constant() {
		return ((T (*)(MinMaxCurve*))(Il2CppBase() + 0x4AC1414))(this);
	}
	template <typename T = void> T set_constant(float value) {
		return ((T (*)(MinMaxCurve*, float))(Il2CppBase() + 0x4AC1424))(this, value);
	}
	template <typename T = uintptr_t> static T op_Implicit(float constant) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC142C))(0, constant);
	}

};

}
