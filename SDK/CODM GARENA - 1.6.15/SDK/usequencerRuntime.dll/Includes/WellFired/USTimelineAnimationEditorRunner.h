#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineAnimationEditorRunner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineAnimationEditorRunner"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& cachedRunningClips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& previousTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(USTimelineAnimationEditorRunner*))(Il2CppBase() + 0x4873770))(this);
	}
	template <typename T = void> T set_Animator(uintptr_t value) {
		return ((T (*)(USTimelineAnimationEditorRunner*, uintptr_t))(Il2CppBase() + 0x4871BA0))(this, value);
	}
	template <typename T = uintptr_t> T get_AnimationTimeline() {
		return ((T (*)(USTimelineAnimationEditorRunner*))(Il2CppBase() + 0x4873778))(this);
	}
	template <typename T = void> T set_AnimationTimeline(uintptr_t value) {
		return ((T (*)(USTimelineAnimationEditorRunner*, uintptr_t))(Il2CppBase() + 0x4871BA8))(this, value);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(USTimelineAnimationEditorRunner*))(Il2CppBase() + 0x4872818))(this);
	}
	template <typename T = void> T Process(float sequenceTime, float playbackRate) {
		return ((T (*)(USTimelineAnimationEditorRunner*, float, float))(Il2CppBase() + 0x4872894))(this, sequenceTime, playbackRate);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineAnimationEditorRunner*))(Il2CppBase() + 0x4873530))(this);
	}
	template <typename T = void> T PlayClip(uintptr_t clipToPlay, int32_t layer, float sequenceTime) {
		return ((T (*)(USTimelineAnimationEditorRunner*, uintptr_t, int32_t, float))(Il2CppBase() + 0x4873780))(this, clipToPlay, layer, sequenceTime);
	}
	template <typename T = int32_t> static T Processm__C(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x48738DC))(0, x, y);
	}

};

}
