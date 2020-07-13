#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class DOTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "DOTween"));
	}

	template <typename T = Il2CppString*> static T& Version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& useSafeMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& showUnityEditorReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = float> static T& timeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& useSmoothDeltaTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& maxSmoothUnscaledTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _logBehaviour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& drawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& defaultUpdateType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& defaultTimeScaleIndependent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& defaultAutoPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> static T& defaultAutoKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& defaultLoopType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = bool> static T& defaultRecyclable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& defaultEaseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = float> static T& defaultEaseOvershootOrAmplitude() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = float> static T& defaultEasePeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = bool> static T& isUnityEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = bool> static T& isDebugBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45);
	}
	template <typename T = int32_t> static T& maxActiveTweenersReached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = int32_t> static T& maxActiveSequencesReached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& GizmosDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = bool> static T& initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = bool> static T& isQuitting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x55);
	}

	template <typename T = uintptr_t> static T get_logBehaviour() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A9524))(0);
	}
	template <typename T = void> static T set_logBehaviour(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A95D4))(0, value);
	}
	template <typename T = uintptr_t> static T Init(void* recycleAllByDefault, void* useSafeMode, void* logBehaviour) {
		return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x44A985C))(0, recycleAllByDefault, useSafeMode, logBehaviour);
	}
	template <typename T = void> static T AutoInit() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AA514))(0);
	}
	template <typename T = uintptr_t> static T Init_1(uintptr_t settings, void* recycleAllByDefault, void* useSafeMode, void* logBehaviour) {
		return ((T (*)(void *, uintptr_t, void*, void*, void*))(Il2CppBase() + 0x44A9A9C))(0, settings, recycleAllByDefault, useSafeMode, logBehaviour);
	}
	template <typename T = void> static T SetTweensCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x44AA6FC))(0, tweenersCapacity, sequencesCapacity);
	}
	template <typename T = void> static T Clear(bool destroy) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44AA7A4))(0, destroy);
	}
	template <typename T = void> static T ClearCachedTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AAAF8))(0);
	}
	template <typename T = int32_t> static T Validate() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AAB90))(0);
	}
	template <typename T = void*> static T To(void* getter, void* setter, float endValue, float duration) {
		return ((T (*)(void *, void*, void*, float, float))(Il2CppBase() + 0x44AAC28))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_1(void* getter, void* setter, double endValue, float duration) {
		return ((T (*)(void *, void*, void*, double, float))(Il2CppBase() + 0x44AAD1C))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_2(void* getter, void* setter, int32_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, int32_t, float))(Il2CppBase() + 0x44AAE10))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_3(void* getter, void* setter, uint32_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uint32_t, float))(Il2CppBase() + 0x44AAF04))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_4(void* getter, void* setter, int64_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, int64_t, float))(Il2CppBase() + 0x44AAFF8))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_5(void* getter, void* setter, uint64_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uint64_t, float))(Il2CppBase() + 0x44AB0F0))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_6(void* getter, void* setter, Il2CppString* endValue, float duration) {
		return ((T (*)(void *, void*, void*, Il2CppString*, float))(Il2CppBase() + 0x44AB1E8))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_7(void* getter, void* setter, Il2CppVector2 endValue, float duration) {
		return ((T (*)(void *, void*, void*, Il2CppVector2, float))(Il2CppBase() + 0x44AB2DC))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_8(void* getter, void* setter, Il2CppVector3 endValue, float duration) {
		return ((T (*)(void *, void*, void*, Il2CppVector3, float))(Il2CppBase() + 0x44AB3D8))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_9(void* getter, void* setter, uintptr_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uintptr_t, float))(Il2CppBase() + 0x44AB4D8))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_10(void* getter, void* setter, Il2CppVector3 endValue, float duration) {
		return ((T (*)(void *, void*, void*, Il2CppVector3, float))(Il2CppBase() + 0x44AB5E0))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_11(void* getter, void* setter, uintptr_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uintptr_t, float))(Il2CppBase() + 0x44AB6E0))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_12(void* getter, void* setter, Il2CppRect endValue, float duration) {
		return ((T (*)(void *, void*, void*, Il2CppRect, float))(Il2CppBase() + 0x44AB7E8))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_13(void* getter, void* setter, uintptr_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uintptr_t, float))(Il2CppBase() + 0x44AB8F0))(0, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T To_14(void* plugin, void* getter, void* setter, uintptr_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, void*, uintptr_t, float))(Il2CppBase() + 0x1B5393C))(0, plugin, getter, setter, endValue, duration);
	}
	template <typename T = void*> static T ToAxis(void* getter, void* setter, float endValue, float duration, uintptr_t axisConstraint) {
		return ((T (*)(void *, void*, void*, float, float, uintptr_t))(Il2CppBase() + 0x44AB9E4))(0, getter, setter, endValue, duration, axisConstraint);
	}
	template <typename T = uintptr_t> static T ToAlpha(void* getter, void* setter, float endValue, float duration) {
		return ((T (*)(void *, void*, void*, float, float))(Il2CppBase() + 0x44ABB20))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T To_15(void* setter, float startValue, float endValue, float duration) {
		return ((T (*)(void *, void*, float, float, float))(Il2CppBase() + 0x44ABC58))(0, setter, startValue, endValue, duration);
	}
	template <typename T = void*> static T Punch(void* getter, void* setter, Il2CppVector3 direction, float duration, int32_t vibrato, float elasticity) {
		return ((T (*)(void *, void*, void*, Il2CppVector3, float, int32_t, float))(Il2CppBase() + 0x44ABE2C))(0, getter, setter, direction, duration, vibrato, elasticity);
	}
	template <typename T = void*> static T Shake(void* getter, void* setter, float duration, float strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool fadeOut) {
		return ((T (*)(void *, void*, void*, float, float, int32_t, float, bool, bool))(Il2CppBase() + 0x44AC568))(0, getter, setter, duration, strength, vibrato, randomness, ignoreZAxis, fadeOut);
	}
	template <typename T = void*> static T Shake_1(void* getter, void* setter, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool fadeOut) {
		return ((T (*)(void *, void*, void*, float, Il2CppVector3, int32_t, float, bool))(Il2CppBase() + 0x44ACCF8))(0, getter, setter, duration, strength, vibrato, randomness, fadeOut);
	}
	template <typename T = void*> static T Shake_2(void* getter, void* setter, float duration, Il2CppVector3 strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut) {
		return ((T (*)(void *, void*, void*, float, Il2CppVector3, int32_t, float, bool, bool, bool))(Il2CppBase() + 0x44AC688))(0, getter, setter, duration, strength, vibrato, randomness, ignoreZAxis, vectorBased, fadeOut);
	}
	template <typename T = void*> static T ToArray(void* getter, void* setter, Il2CppArray<uintptr_t>* endValues, Il2CppArray<uintptr_t>* durations) {
		return ((T (*)(void *, void*, void*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44AC23C))(0, getter, setter, endValues, durations);
	}
	template <typename T = void*> static T To_16(void* getter, void* setter, uintptr_t endValue, float duration) {
		return ((T (*)(void *, void*, void*, uintptr_t, float))(Il2CppBase() + 0x44ACE00))(0, getter, setter, endValue, duration);
	}
	template <typename T = uintptr_t> static T Sequence() {
		return ((T (*)(void *))(Il2CppBase() + 0x44ACF28))(0);
	}
	template <typename T = int32_t> static T CompleteAll(bool withCallbacks) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44AD320))(0, withCallbacks);
	}
	template <typename T = int32_t> static T Complete(uintptr_t targetOrId, bool withCallbacks) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44AD400))(0, targetOrId, withCallbacks);
	}
	template <typename T = int32_t> static T CompleteAndReturnKilledTot() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AD4F4))(0);
	}
	template <typename T = int32_t> static T CompleteAndReturnKilledTot_1(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AD5B8))(0, targetOrId);
	}
	template <typename T = int32_t> static T CompleteAndReturnKilledTotExceptFor(Il2CppArray<uintptr_t>* excludeTargetsOrIds) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44AD694))(0, excludeTargetsOrIds);
	}
	template <typename T = int32_t> static T FlipAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AD75C))(0);
	}
	template <typename T = int32_t> static T Flip(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AD81C))(0, targetOrId);
	}
	template <typename T = int32_t> static T GotoAll(float to, bool andPlay) {
		return ((T (*)(void *, float, bool))(Il2CppBase() + 0x44AD8F4))(0, to, andPlay);
	}
	template <typename T = int32_t> static T Goto(uintptr_t targetOrId, float to, bool andPlay) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x44AD9C8))(0, targetOrId, to, andPlay);
	}
	template <typename T = int32_t> static T KillAll(bool complete) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44ADAB0))(0, complete);
	}
	template <typename T = int32_t> static T KillAll_1(bool complete, Il2CppArray<uintptr_t>* idsOrTargetsToExclude) {
		return ((T (*)(void *, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44ADB9C))(0, complete, idsOrTargetsToExclude);
	}
	template <typename T = int32_t> static T Kill(uintptr_t targetOrId, bool complete) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44ADD48))(0, targetOrId, complete);
	}
	template <typename T = int32_t> static T PauseAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44ADE70))(0);
	}
	template <typename T = int32_t> static T Pause(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44ADF30))(0, targetOrId);
	}
	template <typename T = int32_t> static T PlayAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AE008))(0);
	}
	template <typename T = int32_t> static T Play(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AE0C8))(0, targetOrId);
	}
	template <typename T = int32_t> static T Play_1(uintptr_t target, uintptr_t id) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44AE1A0))(0, target, id);
	}
	template <typename T = int32_t> static T PlayBackwardsAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AE27C))(0);
	}
	template <typename T = int32_t> static T PlayBackwards(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AE33C))(0, targetOrId);
	}
	template <typename T = int32_t> static T PlayBackwards_1(uintptr_t target, uintptr_t id) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44AE414))(0, target, id);
	}
	template <typename T = int32_t> static T PlayForwardAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AE4F0))(0);
	}
	template <typename T = int32_t> static T PlayForward(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AE5B0))(0, targetOrId);
	}
	template <typename T = int32_t> static T PlayForward_1(uintptr_t target, uintptr_t id) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44AE688))(0, target, id);
	}
	template <typename T = int32_t> static T RestartAll(bool includeDelay) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44AE764))(0, includeDelay);
	}
	template <typename T = int32_t> static T Restart(uintptr_t targetOrId, bool includeDelay, float changeDelayTo) {
		return ((T (*)(void *, uintptr_t, bool, float))(Il2CppBase() + 0x44AE828))(0, targetOrId, includeDelay, changeDelayTo);
	}
	template <typename T = int32_t> static T Restart_1(uintptr_t target, uintptr_t id, bool includeDelay, float changeDelayTo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, float))(Il2CppBase() + 0x44AE910))(0, target, id, includeDelay, changeDelayTo);
	}
	template <typename T = int32_t> static T RewindAll(bool includeDelay) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44AE9FC))(0, includeDelay);
	}
	template <typename T = int32_t> static T Rewind(uintptr_t targetOrId, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44AEAC0))(0, targetOrId, includeDelay);
	}
	template <typename T = int32_t> static T SmoothRewindAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AEB9C))(0);
	}
	template <typename T = int32_t> static T SmoothRewind(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AEC5C))(0, targetOrId);
	}
	template <typename T = int32_t> static T TogglePauseAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AED34))(0);
	}
	template <typename T = int32_t> static T TogglePause(uintptr_t targetOrId) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AEDF4))(0, targetOrId);
	}
	template <typename T = bool> static T IsTweening(uintptr_t targetOrId, bool alsoCheckIfIsPlaying) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44AEECC))(0, targetOrId, alsoCheckIfIsPlaying);
	}
	template <typename T = int32_t> static T TotalPlayingTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AEF9C))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T PlayingTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AF034))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T PausedTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AF0D0))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T TweensById(uintptr_t id, bool playingOnly) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44AF16C))(0, id, playingOnly);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T TweensByTarget(uintptr_t target, bool playingOnly) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44AF224))(0, target, playingOnly);
	}
	template <typename T = void> static T InitCheck() {
		return ((T (*)(void *))(Il2CppBase() + 0x44AD00C))(0);
	}
	template <typename T = void*> static T ApplyTo(void* getter, void* setter, uintptr_t endValue, float duration, void* plugin) {
		return ((T (*)(void *, void*, void*, uintptr_t, float, void*))(Il2CppBase() + 0x1B5238C))(0, getter, setter, endValue, duration, plugin);
	}

};

}
