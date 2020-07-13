#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFsmHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameFsmHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetTransitionsToThisState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActionCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetActionCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetActionCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasTransitionToActionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateSubTaskCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubTaskInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMissionInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMatineeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCutScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatineeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasInvalidAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartStateForExport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NameForExport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToStateForExport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AppendFsmParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetTransitionsToThisState(uintptr_t targetState, uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CCD4C))(0, targetState, fsm);
	}
	template <typename T = uintptr_t> static T GetAction(uintptr_t state, uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD070))(0, state, actionType);
	}
	template <typename T = uintptr_t> static T GetAction_1(uintptr_t state, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD1F4))(0, state, type);
	}
	template <typename T = int32_t> static T GetActionCount(uintptr_t state, uintptr_t actionType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD374))(0, state, actionType);
	}
	template <typename T = int32_t> static T GetActionCount_1(uintptr_t state, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD540))(0, state, type);
	}
	template <typename T = int32_t> static T GetActionCount_2(uintptr_t fsm, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD70C))(0, fsm, type);
	}
	template <typename T = bool> static T HasAction(uintptr_t state, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD850))(0, state, type);
	}
	template <typename T = bool> static T HasTransitionToActionType(uintptr_t state, uintptr_t type, uintptr_t stateName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33CD9F4))(0, state, type, stateName);
	}
	template <typename T = Il2CppString*> static T GetNextState(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CDBC8))(0, state);
	}
	template <typename T = int32_t> static T CalculateSubTaskCount(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CDDA0))(0, action);
	}
	template <typename T = void> static T Refresh(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CDFFC))(0, fsm);
	}
	template <typename T = void> static T RefreshSubTaskInfo(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CE0B0))(0, fsm);
	}
	template <typename T = void> static T RefreshMissionInfo(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CE294))(0, fsm);
	}
	template <typename T = void> static T RefreshMatineeDuration(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CE4D4))(0, fsm);
	}
	template <typename T = bool> static T IsCutScene(Il2CppString* matineeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33CE864))(0, matineeName);
	}
	template <typename T = float> static T GetMatineeDuration(Il2CppString* matineeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x33CE6B8))(0, matineeName);
	}
	template <typename T = bool> static T HasInvalidAction(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CEA14))(0, state);
	}
	template <typename T = Il2CppString*> static T StartStateForExport(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CEB78))(0, fsm);
	}
	template <typename T = Il2CppString*> static T NameForExport(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CEC70))(0, state);
	}
	template <typename T = Il2CppString*> static T ToStateForExport(uintptr_t transition) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33CED68))(0, transition);
	}
	template <typename T = Il2CppString*> static T AppendFsmParameter(Il2CppString* str, Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33CEE60))(0, str, key, value);
	}

};

}
