#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class TweenManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "TweenManager"));
	}

	template <typename T = int32_t> static T& _DefaultMaxTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _DefaultMaxSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _MaxTweensReached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& maxActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& maxTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& maxSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& hasActiveTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& hasActiveDefaultTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD);
	}
	template <typename T = bool> static T& hasActiveLateTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE);
	}
	template <typename T = bool> static T& hasActiveFixedTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF);
	}
	template <typename T = int32_t> static T& totActiveTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& totActiveDefaultTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& totActiveLateTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& totActiveFixedTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& totActiveTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& totActiveSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& totPooledTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& totPooledSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& totTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& totSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = bool> static T& isUpdateLoop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _activeTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _pooledTweeners() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _PooledSequences() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _KillList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = int32_t> static T& _maxActiveLookupId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = bool> static T& _requiresActiveReorganization() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = int32_t> static T& _reorganizeFromId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = int32_t> static T& _minPooledTweenerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = int32_t> static T& _maxPooledTweenerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = bool> static T& _despawnAllCalledFromUpdateLoopCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void*> static T GetTweener() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B470D4))(0);
	}
	template <typename T = uintptr_t> static T GetSequence() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A3388))(0);
	}
	template <typename T = void> static T SetUpdateType(uintptr_t t, uintptr_t updateType, bool isIndependentUpdate) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x44A42CC))(0, t, updateType, isIndependentUpdate);
	}
	template <typename T = void> static T AddActiveTweenToSequence(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A4674))(0, t);
	}
	template <typename T = int32_t> static T DespawnAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A4EB4))(0);
	}
	template <typename T = void> static T Despawn(uintptr_t t, bool modifyActiveLists) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44A51DC))(0, t, modifyActiveLists);
	}
	template <typename T = void> static T PurgeAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A5C9C))(0);
	}
	template <typename T = void> static T PurgePools() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A5F0C))(0);
	}
	template <typename T = void> static T ResetCapacities() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A607C))(0);
	}
	template <typename T = void> static T SetCapacities(int32_t tweenersCapacity, int32_t sequencesCapacity) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x449E0F4))(0, tweenersCapacity, sequencesCapacity);
	}
	template <typename T = int32_t> static T Validate() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A611C))(0);
	}
	template <typename T = void> static T Update(uintptr_t updateType, float deltaTime, float independentTime) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x449CE64))(0, updateType, deltaTime, independentTime);
	}
	template <typename T = int32_t> static T FilteredOperation(uintptr_t operationType, uintptr_t filterType, uintptr_t id, bool optionalBool, float optionalFloat, uintptr_t optionalObj, Il2CppArray<uintptr_t>* optionalArray) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, float, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A6AE0))(0, operationType, filterType, id, optionalBool, optionalFloat, optionalObj, optionalArray);
	}
	template <typename T = bool> static T Complete(uintptr_t t, bool modifyActiveLists, uintptr_t updateMode) {
		return ((T (*)(void *, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x44A755C))(0, t, modifyActiveLists, updateMode);
	}
	template <typename T = bool> static T Flip(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A76C0))(0, t);
	}
	template <typename T = void> static T ForceInit(uintptr_t t, bool isSequenced) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44A7F8C))(0, t, isSequenced);
	}
	template <typename T = bool> static T Goto(uintptr_t t, float to, bool andPlay, uintptr_t updateMode) {
		return ((T (*)(void *, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x44A76EC))(0, t, to, andPlay, updateMode);
	}
	template <typename T = bool> static T Pause(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A788C))(0, t);
	}
	template <typename T = bool> static T Play(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A78E4))(0, t);
	}
	template <typename T = bool> static T PlayBackwards(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A7984))(0, t);
	}
	template <typename T = bool> static T PlayForward(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A7A94))(0, t);
	}
	template <typename T = bool> static T Restart(uintptr_t t, bool includeDelay, float changeDelayTo) {
		return ((T (*)(void *, uintptr_t, bool, float))(Il2CppBase() + 0x44A7BA0))(0, t, includeDelay, changeDelayTo);
	}
	template <typename T = bool> static T Rewind(uintptr_t t, bool includeDelay) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44A7CBC))(0, t, includeDelay);
	}
	template <typename T = bool> static T SmoothRewind(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A7DB4))(0, t);
	}
	template <typename T = bool> static T TogglePause(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A7E9C))(0, t);
	}
	template <typename T = int32_t> static T TotalPooledTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A80BC))(0);
	}
	template <typename T = int32_t> static T TotalPlayingTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A8174))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetActiveTweens(bool playing) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44A8374))(0, playing);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetTweensById(uintptr_t id, bool playingOnly) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44A8644))(0, id, playingOnly);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetTweensByTarget(uintptr_t target, bool playingOnly) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44A8938))(0, target, playingOnly);
	}
	template <typename T = void> static T MarkForKilling(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A68CC))(0, t);
	}
	template <typename T = void> static T AddActiveTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A38E4))(0, t);
	}
	template <typename T = void> static T ReorganizeActiveTweens() {
		return ((T (*)(void *))(Il2CppBase() + 0x44A63B4))(0);
	}
	template <typename T = void> static T DespawnActiveTweens(Il2CppList<uintptr_t>* tweens) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x44A69C8))(0, tweens);
	}
	template <typename T = void> static T RemoveActiveTween(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A4714))(0, t);
	}
	template <typename T = void> static T ClearTweenArray(Il2CppArray<uintptr_t>* tweens) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A5C34))(0, tweens);
	}
	template <typename T = void> static T IncreaseCapacities(uintptr_t increaseMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44A3DBC))(0, increaseMode);
	}

};

}
