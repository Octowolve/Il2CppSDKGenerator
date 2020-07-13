#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineObserver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineObserver"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& observerKeyframes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& currentSnapshots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& camerasAtLastSnapShot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& layersToIgnore() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CurrentlyActiveKeyframe() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_CurrentlyActiveKeyframe() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487909C))(this);
	}
	template <typename T = void> T set_CurrentlyActiveKeyframe(uintptr_t value) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x48790A4))(this, value);
	}
	template <typename T = int32_t> T KeyframeComparer(uintptr_t a, uintptr_t b) {
		return ((T (*)(USTimelineObserver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48790AC))(this, a, b);
	}
	template <typename T = void> T StopTimeline() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487929C))(this);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x4879708))(this);
	}
	template <typename T = void> T ResumeTimeline() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487970C))(this);
	}
	template <typename T = void> T StartTimeline() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x4879710))(this);
	}
	template <typename T = void> T DisableAllCameras() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x4879C74))(this);
	}
	template <typename T = void> T ManuallySetTime(float sequencerTime) {
		return ((T (*)(USTimelineObserver*, float))(Il2CppBase() + 0x487A0D8))(this, sequencerTime);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USTimelineObserver*, float))(Il2CppBase() + 0x487A0EC))(this, time);
	}
	template <typename T = void> T Process(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineObserver*, float, float))(Il2CppBase() + 0x487A100))(this, sequencerTime, playbackRate);
	}
	template <typename T = uintptr_t> T KeyframeBefore(uintptr_t currentlyActiveKeyframe) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x487AAAC))(this, currentlyActiveKeyframe);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CollectAllKeyframesBetween(uintptr_t prevKeyframe, uintptr_t currentKeyframe) {
		return ((T (*)(USTimelineObserver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x487ADE4))(this, prevKeyframe, currentKeyframe);
	}
	template <typename T = void> T Update() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487B2E4))(this);
	}
	template <typename T = uintptr_t> T AddKeyframe(uintptr_t keyframe) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x487B530))(this, keyframe);
	}
	template <typename T = void> T SortKeyframes() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x48797F0))(this);
	}
	template <typename T = void> T RemoveKeyframe(uintptr_t keyframe) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x487B63C))(this, keyframe);
	}
	template <typename T = void> T SetKeyframes(Il2CppList<uintptr_t>* keyframes) {
		return ((T (*)(USTimelineObserver*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x487B76C))(this, keyframes);
	}
	template <typename T = void> T OnEditorUndo() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487B774))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487B778))(this);
	}
	template <typename T = bool> T IsValidCamera(uintptr_t testCamera) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x487B85C))(this, testCamera);
	}
	template <typename T = bool> T ValidatePreviousSnapshot() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487B408))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T AllValidCameras() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x4879F6C))(this);
	}
	template <typename T = void> T CreateSnapshot() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x48798E4))(this);
	}
	template <typename T = void> T RevertToSnapshot() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x4879368))(this);
	}
	template <typename T = void> T FixCameraReferences() {
		return ((T (*)(USTimelineObserver*))(Il2CppBase() + 0x487BA70))(this);
	}
	template <typename T = bool> T AllValidCamerasm__15(uintptr_t camera) {
		return ((T (*)(USTimelineObserver*, uintptr_t))(Il2CppBase() + 0x487BE10))(this, camera);
	}

};

}
