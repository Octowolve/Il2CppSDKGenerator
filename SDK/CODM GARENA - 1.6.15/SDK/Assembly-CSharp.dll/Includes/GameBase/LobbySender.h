#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LobbySender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LobbySender"));
	}

	template <typename T = uintptr_t> T& m_ProtocalHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToWorldChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZoneLogined() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIMSDKError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKingError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRouteChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestLobbyQuitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeChatTokenRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvDisconnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvSendFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvRecvFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChatSrvReportErrorToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = bool> T SendToZone(uintptr_t pbPackage) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x1964458))(this, pbPackage);
	}
	template <typename T = bool> T SendToWorldChat(uintptr_t pbPackage) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A2B6C))(this, pbPackage);
	}
	template <typename T = bool> T IsZoneLogined() {
		return ((T (*)(LobbySender*))(Il2CppBase() + 0x19A2C70))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LobbySender*))(Il2CppBase() + 0x19A2D54))(this);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A334C))(this, msg);
	}
	template <typename T = void> T RegisterProtocolHandler(uint32_t commandId, void* handler) {
		return ((T (*)(LobbySender*, uint32_t, void*))(Il2CppBase() + 0x19A3268))(this, commandId, handler);
	}
	template <typename T = void> T UnRegisterProtocolHandler(uint32_t commandId) {
		return ((T (*)(LobbySender*, uint32_t))(Il2CppBase() + 0x19A3414))(this, commandId);
	}
	template <typename T = void> T OnConnect(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A34DC))(this, msg);
	}
	template <typename T = void> T OnReConnect(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A35CC))(this, msg);
	}
	template <typename T = void> T OnDisConnect(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A36BC))(this, msg);
	}
	template <typename T = void> T OnError(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A37AC))(this, msg);
	}
	template <typename T = void> T OnIMSDKError(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A389C))(this, msg);
	}
	template <typename T = void> T OnKingError(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A398C))(this, msg);
	}
	template <typename T = void> T OnRouteChanged(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A3A7C))(this, msg);
	}
	template <typename T = void> T OnRequestLobbyQuitMatch(uintptr_t msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A3B1C))(this, msg);
	}
	template <typename T = void> T OnWeChatTokenRefresh(uintptr_t _) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A3C6C))(this, _);
	}
	template <typename T = void> T OnChatSrvConnect(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A3EB8))(this, Msg);
	}
	template <typename T = void> T OnChatSrvDisconnected(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A407C))(this, Msg);
	}
	template <typename T = void> T OnChatSrvSendFailed(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A421C))(this, Msg);
	}
	template <typename T = void> T OnChatSrvRecvFailed(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A4320))(this, Msg);
	}
	template <typename T = void> T OnChatSrvReconnect(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A4424))(this, Msg);
	}
	template <typename T = void> T ChatSrvReportErrorToZone(uintptr_t Msg) {
		return ((T (*)(LobbySender*, uintptr_t))(Il2CppBase() + 0x19A45E8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbySender*))(Il2CppBase() + 0x19A4B28))(this);
	}

};

}
