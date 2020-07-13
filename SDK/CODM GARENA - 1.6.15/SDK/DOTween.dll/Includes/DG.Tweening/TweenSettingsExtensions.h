#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class TweenSettingsExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "TweenSettingsExtensions"));
	}


	template <typename T = uintptr_t> static T SetAutoKill(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3349B64))(0, t);
	}
	template <typename T = uintptr_t> static T SetAutoKill_1(uintptr_t t, bool autoKillOnCompletion) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3349B8C))(0, t, autoKillOnCompletion);
	}
	template <typename T = uintptr_t> static T SetId(uintptr_t t, uintptr_t id) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349EBC))(0, t, id);
	}
	template <typename T = uintptr_t> static T SetTarget(uintptr_t t, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x334A0D0))(0, t, target);
	}
	template <typename T = uintptr_t> static T SetLoops(uintptr_t t, int32_t loops) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3349ED8))(0, t, loops);
	}
	template <typename T = uintptr_t> static T SetLoops_1(uintptr_t t, int32_t loops, uintptr_t loopType) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3349F50))(0, t, loops, loopType);
	}
	template <typename T = uintptr_t> static T SetEase(uintptr_t t, uintptr_t ease) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349C98))(0, t, ease);
	}
	template <typename T = uintptr_t> static T SetEase_1(uintptr_t t, uintptr_t ease, float overshoot) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x3349CEC))(0, t, ease, overshoot);
	}
	template <typename T = uintptr_t> static T SetEase_2(uintptr_t t, uintptr_t ease, float amplitude, float period) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x3349D48))(0, t, ease, amplitude, period);
	}
	template <typename T = uintptr_t> static T SetEase_3(uintptr_t t, uintptr_t animCurve) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349DD0))(0, t, animCurve);
	}
	template <typename T = uintptr_t> static T SetEase_4(uintptr_t t, uintptr_t customEase) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349DAC))(0, t, customEase);
	}
	template <typename T = uintptr_t> static T SetRecyclable(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3349FCC))(0, t);
	}
	template <typename T = uintptr_t> static T SetRecyclable_1(uintptr_t t, bool recyclable) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3349FEC))(0, t, recyclable);
	}
	template <typename T = uintptr_t> static T SetUpdate(uintptr_t t, bool isIndependentUpdate) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x334A2F4))(0, t, isIndependentUpdate);
	}
	template <typename T = uintptr_t> static T SetUpdate_1(uintptr_t t, uintptr_t updateType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x334A0EC))(0, t, updateType);
	}
	template <typename T = uintptr_t> static T SetUpdate_2(uintptr_t t, uintptr_t updateType, bool isIndependentUpdate) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x334A21C))(0, t, updateType, isIndependentUpdate);
	}
	template <typename T = uintptr_t> static T OnStart(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349694))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnPlay(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x334965C))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnPause(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349640))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnRewind(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349678))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnUpdate(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33496CC))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnStepComplete(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33496B0))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnComplete(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349608))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnKill(uintptr_t t, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349624))(0, t, action);
	}
	template <typename T = uintptr_t> static T OnWaypointChange(uintptr_t t, void* action) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x33496E8))(0, t, action);
	}
	template <typename T = uintptr_t> static T SetAs(uintptr_t t, uintptr_t asTween) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349704))(0, t, asTween);
	}
	template <typename T = uintptr_t> static T SetAs_1(uintptr_t t, uintptr_t tweenParams) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3349900))(0, t, tweenParams);
	}
	template <typename T = uintptr_t> static T Append(uintptr_t s, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D9070))(0, s, t);
	}
	template <typename T = uintptr_t> static T Prepend(uintptr_t s, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D90E0))(0, s, t);
	}
	template <typename T = uintptr_t> static T Join(uintptr_t s, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D9140))(0, s, t);
	}
	template <typename T = uintptr_t> static T Insert(uintptr_t s, float atPosition, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x51D91B0))(0, s, atPosition, t);
	}
	template <typename T = uintptr_t> static T AppendInterval(uintptr_t s, float interval) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x51D9228))(0, s, interval);
	}
	template <typename T = uintptr_t> static T PrependInterval(uintptr_t s, float interval) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x51D9268))(0, s, interval);
	}
	template <typename T = uintptr_t> static T AppendCallback(uintptr_t s, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D92A8))(0, s, callback);
	}
	template <typename T = uintptr_t> static T PrependCallback(uintptr_t s, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D9300))(0, s, callback);
	}
	template <typename T = uintptr_t> static T InsertCallback(uintptr_t s, float atPosition, uintptr_t callback) {
		return ((T (*)(void *, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x51D9358))(0, s, atPosition, callback);
	}
	template <typename T = uintptr_t> static T From(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3349524))(0, t);
	}
	template <typename T = uintptr_t> static T From_1(uintptr_t t, bool isRelative) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3349580))(0, t, isRelative);
	}
	template <typename T = uintptr_t> static T SetDelay(uintptr_t t, float delay) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x3349BB0))(0, t, delay);
	}
	template <typename T = uintptr_t> static T SetRelative(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x334A008))(0, t);
	}
	template <typename T = uintptr_t> static T SetRelative_1(uintptr_t t, bool isRelative) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x334A048))(0, t, isRelative);
	}
	template <typename T = uintptr_t> static T SetSpeedBased(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x334A084))(0, t);
	}
	template <typename T = uintptr_t> static T SetSpeedBased_1(uintptr_t t, bool isSpeedBased) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x334A0AC))(0, t, isSpeedBased);
	}
	template <typename T = uintptr_t> static T SetOptions(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D93B8))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_1(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D93D4))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_2(void* t, uintptr_t axisConstraint, bool snapping) {
		return ((T (*)(void *, void*, uintptr_t, bool))(Il2CppBase() + 0x51D93F0))(0, t, axisConstraint, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_3(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D9410))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_4(void* t, uintptr_t axisConstraint, bool snapping) {
		return ((T (*)(void *, void*, uintptr_t, bool))(Il2CppBase() + 0x51D942C))(0, t, axisConstraint, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_5(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D944C))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_6(void* t, uintptr_t axisConstraint, bool snapping) {
		return ((T (*)(void *, void*, uintptr_t, bool))(Il2CppBase() + 0x51D9468))(0, t, axisConstraint, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_7(void* t, bool useShortest360Route) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D9488))(0, t, useShortest360Route);
	}
	template <typename T = uintptr_t> static T SetOptions_8(void* t, bool alphaOnly) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D94A8))(0, t, alphaOnly);
	}
	template <typename T = uintptr_t> static T SetOptions_9(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D94C4))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_10(void* t, bool richTextEnabled, uintptr_t scrambleMode, Il2CppString* scrambleChars) {
		return ((T (*)(void *, void*, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x51D94E0))(0, t, richTextEnabled, scrambleMode, scrambleChars);
	}
	template <typename T = uintptr_t> static T SetOptions_11(void* t, bool snapping) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x51D968C))(0, t, snapping);
	}
	template <typename T = uintptr_t> static T SetOptions_12(void* t, uintptr_t axisConstraint, bool snapping) {
		return ((T (*)(void *, void*, uintptr_t, bool))(Il2CppBase() + 0x51D96A8))(0, t, axisConstraint, snapping);
	}
	template <typename T = void*> static T SetOptions_13(void* t, uintptr_t lockPosition, uintptr_t lockRotation) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D96C8))(0, t, lockPosition, lockRotation);
	}
	template <typename T = void*> static T SetOptions_14(void* t, bool closePath, uintptr_t lockPosition, uintptr_t lockRotation) {
		return ((T (*)(void *, void*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x51D96F0))(0, t, closePath, lockPosition, lockRotation);
	}
	template <typename T = void*> static T SetLookAt(void* t, Il2CppVector3 lookAtPosition, void* forwardDirection, void* up) {
		return ((T (*)(void *, void*, Il2CppVector3, void*, void*))(Il2CppBase() + 0x51D9718))(0, t, lookAtPosition, forwardDirection, up);
	}
	template <typename T = void*> static T SetLookAt_1(void* t, uintptr_t lookAtTransform, void* forwardDirection, void* up) {
		return ((T (*)(void *, void*, uintptr_t, void*, void*))(Il2CppBase() + 0x51D9C54))(0, t, lookAtTransform, forwardDirection, up);
	}
	template <typename T = void*> static T SetLookAt_2(void* t, float lookAhead, void* forwardDirection, void* up) {
		return ((T (*)(void *, void*, float, void*, void*))(Il2CppBase() + 0x51D9CD0))(0, t, lookAhead, forwardDirection, up);
	}
	template <typename T = void> static T SetPathForwardDirection(void* t, void* forwardDirection, void* up) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x51D979C))(0, t, forwardDirection, up);
	}

};

}
