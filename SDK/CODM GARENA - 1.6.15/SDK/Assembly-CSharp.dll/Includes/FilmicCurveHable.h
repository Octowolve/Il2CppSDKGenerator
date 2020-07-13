#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilmicCurveHable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FilmicCurveHable"));
	}

	template <typename T = int32_t> static T& m_segmentCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_toe() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_shoulder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_whitePoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_gamma() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_segments() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConstrainParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reconstruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector2> T get_Toe() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC16A4))(this);
	}
	template <typename T = void> T set_Toe(Il2CppVector2 value) {
		return ((T (*)(FilmicCurveHable*, Il2CppVector2))(Il2CppBase() + 0x3CC16B8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Shoulder() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC1798))(this);
	}
	template <typename T = void> T set_Shoulder(Il2CppVector2 value) {
		return ((T (*)(FilmicCurveHable*, Il2CppVector2))(Il2CppBase() + 0x3CC17AC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_WhitePoint() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC17B8))(this);
	}
	template <typename T = void> T set_WhitePoint(Il2CppVector2 value) {
		return ((T (*)(FilmicCurveHable*, Il2CppVector2))(Il2CppBase() + 0x3CC17CC))(this, value);
	}
	template <typename T = float> T get_Gamma() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC17D8))(this);
	}
	template <typename T = void> T set_Gamma(float value) {
		return ((T (*)(FilmicCurveHable*, float))(Il2CppBase() + 0x3CC17E0))(this, value);
	}
	template <typename T = void> T ConstrainParams() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC17E8))(this);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(FilmicCurveHable*, float))(Il2CppBase() + 0x3CC1974))(this, x);
	}
	template <typename T = void> T Reconstruct() {
		return ((T (*)(FilmicCurveHable*))(Il2CppBase() + 0x3CC16C4))(this);
	}
	template <typename T = void> T Set(Il2CppVector2 toe, Il2CppVector2 shoulder, Il2CppVector2 whitePoint, float gamma) {
		return ((T (*)(FilmicCurveHable*, Il2CppVector2, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x3CC1B00))(this, toe, shoulder, whitePoint, gamma);
	}
	template <typename T = void> T Set_1(float _x0, float _x1, float _y0, float _y1, float _xw, float _yw, float _gamma) {
		return ((T (*)(FilmicCurveHable*, float, float, float, float, float, float, float))(Il2CppBase() + 0x3CC1C00))(this, _x0, _x1, _y0, _y1, _xw, _yw, _gamma);
	}

};

}
