#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USRuntimeUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USRuntimeUtility"));
	}


	template <typename T = bool> static T CanPlaySequence(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4858AB4))(0, sequence);
	}
	template <typename T = bool> static T CanPauseSequence(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48577D4))(0, sequence);
	}
	template <typename T = bool> static T CanStopSequence(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485C604))(0, sequence);
	}
	template <typename T = bool> static T CanSkipSequence(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x485AF14))(0, sequence);
	}
	template <typename T = bool> static T IsObserverTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D3DC))(0, transform);
	}
	template <typename T = bool> static T IsObserverContainer(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D4B8))(0, transform);
	}
	template <typename T = bool> static T IsTimelineContainer(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D6B0))(0, transform);
	}
	template <typename T = bool> static T IsTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D78C))(0, transform);
	}
	template <typename T = bool> static T IsEventTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D868))(0, transform);
	}
	template <typename T = bool> static T IsPropertyTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486D944))(0, transform);
	}
	template <typename T = bool> static T IsEvent(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486DA20))(0, transform);
	}
	template <typename T = int32_t> static T GetNumberOfTimelinesOfType(uintptr_t type, uintptr_t timelineContainer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x486DAFC))(0, type, timelineContainer);
	}
	template <typename T = bool> static T HasPropertyTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486DB48))(0, transform);
	}
	template <typename T = bool> static T HasObserverTimeline(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486DC50))(0, transform);
	}
	template <typename T = bool> static T HasTimelineContainerWithAffectedObject(uintptr_t sequence, uintptr_t affectedObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x486DD5C))(0, sequence, affectedObject);
	}
	template <typename T = void> static T CreateAndAttachObserver(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486DF20))(0, sequence);
	}
	template <typename T = void> static T StartRecordingSequence(uintptr_t sequence, Il2CppString* capturePath, int32_t captureFramerate, int32_t upScaleAmount) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x486E4A8))(0, sequence, capturePath, captureFramerate, upScaleAmount);
	}
	template <typename T = void> static T StopRecordingSequence() {
		return ((T (*)(void *))(Il2CppBase() + 0x486E6EC))(0);
	}
	template <typename T = uintptr_t> static T GetOrSpawnRecorder() {
		return ((T (*)(void *))(Il2CppBase() + 0x486E504))(0);
	}
	template <typename T = float> static T FindNextKeyframeTime(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486E804))(0, sequence);
	}
	template <typename T = Il2CppString*> static T ConvertToSerializableName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4862138))(0, value);
	}
	template <typename T = float> static T FindPrevKeyframeTime(uintptr_t sequence) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x486EE74))(0, sequence);
	}

};

}
