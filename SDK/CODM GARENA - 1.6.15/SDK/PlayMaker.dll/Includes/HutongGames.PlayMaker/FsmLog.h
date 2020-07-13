#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmLog"));
	}

	template <typename T = int32_t> static T& MaxSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& Logs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& logEntryPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& nextLogEntryPoolIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& entries() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> static T& LoggingEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& MirrorDebugLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11);
	}
	template <typename T = bool> static T& EnableDebugFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12);
	}
	template <typename T = uintptr_t> T& Fsm() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> static T get_LoggingEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EE9C70))(0);
	}
	template <typename T = void> static T set_LoggingEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F0D3C4))(0, value);
	}
	template <typename T = bool> static T get_MirrorDebugLog() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0D480))(0);
	}
	template <typename T = void> static T set_MirrorDebugLog(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F0D530))(0, value);
	}
	template <typename T = bool> static T get_EnableDebugFlow() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0D5E4))(0);
	}
	template <typename T = void> static T set_EnableDebugFlow(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2F0D694))(0, value);
	}
	template <typename T = uintptr_t> T get_Fsm() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2F0D748))(this);
	}
	template <typename T = void> T set_Fsm(uintptr_t value) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2F0D750))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Entries() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2F0D758))(this);
	}
	template <typename T = uintptr_t> static T GetLog(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEE1BC))(0, fsm);
	}
	template <typename T = void> static T ClearLogs() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F0D814))(0);
	}
	template <typename T = void> T AddEntry(uintptr_t entry, bool sendToUnityLog) {
		return ((T (*)(FsmLog*, uintptr_t, bool))(Il2CppBase() + 0x2F0DA78))(this, entry, sendToUnityLog);
	}
	template <typename T = bool> static T IsCollisionEvent(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0E018))(0, fsmEvent);
	}
	template <typename T = bool> static T IsTriggerEvent(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0E180))(0, fsmEvent);
	}
	template <typename T = bool> static T IsCollision2DEvent(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0E2B4))(0, fsmEvent);
	}
	template <typename T = bool> static T IsTrigger2DEvent(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F0E3E8))(0, fsmEvent);
	}
	template <typename T = uintptr_t> T NewFsmLogEntry(uintptr_t logType) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2F0EB6C))(this, logType);
	}
	template <typename T = void> T RemoveEntry(uintptr_t entry) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2F0ED80))(this, entry);
	}
	template <typename T = void> T LogEvent(uintptr_t fsmEvent, uintptr_t state) {
		return ((T (*)(FsmLog*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EF9790))(this, fsmEvent, state);
	}
	template <typename T = void> T LogSendEvent(uintptr_t state, uintptr_t fsmEvent, uintptr_t eventTarget) {
		return ((T (*)(FsmLog*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EF9D70))(this, state, fsmEvent, eventTarget);
	}
	template <typename T = void> T LogExitState(uintptr_t state) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2EFBEA8))(this, state);
	}
	template <typename T = void> T LogEnterState(uintptr_t state) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2EFB854))(this, state);
	}
	template <typename T = void> T LogTransition(uintptr_t fromState, uintptr_t transition) {
		return ((T (*)(FsmLog*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EFB5F0))(this, fromState, transition);
	}
	template <typename T = void> T LogBreak() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2F01FC8))(this);
	}
	template <typename T = void> T LogAction(uintptr_t logType, Il2CppString* text, bool sendToUnityLog) {
		return ((T (*)(FsmLog*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2EE9DD0))(this, logType, text, sendToUnityLog);
	}
	template <typename T = void> T Log(uintptr_t logType, Il2CppString* text) {
		return ((T (*)(FsmLog*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F0EEE0))(this, logType, text);
	}
	template <typename T = void> T LogStart(uintptr_t startState) {
		return ((T (*)(FsmLog*, uintptr_t))(Il2CppBase() + 0x2EF7DA8))(this, startState);
	}
	template <typename T = void> T LogStop() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2EF8DFC))(this);
	}
	template <typename T = void> T Log_1(Il2CppString* text) {
		return ((T (*)(FsmLog*, Il2CppString*))(Il2CppBase() + 0x2F0EFC0))(this, text);
	}
	template <typename T = void> T LogWarning(Il2CppString* text) {
		return ((T (*)(FsmLog*, Il2CppString*))(Il2CppBase() + 0x2F0EFCC))(this, text);
	}
	template <typename T = void> T LogError(Il2CppString* text) {
		return ((T (*)(FsmLog*, Il2CppString*))(Il2CppBase() + 0x2EFB9C8))(this, text);
	}
	template <typename T = Il2CppString*> T FormatUnityLogString(Il2CppString* text) {
		return ((T (*)(FsmLog*, Il2CppString*))(Il2CppBase() + 0x2F0E890))(this, text);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2F0D9EC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FsmLog*))(Il2CppBase() + 0x2F02558))(this);
	}

};

}
