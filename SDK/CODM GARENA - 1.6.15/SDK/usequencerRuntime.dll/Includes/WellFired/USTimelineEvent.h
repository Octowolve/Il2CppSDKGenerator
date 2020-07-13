#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineEvent"));
	}

	template <typename T = float> T& elapsedTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_EventCount() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x4875B00))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Events() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x4870294))(this);
	}
	template <typename T = uintptr_t> T Event(int32_t index) {
		return ((T (*)(USTimelineEvent*, int32_t))(Il2CppBase() + 0x4875B30))(this, index);
	}
	template <typename T = void> T StopTimeline() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x4875D90))(this);
	}
	template <typename T = void> T PauseTimeline() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x4876194))(this);
	}
	template <typename T = void> T ResumeTimeline() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x4876204))(this);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USTimelineEvent*, float))(Il2CppBase() + 0x48762E0))(this, time);
	}
	template <typename T = void> T Process(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineEvent*, float, float))(Il2CppBase() + 0x487684C))(this, sequencerTime, playbackRate);
	}
	template <typename T = void> T FireEvent(uintptr_t baseEvent, float prevElapsedTime, float elapsedTime) {
		return ((T (*)(USTimelineEvent*, uintptr_t, float, float))(Il2CppBase() + 0x4876AD4))(this, baseEvent, prevElapsedTime, elapsedTime);
	}
	template <typename T = void> T FireEventReverse(uintptr_t baseEvent, float prevElapsedTime, float elapsedTime) {
		return ((T (*)(USTimelineEvent*, uintptr_t, float, float))(Il2CppBase() + 0x4876C04))(this, baseEvent, prevElapsedTime, elapsedTime);
	}
	template <typename T = void> T FireEventCommon(uintptr_t baseEvent, float sequencerTime, float prevElapsedTime, float elapsedTime) {
		return ((T (*)(USTimelineEvent*, uintptr_t, float, float, float))(Il2CppBase() + 0x4876C08))(this, baseEvent, sequencerTime, prevElapsedTime, elapsedTime);
	}
	template <typename T = void> T ManuallySetTime(float sequencerTime) {
		return ((T (*)(USTimelineEvent*, float))(Il2CppBase() + 0x4876E74))(this, sequencerTime);
	}
	template <typename T = void> T AddNewEvent(uintptr_t sequencerEvent) {
		return ((T (*)(USTimelineEvent*, uintptr_t))(Il2CppBase() + 0x4877360))(this, sequencerEvent);
	}
	template <typename T = void> T RemoveAndDestroyEvent(uintptr_t sequencerEvent) {
		return ((T (*)(USTimelineEvent*, uintptr_t))(Il2CppBase() + 0x4877478))(this, sequencerEvent);
	}
	template <typename T = void> T SortEvents() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x48773BC))(this);
	}
	template <typename T = void> T ResetCachedData() {
		return ((T (*)(USTimelineEvent*))(Il2CppBase() + 0x48775D0))(this);
	}
	template <typename T = int32_t> static T Processm__13(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x48775E0))(0, a, b);
	}
	template <typename T = int32_t> static T Processm__14(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x487762C))(0, a, b);
	}

};

}
