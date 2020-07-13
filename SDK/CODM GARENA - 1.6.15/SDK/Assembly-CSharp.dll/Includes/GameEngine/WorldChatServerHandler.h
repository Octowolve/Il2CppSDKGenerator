#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WorldChatServerHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WorldChatServerHandler"));
	}

	template <typename T = uintptr_t> T& m_Status() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_NetworkStatus() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& CONNECT_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PING_FAIL_COUNT_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PING_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PING_WAITTING_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_HasPing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_PingFailCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_PingSendTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LastPingTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_LastConnectionFailedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_NextConnectionTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_ConnectionFailedCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ApolloConnector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ticket() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_toConnectTicket() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RequestListWaitingForSend() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& giveUpReconnect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& LOGPREFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWaitingRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCreateConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DoCreateConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNetworkConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPenddingPkgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreateConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHeartBeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPingPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPingPkgFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPingTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPingFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPingError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0___OnNetworkError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportErrorToZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTicketHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectorHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = bool> T get_GiveUpReconnect() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C58EC))(this);
	}
	template <typename T = void> T set_GiveUpReconnect(bool value) {
		return ((T (*)(WorldChatServerHandler*, bool))(Il2CppBase() + 0x33C58F4))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C58FC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C59E4))(this);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C5A88))(this);
	}
	template <typename T = uintptr_t> T GetNetworkStatus() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C5FB8))(this);
	}
	template <typename T = bool> T ProcessWaitingRequests(uintptr_t resp) {
		return ((T (*)(WorldChatServerHandler*, uintptr_t))(Il2CppBase() + 0x33C6058))(this, resp);
	}
	template <typename T = bool> T DoCreateConnection(Il2CppString* domain, Il2CppString* ip, Il2CppString* port, Il2CppString* secret) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33C6100))(this, domain, ip, port, secret);
	}
	template <typename T = bool> T CreateConnection(Il2CppString* domain, Il2CppString* ip, Il2CppString* port, Il2CppString* secret) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x33C6984))(this, domain, ip, port, secret);
	}
	template <typename T = bool> T DoCreateConnection_1() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C6550))(this);
	}
	template <typename T = bool> T IsNetworkConnected() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C5C78))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WorldChatServerHandler*, float))(Il2CppBase() + 0x33C701C))(this, DeltaTime);
	}
	template <typename T = bool> T SendPenddingPkgs() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C7450))(this);
	}
	template <typename T = bool> T SendToServer(uintptr_t request) {
		return ((T (*)(WorldChatServerHandler*, uintptr_t))(Il2CppBase() + 0x33C77DC))(this, request);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C7E3C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(WorldChatServerHandler*, bool))(Il2CppBase() + 0x33C81CC))(this, pause);
	}
	template <typename T = void> T CheckCreateConnection() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C7224))(this);
	}
	template <typename T = void> T CheckHeartBeat() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C70E4))(this);
	}
	template <typename T = bool> T SendPingPkg(bool force) {
		return ((T (*)(WorldChatServerHandler*, bool))(Il2CppBase() + 0x33C8570))(this, force);
	}
	template <typename T = void> T OnPingPkgFinish(bool isSuccess) {
		return ((T (*)(WorldChatServerHandler*, bool))(Il2CppBase() + 0x33C8F10))(this, isSuccess);
	}
	template <typename T = void> T OnPingTimeout() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C8898))(this);
	}
	template <typename T = void> T OnPingFailed() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C8FD0))(this);
	}
	template <typename T = void> T OnPingError() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C9180))(this);
	}
	template <typename T = void> T __OnNetworkError() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C9374))(this);
	}
	template <typename T = bool> T Send(uintptr_t pbPackage, uint64_t mode_route_id) {
		return ((T (*)(WorldChatServerHandler*, uintptr_t, uint64_t))(Il2CppBase() + 0x33C898C))(this, pbPackage, mode_route_id);
	}
	template <typename T = void> T ReConnect() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C9594))(this);
	}
	template <typename T = void> T OnChatSrvConnect(bool isSucc, bool isReconnect) {
		return ((T (*)(WorldChatServerHandler*, bool, bool))(Il2CppBase() + 0x33C9D34))(this, isSucc, isReconnect);
	}
	template <typename T = void> T OnChatSrvDisconnect(Il2CppString* reason) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*))(Il2CppBase() + 0x33CA284))(this, reason);
	}
	template <typename T = void> T ReportErrorToZone(Il2CppString* errMsg) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*))(Il2CppBase() + 0x33C9748))(this, errMsg);
	}
	template <typename T = void> T OnSendFailed(Il2CppString* errMsg) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*))(Il2CppBase() + 0x33C7CE0))(this, errMsg);
	}
	template <typename T = void> T OnRecvFailed(Il2CppString* errMsg) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*))(Il2CppBase() + 0x33CA374))(this, errMsg);
	}
	template <typename T = void> T OnReconnectFailed() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C9B7C))(this);
	}
	template <typename T = void> T Log(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(WorldChatServerHandler*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x33C5E08))(this, msg, paras);
	}
	template <typename T = Il2CppString*> T GetTicketHashCode() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C5D30))(this);
	}
	template <typename T = Il2CppString*> T GetConnectorHashCode() {
		return ((T (*)(WorldChatServerHandler*))(Il2CppBase() + 0x33C80D0))(this);
	}

};

}
