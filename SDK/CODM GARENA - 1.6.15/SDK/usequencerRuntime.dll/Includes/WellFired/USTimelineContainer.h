#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USTimelineContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USTimelineContainer"));
	}

	template <typename T = uintptr_t> T& affectedObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& affectedObjectPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& timelines() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> static T Comparer(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x48751F8))(0, a, b);
	}
	template <typename T = uintptr_t> T get_AffectedObject() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x485D298))(this);
	}
	template <typename T = void> T set_AffectedObject(uintptr_t value) {
		return ((T (*)(USTimelineContainer*, uintptr_t))(Il2CppBase() + 0x48709B8))(this, value);
	}
	template <typename T = uintptr_t> T get_Sequence() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x4875008))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Timelines() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x486D61C))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x4870AA8))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(USTimelineContainer*, int32_t))(Il2CppBase() + 0x486E4A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_AffectedObjectPath() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x4875390))(this);
	}
	template <typename T = void> T set_AffectedObjectPath(Il2CppString* value) {
		return ((T (*)(USTimelineContainer*, Il2CppString*))(Il2CppBase() + 0x4875398))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x48753A0))(this);
	}
	template <typename T = void> T AddNewTimeline(uintptr_t timeline) {
		return ((T (*)(USTimelineContainer*, uintptr_t))(Il2CppBase() + 0x4875AAC))(this, timeline);
	}
	template <typename T = void> T ProcessTimelines(float sequencerTime, float playbackRate) {
		return ((T (*)(USTimelineContainer*, float, float))(Il2CppBase() + 0x486FA90))(this, sequencerTime, playbackRate);
	}
	template <typename T = void> T SkipTimelineTo(float sequencerTime) {
		return ((T (*)(USTimelineContainer*, float))(Il2CppBase() + 0x48712E4))(this, sequencerTime);
	}
	template <typename T = void> T ManuallySetTime(float sequencerTime) {
		return ((T (*)(USTimelineContainer*, float))(Il2CppBase() + 0x486FA10))(this, sequencerTime);
	}
	template <typename T = void> T RenameTimelineContainer() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x4875244))(this);
	}
	template <typename T = void> T ResetCachedData() {
		return ((T (*)(USTimelineContainer*))(Il2CppBase() + 0x48714B8))(this);
	}

};

}
