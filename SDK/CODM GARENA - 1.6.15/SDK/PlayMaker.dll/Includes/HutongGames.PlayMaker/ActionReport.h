#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class ActionReport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "ActionReport"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& ActionReportList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InfoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ErrorCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& actionIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& logText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isError() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& parameter() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> static T Start() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEA9C8))(0);
	}
	template <typename T = uintptr_t> static T Log(uintptr_t fsm, uintptr_t state, uintptr_t action, int32_t actionIndex, Il2CppString* parameter, Il2CppString* logLine, bool isError) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2ED99F8))(0, fsm, state, action, actionIndex, parameter, logLine, isError);
	}
	template <typename T = bool> static T ActionReportContains(uintptr_t report) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEAAD4))(0, report);
	}
	template <typename T = bool> T SameAs(uintptr_t actionReport) {
		return ((T (*)(ActionReport*, uintptr_t))(Il2CppBase() + 0x2EEACF8))(this, actionReport);
	}
	template <typename T = void> static T LogWarning(uintptr_t fsm, uintptr_t state, uintptr_t action, int32_t actionIndex, Il2CppString* parameter, Il2CppString* logLine) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2EEAE84))(0, fsm, state, action, actionIndex, parameter, logLine);
	}
	template <typename T = void> static T LogError(uintptr_t fsm, uintptr_t state, uintptr_t action, int32_t actionIndex, Il2CppString* parameter, Il2CppString* logLine) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2ED9854))(0, fsm, state, action, actionIndex, parameter, logLine);
	}
	template <typename T = void> static T LogError_1(uintptr_t fsm, uintptr_t state, uintptr_t action, int32_t actionIndex, Il2CppString* logLine) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x2EEB1B0))(0, fsm, state, action, actionIndex, logLine);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEB360))(0);
	}
	template <typename T = void> static T Remove(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EEB444))(0, fsm);
	}
	template <typename T = int32_t> static T GetCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EEB5C8))(0);
	}

};

}
