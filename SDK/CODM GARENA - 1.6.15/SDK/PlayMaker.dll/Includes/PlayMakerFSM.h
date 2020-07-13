#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerFSM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerFSM"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& fsmList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& MaximizeFileCompatibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& ApplicationIsQuitting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& NotMainThread() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& fsmTemplate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& eventHandlerComponentsAdded() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& GuiTexture() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& GuiText() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> static T& DrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7);
	}

	template <typename T = Il2CppString*> static T get_VersionNotes() {
		return ((T (*)(void *))(Il2CppBase() + 0x513C2F0))(0);
	}
	template <typename T = Il2CppString*> static T get_VersionLabel() {
		return ((T (*)(void *))(Il2CppBase() + 0x513C368))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T get_FsmList() {
		return ((T (*)(void *))(Il2CppBase() + 0x513C3E0))(0);
	}
	template <typename T = uintptr_t> static T FindFsmOnGameObject(uintptr_t go, Il2CppString* fsmName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x513C490))(0, go, fsmName);
	}
	template <typename T = uintptr_t> T get_FsmTemplate() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513C7A0))(this);
	}
	template <typename T = uintptr_t> T get_GuiTexture() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513C7A8))(this);
	}
	template <typename T = void> T set_GuiTexture(uintptr_t value) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513C7B0))(this, value);
	}
	template <typename T = uintptr_t> T get_GuiText() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513C7B8))(this);
	}
	template <typename T = void> T set_GuiText(uintptr_t value) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513C7C0))(this, value);
	}
	template <typename T = bool> static T get_DrawGizmos() {
		return ((T (*)(void *))(Il2CppBase() + 0x513C7C8))(0);
	}
	template <typename T = void> static T set_DrawGizmos(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x513C878))(0, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513C92C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513CA00))(this);
	}
	template <typename T = void> T Preprocess() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513D25C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513D094))(this);
	}
	template <typename T = void> T InitTemplate() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513D354))(this);
	}
	template <typename T = void> T InitFsm() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513D49C))(this);
	}
	template <typename T = void> T AddEventHandlerComponents() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513D590))(this);
	}
	template <typename T = void> T AddEventHandlerComponent(uintptr_t hide) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x1E8A5B0))(this, hide);
	}
	template <typename T = void> T SetFsmTemplate(uintptr_t template) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513DD8C))(this, template);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513DEEC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513DFCC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E0CC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E138))(this);
	}
	template <typename T = uintptr_t> T DoCoroutine(uintptr_t routine) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513E194))(this, routine);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E268))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E388))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E488))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513E5AC))(this);
	}
	template <typename T = void> T SetState(Il2CppString* stateName) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x513E5C0))(this, stateName);
	}
	template <typename T = void> T ChangeState(uintptr_t fsmEvent) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513E5EC))(this, fsmEvent);
	}
	template <typename T = void> T ChangeState_1(Il2CppString* eventName) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x513E618))(this, eventName);
	}
	template <typename T = void> T SendEvent(Il2CppString* eventName) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x513E644))(this, eventName);
	}
	template <typename T = void> T SendRemoteFsmEvent(Il2CppString* eventName) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x513E670))(this, eventName);
	}
	template <typename T = void> T SendRemoteFsmEventWithData(Il2CppString* eventName, Il2CppString* eventData) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x513E69C))(this, eventName, eventData);
	}
	template <typename T = void> static T BroadcastEvent(Il2CppString* fsmEventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x513E784))(0, fsmEventName);
	}
	template <typename T = void> static T BroadcastEvent_1(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x513E8C0))(0, fsmEvent);
	}
	template <typename T = void> T OnBecameVisible() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513EB5C))(this);
	}
	template <typename T = void> T OnBecameInvisible() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513EC28))(this);
	}
	template <typename T = void> T OnPlayerConnected(uintptr_t player) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513ECF4))(this, player);
	}
	template <typename T = void> T OnServerInitialized() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513EE24))(this);
	}
	template <typename T = void> T OnConnectedToServer() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513EEF0))(this);
	}
	template <typename T = void> T OnPlayerDisconnected(uintptr_t player) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513EFBC))(this, player);
	}
	template <typename T = void> T OnDisconnectedFromServer(uintptr_t info) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513F0EC))(this, info);
	}
	template <typename T = void> T OnFailedToConnect(uintptr_t error) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513F21C))(this, error);
	}
	template <typename T = void> T OnNetworkInstantiate(uintptr_t info) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x513F34C))(this, info);
	}
	template <typename T = void> T OnSerializeNetworkView(uintptr_t stream, uintptr_t info) {
		return ((T (*)(PlayMakerFSM*, uintptr_t, uintptr_t))(Il2CppBase() + 0x513F4A4))(this, stream, info);
	}
	template <typename T = void> static T NetworkSyncVariables(uintptr_t stream, uintptr_t variables) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x513F5E8))(0, stream, variables);
	}
	template <typename T = void> T OnMasterServerEvent(uintptr_t masterServerEvent) {
		return ((T (*)(PlayMakerFSM*, uintptr_t))(Il2CppBase() + 0x5140280))(this, masterServerEvent);
	}
	template <typename T = uintptr_t> T get_Fsm() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513BA30))(this);
	}
	template <typename T = Il2CppString*> T get_FsmName() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513C774))(this);
	}
	template <typename T = void> T set_FsmName(Il2CppString* value) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x51403B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_FsmDescription() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x51403DC))(this);
	}
	template <typename T = void> T set_FsmDescription(Il2CppString* value) {
		return ((T (*)(PlayMakerFSM*, Il2CppString*))(Il2CppBase() + 0x5140408))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x513BA04))(this);
	}
	template <typename T = Il2CppString*> T get_ActiveStateName() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140434))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FsmStates() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140500))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FsmEvents() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x514052C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_FsmGlobalTransitions() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140558))(this);
	}
	template <typename T = uintptr_t> T get_FsmVariables() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140584))(this);
	}
	template <typename T = bool> T get_UsesTemplate() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x51405B0))(this);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140660))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(PlayMakerFSM*))(Il2CppBase() + 0x5140664))(this);
	}

};

}
