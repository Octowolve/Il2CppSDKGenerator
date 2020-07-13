#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineBase"));
	}

	template <typename T = uintptr_t> T& timelineContainer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ShouldRenderGizmos() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_AffectedObject() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x48705E4))(this);
	}
	template <typename T = uintptr_t> T get_TimelineContainer() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x485D088))(this);
	}
	template <typename T = uintptr_t> T get_Sequence() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x485CF7C))(this);
	}
	template <typename T = bool> T get_ShouldRenderGizmos() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4875118))(this);
	}
	template <typename T = void> T set_ShouldRenderGizmos(bool value) {
		return ((T (*)(USTimelineBase*, bool))(Il2CppBase() + 0x4875120))(this, value);
	}
	template <typename T = void> T StopTimeline() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4875128))(this);
	}
	template <typename T = void> T StartTimeline() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x487512C))(this);
	}
	template <typename T = void> T EndTimeline() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4872858))(this);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4875130))(this);
	}
	template <typename T = void> T ResumeTimeline() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4875134))(this);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USTimelineBase*, float))(Il2CppBase() + 0x4875138))(this, time);
	}
	template <typename T = void> T Process(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineBase*, float, float))(Il2CppBase() + 0x487513C))(this, sequencerTime, playbackRate);
	}
	template <typename T = void> T ManuallySetTime(float sequencerTime) {
		return ((T (*)(USTimelineBase*, float))(Il2CppBase() + 0x4875140))(this, sequencerTime);
	}
	template <typename T = void> T LateBindAffectedObjectInScene(uintptr_t newAffectedObject) {
		return ((T (*)(USTimelineBase*, uintptr_t))(Il2CppBase() + 0x4875144))(this, newAffectedObject);
	}
	template <typename T = Il2CppString*> T GetJson() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x4875148))(this);
	}
	template <typename T = void> T ResetCachedData() {
		return ((T (*)(USTimelineBase*))(Il2CppBase() + 0x48751DC))(this);
	}

};

}
