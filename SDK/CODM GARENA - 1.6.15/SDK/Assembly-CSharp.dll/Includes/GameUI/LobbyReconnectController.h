#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LobbyReconnectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LobbyReconnectController"));
	}

	template <typename T = int32_t> static T& LOBBY_RECONNECT_LOADING_CONTEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ReconnectReason() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ReconnectBoxAction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ReconnectTimes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_ReconnectTimesMax() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_BoxTimes() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_BoxTimesMax() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_AfterZoneReconnectFlow() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectInMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSilent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReconnectLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReconnectBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReconnectTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectBoxCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReconnectAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndHandelReconnectTooManyTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInMatchGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAfterZoneReconnectFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAfterZoneReconnectFlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimoutTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFlowsStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMainFlowsFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F6F760))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F6FEEC))(this);
	}
	template <typename T = void> T OnZoneConnected(uintptr_t msg) {
		return ((T (*)(LobbyReconnectController*, uintptr_t))(Il2CppBase() + 0x1F6FFBC))(this, msg);
	}
	template <typename T = void> T OnZoneError(uintptr_t msg) {
		return ((T (*)(LobbyReconnectController*, uintptr_t))(Il2CppBase() + 0x1F705C4))(this, msg);
	}
	template <typename T = void> T ReconnectInMatch(float interval, uintptr_t error, uintptr_t action) {
		return ((T (*)(LobbyReconnectController*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F70F64))(this, interval, error, action);
	}
	template <typename T = bool> T IsSilent() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F711A0))(this);
	}
	template <typename T = void> T ShowReconnectLoading(bool show) {
		return ((T (*)(LobbyReconnectController*, bool))(Il2CppBase() + 0x1F712C0))(this, show);
	}
	template <typename T = void> T ShowReconnectBox(uintptr_t reconnectActtion, uintptr_t callback, Il2CppString* content) {
		return ((T (*)(LobbyReconnectController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1F710B4))(this, reconnectActtion, callback, content);
	}
	template <typename T = void> T ShowReconnectTips(Il2CppString* tips) {
		return ((T (*)(LobbyReconnectController*, Il2CppString*))(Il2CppBase() + 0x1F71488))(this, tips);
	}
	template <typename T = void> T ReconnectBoxCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(LobbyReconnectController*, uintptr_t, int32_t))(Il2CppBase() + 0x1F7154C))(this, result, userContext);
	}
	template <typename T = uintptr_t> T GetReconnectAction(uintptr_t error) {
		return ((T (*)(LobbyReconnectController*, uintptr_t))(Il2CppBase() + 0x1F70A80))(this, error);
	}
	template <typename T = void> T DoReconnect() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F6FAE0))(this);
	}
	template <typename T = bool> T CheckAndHandelReconnectTooManyTimes() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F717EC))(this);
	}
	template <typename T = void> T CancelReconnect() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F702AC))(this);
	}
	template <typename T = bool> T IsInMatchGame() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F70E3C))(this);
	}
	template <typename T = bool> T NeedReconnect() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F6F8F0))(this);
	}
	template <typename T = void> T StartAfterZoneReconnectFlow() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F703E0))(this);
	}
	template <typename T = void> T StopAfterZoneReconnectFlow() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F71A38))(this);
	}
	template <typename T = void> T SetTimoutTimer(float time) {
		return ((T (*)(LobbyReconnectController*, float))(Il2CppBase() + 0x1F71920))(this, time);
	}
	template <typename T = void> T OnReconnectTimeout() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F71B24))(this);
	}
	template <typename T = void> T OnFlowStart(uintptr_t controller) {
		return ((T (*)(LobbyReconnectController*, uintptr_t))(Il2CppBase() + 0x1F71CB8))(this, controller);
	}
	template <typename T = void> T OnFlowProcessing(uintptr_t controller, float progress, Il2CppString* tips, bool showprogress) {
		return ((T (*)(LobbyReconnectController*, uintptr_t, float, Il2CppString*, bool))(Il2CppBase() + 0x1F71DF0))(this, controller, progress, tips, showprogress);
	}
	template <typename T = void> T OnFlowFinish(uintptr_t controller, uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LobbyReconnectController*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1F71EB0))(this, controller, result, errorMessage);
	}
	template <typename T = void> T OnFlowsStart() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F71F6C))(this);
	}
	template <typename T = void> T OnAllFlowsFinish() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F72004))(this);
	}
	template <typename T = void> T OnMainFlowsFinish(uintptr_t result, Il2CppString* errorMessage) {
		return ((T (*)(LobbyReconnectController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1F7209C))(this, result, errorMessage);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F72510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LobbyReconnectController*))(Il2CppBase() + 0x1F72518))(this);
	}

};

}
