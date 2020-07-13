#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilmicCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FilmicCurve"));
	}

	template <typename T = Il2CppVector2> T& m_toe() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& m_whitePoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& m_blackPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_shoulderAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_shoulderShoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_toeStr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_toeLift() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_shoulderStr() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_shoulderLift() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_gamma() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& m_toeAngPt() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& m_ShoulderAngPt() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& m_shoulder() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& m_segmentCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_segments() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_isDataDirty() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDirty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reconstruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppVector2> T get_Toe() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC0F04))(this);
	}
	template <typename T = void> T set_Toe(Il2CppVector2 value) {
		return ((T (*)(FilmicCurve*, Il2CppVector2))(Il2CppBase() + 0x3CC0F18))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Shoulder() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1014))(this);
	}
	template <typename T = Il2CppVector2> T get_ToeAnglePoint() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1028))(this);
	}
	template <typename T = Il2CppVector2> T get_ShoulderAnglePoint() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC103C))(this);
	}
	template <typename T = Il2CppVector2> T get_WhitePoint() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1050))(this);
	}
	template <typename T = void> T set_WhitePoint(Il2CppVector2 value) {
		return ((T (*)(FilmicCurve*, Il2CppVector2))(Il2CppBase() + 0x3CC1064))(this, value);
	}
	template <typename T = float> T get_ShoulderAngle() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC10BC))(this);
	}
	template <typename T = void> T set_ShoulderAngle(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC10C4))(this, value);
	}
	template <typename T = float> T get_ShoulderShoot() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC10E0))(this);
	}
	template <typename T = void> T set_ShoulderShoot(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC10E8))(this, value);
	}
	template <typename T = float> T get_ToeStrength() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1104))(this);
	}
	template <typename T = void> T set_ToeStrength(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC110C))(this, value);
	}
	template <typename T = float> T get_ToeLift() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1128))(this);
	}
	template <typename T = void> T set_ToeLift(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC1130))(this, value);
	}
	template <typename T = float> T get_ShoulderStrength() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC114C))(this);
	}
	template <typename T = void> T set_ShoulderStrength(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC1154))(this, value);
	}
	template <typename T = float> T get_ShoulderLift() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1170))(this);
	}
	template <typename T = void> T set_ShoulderLift(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC1178))(this, value);
	}
	template <typename T = float> T get_Gamma() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC1194))(this);
	}
	template <typename T = void> T set_Gamma(float value) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC119C))(this, value);
	}
	template <typename T = void> T SetDirty() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC0F70))(this);
	}
	template <typename T = void> T Reconstruct() {
		return ((T (*)(FilmicCurve*))(Il2CppBase() + 0x3CC0928))(this);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(FilmicCurve*, float))(Il2CppBase() + 0x3CC11B4))(this, x);
	}

};

}
