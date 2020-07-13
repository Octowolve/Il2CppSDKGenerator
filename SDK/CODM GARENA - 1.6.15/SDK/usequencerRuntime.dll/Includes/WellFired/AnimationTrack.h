#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AnimationTrack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "AnimationTrack"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& trackClipList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_Layer() {
		return ((T (*)(AnimationTrack*))(Il2CppBase() + 0x48542DC))(this);
	}
	template <typename T = void> T set_Layer(int32_t value) {
		return ((T (*)(AnimationTrack*, int32_t))(Il2CppBase() + 0x48542E4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TrackClips() {
		return ((T (*)(AnimationTrack*))(Il2CppBase() + 0x48542EC))(this);
	}
	template <typename T = void> T set_TrackClips(Il2CppList<uintptr_t>* value) {
		return ((T (*)(AnimationTrack*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x48542F4))(this, value);
	}
	template <typename T = void> T AddClip(uintptr_t clipData) {
		return ((T (*)(AnimationTrack*, uintptr_t))(Il2CppBase() + 0x48542FC))(this, clipData);
	}
	template <typename T = void> T RemoveClip(uintptr_t clipData) {
		return ((T (*)(AnimationTrack*, uintptr_t))(Il2CppBase() + 0x4854424))(this, clipData);
	}
	template <typename T = void> T SortClips() {
		return ((T (*)(AnimationTrack*))(Il2CppBase() + 0x485454C))(this);
	}
	template <typename T = void> T SetClipData(Il2CppList<uintptr_t>* animationClipData) {
		return ((T (*)(AnimationTrack*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4854694))(this, animationClipData);
	}
	template <typename T = float> static T SortClipsm__0(uintptr_t trackClip) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485469C))(0, trackClip);
	}

};

}
