#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AnimationTimelineController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "AnimationTimelineController"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& animationTimeline() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(AnimationTimelineController*))(Il2CppBase() + 0x4854074))(this);
	}
	template <typename T = uintptr_t> T get_AnimationTimeline() {
		return ((T (*)(AnimationTimelineController*))(Il2CppBase() + 0x485415C))(this);
	}
	template <typename T = void> T set_AnimationTimeline(uintptr_t value) {
		return ((T (*)(AnimationTimelineController*, uintptr_t))(Il2CppBase() + 0x4854164))(this, value);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(AnimationTimelineController*))(Il2CppBase() + 0x485416C))(this);
	}

};

}
