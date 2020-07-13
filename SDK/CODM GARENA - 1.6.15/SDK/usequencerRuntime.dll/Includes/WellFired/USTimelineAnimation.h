#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineAnimation"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& initialAnimationInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& initialAnimatorStateInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& animationsTracks() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& editorRunner() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& gameRunner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& animationTimelineController() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& sourcePosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppQuaternion> T& sourceOrientation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& sourceSpeed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& previousEnabled() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_AnimationTracks() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x487197C))(this);
	}
	template <typename T = void> T set_AnimationTracks(Il2CppList<uintptr_t>* value) {
		return ((T (*)(USTimelineAnimation*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4871984))(this, value);
	}
	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x487198C))(this);
	}
	template <typename T = uintptr_t> T get_EditorRunner() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4871A8C))(this);
	}
	template <typename T = uintptr_t> T get_GameRunner() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4871BB0))(this);
	}
	template <typename T = void> T StartTimeline() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4871CD4))(this);
	}
	template <typename T = void> T StopTimeline() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x48721F4))(this);
	}
	template <typename T = void> T EndTimeline() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4872824))(this);
	}
	template <typename T = void> T ResetAnimation() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4872410))(this);
	}
	template <typename T = void> T Process(float sequenceTime, float playbackRate) {
		return ((T (*)(USTimelineAnimation*, float, float))(Il2CppBase() + 0x487285C))(this, sequenceTime, playbackRate);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineAnimation*))(Il2CppBase() + 0x4873508))(this);
	}
	template <typename T = void> T AddTrack(uintptr_t animationTrack) {
		return ((T (*)(USTimelineAnimation*, uintptr_t))(Il2CppBase() + 0x4873564))(this, animationTrack);
	}
	template <typename T = void> T RemoveTrack(uintptr_t animationTrack) {
		return ((T (*)(USTimelineAnimation*, uintptr_t))(Il2CppBase() + 0x4873604))(this, animationTrack);
	}
	template <typename T = void> T SetTracks(Il2CppList<uintptr_t>* animationTracks) {
		return ((T (*)(USTimelineAnimation*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x48736A4))(this, animationTracks);
	}

};

}
