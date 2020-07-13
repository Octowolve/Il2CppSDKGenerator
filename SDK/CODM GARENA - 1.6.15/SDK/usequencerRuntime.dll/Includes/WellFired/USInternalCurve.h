#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USInternalCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USInternalCurve"));
	}

	template <typename T = uintptr_t> T& animationCurve() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& internalKeyframes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useCurrentValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T KeyframeComparer(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x485D840))(0, a, b);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485D99C))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(USInternalCurve*, float))(Il2CppBase() + 0x485D9A4))(this, value);
	}
	template <typename T = float> T get_FirstKeyframeTime() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485D9AC))(this);
	}
	template <typename T = float> T get_LastKeyframeTime() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485DA98))(this);
	}
	template <typename T = void> T set_UnityAnimationCurve(uintptr_t value) {
		return ((T (*)(USInternalCurve*, uintptr_t))(Il2CppBase() + 0x485DB94))(this, value);
	}
	template <typename T = uintptr_t> T get_UnityAnimationCurve() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E1F4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Keys() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E1FC))(this);
	}
	template <typename T = bool> T get_UseCurrentValue() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E204))(this);
	}
	template <typename T = void> T set_UseCurrentValue(bool value) {
		return ((T (*)(USInternalCurve*, bool))(Il2CppBase() + 0x485E20C))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E214))(this);
	}
	template <typename T = float> T Evaluate(float time) {
		return ((T (*)(USInternalCurve*, float))(Il2CppBase() + 0x485E43C))(this, time);
	}
	template <typename T = void> T BuildInternalCurveFromAnimationCurve() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485DCB0))(this);
	}
	template <typename T = void> T BuildAnimationCurveFromInternalCurve() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E4D0))(this);
	}
	template <typename T = void> T ValidateKeyframeTimes() {
		return ((T (*)(USInternalCurve*))(Il2CppBase() + 0x485E8F8))(this);
	}
	template <typename T = uintptr_t> T AddKeyframe(float time, float value) {
		return ((T (*)(USInternalCurve*, float, float))(Il2CppBase() + 0x485EB18))(this, time, value);
	}
	template <typename T = void> T RemoveKeyframe(uintptr_t internalKeyframe) {
		return ((T (*)(USInternalCurve*, uintptr_t))(Il2CppBase() + 0x485F4E8))(this, internalKeyframe);
	}
	template <typename T = uintptr_t> T GetNextKeyframe(uintptr_t keyframe) {
		return ((T (*)(USInternalCurve*, uintptr_t))(Il2CppBase() + 0x485F7D4))(this, keyframe);
	}
	template <typename T = uintptr_t> T GetPrevKeyframe(uintptr_t keyframe) {
		return ((T (*)(USInternalCurve*, uintptr_t))(Il2CppBase() + 0x485FA10))(this, keyframe);
	}
	template <typename T = bool> T Contains(uintptr_t keyframe) {
		return ((T (*)(USInternalCurve*, uintptr_t))(Il2CppBase() + 0x485FC38))(this, keyframe);
	}
	template <typename T = float> T FindNextKeyframeTime(float time) {
		return ((T (*)(USInternalCurve*, float))(Il2CppBase() + 0x485FD70))(this, time);
	}
	template <typename T = float> T FindPrevKeyframeTime(float time) {
		return ((T (*)(USInternalCurve*, float))(Il2CppBase() + 0x485FEFC))(this, time);
	}
	template <typename T = bool> T CanSetKeyframeToTime(float newTime) {
		return ((T (*)(USInternalCurve*, float))(Il2CppBase() + 0x4860088))(this, newTime);
	}
	template <typename T = float> static T OnEnablem__1(uintptr_t keyframe) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4860320))(0, keyframe);
	}
	template <typename T = float> static T AddKeyframem__2(uintptr_t keyframe) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4860340))(0, keyframe);
	}
	template <typename T = float> static T RemoveKeyframem__3(uintptr_t keyframe) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4860360))(0, keyframe);
	}

};

}
