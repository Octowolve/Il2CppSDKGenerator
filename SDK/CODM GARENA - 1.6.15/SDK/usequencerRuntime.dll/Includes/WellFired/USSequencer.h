#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USSequencer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USSequencer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& observedObjects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& runningTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& playbackRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isLoopingSequence() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isPingPongingSequence() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& updateOnFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& autoplay() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& playing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isFreshPlayback() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = float> T& previousTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& minPlaybackRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& maxPlaybackRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& setSkipTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& timelineContainers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& PlaybackStarted() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& PlaybackStopped() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PlaybackPaused() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& PlaybackFinished() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BeforeUpdate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& AfterUpdate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& OnRunningTimeSet() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& f__am$cache17() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache19() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__am$cache1A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__am$cache1B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache1C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__am$cache1D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_Version() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486F984))(this);
	}
	template <typename T = void> T set_Version(int32_t value) {
		return ((T (*)(USSequencer*, int32_t))(Il2CppBase() + 0x486F98C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ObservedObjects() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486F994))(this);
	}
	template <typename T = float> T get_Duration() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4857CD0))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x486F99C))(this, value);
	}
	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4857654))(this);
	}
	template <typename T = bool> T get_IsLopping() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486F9BC))(this);
	}
	template <typename T = void> T set_IsLopping(bool value) {
		return ((T (*)(USSequencer*, bool))(Il2CppBase() + 0x486F9C4))(this, value);
	}
	template <typename T = bool> T get_IsPingPonging() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486F9CC))(this);
	}
	template <typename T = void> T set_IsPingPonging(bool value) {
		return ((T (*)(USSequencer*, bool))(Il2CppBase() + 0x486F9D4))(this, value);
	}
	template <typename T = bool> T get_IsComplete() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486F9DC))(this);
	}
	template <typename T = void> T set_IsComplete(bool value) {
		return ((T (*)(USSequencer*, bool))(Il2CppBase() + 0x486FA0C))(this, value);
	}
	template <typename T = float> T get_RunningTime() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4857CC8))(this);
	}
	template <typename T = void> T set_RunningTime(float value) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x4857CD8))(this, value);
	}
	template <typename T = float> T get_PlaybackRate() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FA88))(this);
	}
	template <typename T = void> T set_PlaybackRate(float value) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x486FBD0))(this, value);
	}
	template <typename T = float> T get_MinPlaybackRate() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FCA4))(this);
	}
	template <typename T = float> T get_MaxPlaybackRate() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FCAC))(this);
	}
	template <typename T = bool> T get_HasSequenceBeenStarted() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FCB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TimelineContainers() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486DE8C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SortedTimelineContainers() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FCC8))(this);
	}
	template <typename T = int32_t> T get_TimelineContainerCount() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FDAC))(this);
	}
	template <typename T = int32_t> T get_ObservedObjectCount() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FDD0))(this);
	}
	template <typename T = bool> T get_UpdateOnFixedUpdate() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FE68))(this);
	}
	template <typename T = void> T set_UpdateOnFixedUpdate(bool value) {
		return ((T (*)(USSequencer*, bool))(Il2CppBase() + 0x486FE70))(this, value);
	}
	template <typename T = float> static T get_SequenceUpdateRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x486FE78))(0);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FEA4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x486FF2C))(this);
	}
	template <typename T = void> T TogglePlayback() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x48705D0))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4857E60))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4857698))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x485C32C))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x487060C))(this);
	}
	template <typename T = uintptr_t> T CreateNewTimelineContainer(uintptr_t affectedObject) {
		return ((T (*)(USSequencer*, uintptr_t))(Il2CppBase() + 0x48707C4))(this, affectedObject);
	}
	template <typename T = bool> T HasTimelineContainerFor(uintptr_t affectedObject) {
		return ((T (*)(USSequencer*, uintptr_t))(Il2CppBase() + 0x4870AB0))(this, affectedObject);
	}
	template <typename T = uintptr_t> T GetTimelineContainerFor(uintptr_t affectedObject) {
		return ((T (*)(USSequencer*, uintptr_t))(Il2CppBase() + 0x4870BD8))(this, affectedObject);
	}
	template <typename T = void> T DeleteTimelineContainer(uintptr_t timelineContainer) {
		return ((T (*)(USSequencer*, uintptr_t))(Il2CppBase() + 0x4870D08))(this, timelineContainer);
	}
	template <typename T = void> T RemoveObservedObject(uintptr_t observedObject) {
		return ((T (*)(USSequencer*, uintptr_t))(Il2CppBase() + 0x4870DD4))(this, observedObject);
	}
	template <typename T = void> T SkipTimelineTo(float time) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x485AE60))(this, time);
	}
	template <typename T = void> T SetPlaybackRate(float rate) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x4870EAC))(this, rate);
	}
	template <typename T = void> T SetPlaybackTime(float time) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x4870EB0))(this, time);
	}
	template <typename T = void> T UpdateSequencer(float deltaTime) {
		return ((T (*)(USSequencer*, float))(Il2CppBase() + 0x4870EB4))(this, deltaTime);
	}
	template <typename T = uintptr_t> T UpdateSequencerCoroutine() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x487135C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4871408))(this);
	}
	template <typename T = void> T ResetCachedData() {
		return ((T (*)(USSequencer*))(Il2CppBase() + 0x4871450))(this);
	}
	template <typename T = void> static T PlaybackStartedm__5(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4871530))(0, );
	}
	template <typename T = void> static T PlaybackStoppedm__6(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4871534))(0, );
	}
	template <typename T = void> static T PlaybackPausedm__7(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4871538))(0, );
	}
	template <typename T = void> static T PlaybackFinishedm__8(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x487153C))(0, );
	}
	template <typename T = void> static T BeforeUpdatem__9(uintptr_t , float ) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4871540))(0, , );
	}
	template <typename T = void> static T AfterUpdatem__A(uintptr_t , float ) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x4871544))(0, , );
	}
	template <typename T = void> static T OnRunningTimeSetm__B(uintptr_t ) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4871548))(0, );
	}

};

}
