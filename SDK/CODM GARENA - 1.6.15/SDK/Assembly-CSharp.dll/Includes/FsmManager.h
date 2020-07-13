#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FsmManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FsmManager"));
	}

	template <typename T = uintptr_t> T& gameLogicFSM() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& dialogFSM() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& tutorialFSM() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sceneFsmMgr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayMakerFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSceneFsmManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeGameLogicFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGameFsmEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendTutorialFsmEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendDialogFsmEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSceneFsmEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFsmEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTutorialFsmValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFsmValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSceneFsmRunningSubFSM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_gameLogicFSM() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x3881DCC))(this);
	}
	template <typename T = void> T set_gameLogicFSM(uintptr_t value) {
		return ((T (*)(FsmManager*, uintptr_t))(Il2CppBase() + 0x3881DD4))(this, value);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x3881DDC))(this);
	}
	template <typename T = void> T OnEndMatch() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x38823F4))(this);
	}
	template <typename T = void> T InitPlayMakerFSM() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x3881EB0))(this);
	}
	template <typename T = void> T InitSceneFsmManager() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x3882204))(this);
	}
	template <typename T = void> T ChangeGameLogicFSM(uintptr_t newFSM) {
		return ((T (*)(FsmManager*, uintptr_t))(Il2CppBase() + 0x38824B8))(this, newFSM);
	}
	template <typename T = void> T SendGameFsmEvent(Il2CppString* eventName, Il2CppString* currentState) {
		return ((T (*)(FsmManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3882324))(this, eventName, currentState);
	}
	template <typename T = void> T SendTutorialFsmEvent(Il2CppString* eventName, Il2CppString* currentState) {
		return ((T (*)(FsmManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3882754))(this, eventName, currentState);
	}
	template <typename T = void> T SendDialogFsmEvent(Il2CppString* eventName) {
		return ((T (*)(FsmManager*, Il2CppString*))(Il2CppBase() + 0x3882824))(this, eventName);
	}
	template <typename T = void> T SendSceneFsmEvent(Il2CppString* fsmName, Il2CppString* eventName) {
		return ((T (*)(FsmManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3882998))(this, fsmName, eventName);
	}
	template <typename T = void> T SendFsmEvent(uintptr_t fsm, Il2CppString* eventName, Il2CppString* currentState) {
		return ((T (*)(FsmManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3882560))(this, fsm, eventName, currentState);
	}
	template <typename T = void> T ChangeTutorialFsmValue(Il2CppString* valueName, bool value) {
		return ((T (*)(FsmManager*, Il2CppString*, bool))(Il2CppBase() + 0x3882DE8))(this, valueName, value);
	}
	template <typename T = void> T ChangeFsmValue(uintptr_t fsm, Il2CppString* valueName, bool value) {
		return ((T (*)(FsmManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x3882F0C))(this, fsm, valueName, value);
	}
	template <typename T = void> T AddSceneFsmRunningSubFSM(uintptr_t fsm) {
		return ((T (*)(FsmManager*, uintptr_t))(Il2CppBase() + 0x38830C0))(this, fsm);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x38831E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEndMatch() {
		return ((T (*)(FsmManager*))(Il2CppBase() + 0x38831E8))(this);
	}

};

}
