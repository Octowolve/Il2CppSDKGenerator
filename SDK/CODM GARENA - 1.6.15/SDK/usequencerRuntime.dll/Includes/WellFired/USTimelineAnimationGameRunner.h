#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineAnimationGameRunner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineAnimationGameRunner"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& animationTimeline() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allClips() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& notRunningClips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& runningClips() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& finishedClips() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& newProcessingClips() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(USTimelineAnimationGameRunner*))(Il2CppBase() + 0x4873A34))(this);
	}
	template <typename T = void> T set_Animator(uintptr_t value) {
		return ((T (*)(USTimelineAnimationGameRunner*, uintptr_t))(Il2CppBase() + 0x4871CC4))(this, value);
	}
	template <typename T = uintptr_t> T get_AnimationTimeline() {
		return ((T (*)(USTimelineAnimationGameRunner*))(Il2CppBase() + 0x4873A3C))(this);
	}
	template <typename T = void> T set_AnimationTimeline(uintptr_t value) {
		return ((T (*)(USTimelineAnimationGameRunner*, uintptr_t))(Il2CppBase() + 0x4871CCC))(this, value);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(USTimelineAnimationGameRunner*))(Il2CppBase() + 0x48726F0))(this);
	}
	template <typename T = void> T Process(float sequenceTime, float playbackRate) {
		return ((T (*)(USTimelineAnimationGameRunner*, float, float))(Il2CppBase() + 0x4872EEC))(this, sequenceTime, playbackRate);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineAnimationGameRunner*))(Il2CppBase() + 0x4873560))(this);
	}
	template <typename T = void> T SortNewProcessingClips(float sequenceTime) {
		return ((T (*)(USTimelineAnimationGameRunner*, float))(Il2CppBase() + 0x4873C94))(this, sequenceTime);
	}
	template <typename T = void> T SortClipsAtTime(float sequenceTime, void* sortInto, uintptr_t stateCheck) {
		return ((T (*)(USTimelineAnimationGameRunner*, float, void*, uintptr_t))(Il2CppBase() + 0x4873A44))(this, sequenceTime, sortInto, stateCheck);
	}
	template <typename T = void> T PlayClip(uintptr_t clipToPlay, int32_t layer, float sequenceTime) {
		return ((T (*)(USTimelineAnimationGameRunner*, uintptr_t, int32_t, float))(Il2CppBase() + 0x4874C48))(this, clipToPlay, layer, sequenceTime);
	}
	template <typename T = void> T SanityCheckClipData() {
		return ((T (*)(USTimelineAnimationGameRunner*))(Il2CppBase() + 0x4874350))(this);
	}
	template <typename T = float> static T SortNewProcessingClipsm__D(uintptr_t processingClip) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4874DAC))(0, processingClip);
	}
	template <typename T = void*> static T SanityCheckClipDatam__E(uintptr_t animationTrack) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4874DCC))(0, animationTrack);
	}

};

}
