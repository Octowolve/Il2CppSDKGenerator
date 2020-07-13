#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class ZoneServerHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "ZoneServerHandler"));
	}

	template <typename T = int32_t> static T& HEARTBEAT_CMD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LOBBY_GET_PROFILE_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LOBBY_LOGIN_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& ACCOUNT_REGISTER_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& DEVICE_WHITELIST_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& ACCOUNT_RECOVER_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> T& RESEND_MAX_COUNT() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SEND_TIMEOUT() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PING_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PING_FAIL_COUNT_MAX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_LastSendTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PingFailCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_HasPing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_NetWorkConnectionStage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_LastSendDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& SEND_DURATION_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsZoneLogined() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ApolloConnector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RequestListWaitingForSend() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RequestListWaitingForResponse() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_NetworkStatus() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_NoneNetworkConnectionStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& NETWORK_NONE_ALERT_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_KickReason() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_KickMessage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LastZoneError() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_AASTitle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_AASMessage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& m_AASUrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_NetworkChanged() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& NETWORK_CHANGED_FLAG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_NetworkStatusCacheValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_CurrentSecurityMaxTimes() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_CurrentSecurityInterval() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& m_CurrentSecurityIndex() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_MrpcsSendingEnabled() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_MrpcsCountDownStartTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RequestsToBeRemove() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_LastSampleTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> static T& kSampleInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& curPufferSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& startHeartBeatTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& lastHeartBeatPing() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& timedelay1() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& timedelay2() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& timedelay3() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& timedelay4() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& maxDownloadSpeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& hasInitLitePack() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedLobbyReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FlushPenddingRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPenddingPkgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AlertNoneNetworkConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNetworkChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNetworkStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNetworkStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessConnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneDisConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneIMSDKError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneKingError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneKick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneAASKick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendPingPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPingPkgFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateZoneNetwork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyZoneError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatchMrpcsReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatchMrpcsReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MrpcsReportFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSendTimeoutPkgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasPingPkgWaiting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpdateSendDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWaitingRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFailEventCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReConnectWithExistSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsZoneNetworkConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryInitLitePack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeHeartBeatPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = float> T get_LastSendDuration() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC054))(this);
	}
	template <typename T = void> T set_LastSendDuration(float value) {
		return ((T (*)(ZoneServerHandler*, float))(Il2CppBase() + 0x43AC05C))(this, value);
	}
	template <typename T = bool> T get_IsZoneLogined() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC1CC))(this);
	}
	template <typename T = void> T set_IsZoneLogined(bool value) {
		return ((T (*)(ZoneServerHandler*, bool))(Il2CppBase() + 0x43AC1D4))(this, value);
	}
	template <typename T = uintptr_t> T get_NetworkStatus() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC1DC))(this);
	}
	template <typename T = void> T set_NetworkStatus(uintptr_t value) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AC1E4))(this, value);
	}
	template <typename T = uintptr_t> T get_ApolloConnector() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC234))(this);
	}
	template <typename T = void> T set_ApolloConnector(uintptr_t value) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AC23C))(this, value);
	}
	template <typename T = uintptr_t> T get_KickReason() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC244))(this);
	}
	template <typename T = void> T set_KickReason(uintptr_t value) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AC24C))(this, value);
	}
	template <typename T = Il2CppString*> T get_KickMessage() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC254))(this);
	}
	template <typename T = void> T set_KickMessage(Il2CppString* value) {
		return ((T (*)(ZoneServerHandler*, Il2CppString*))(Il2CppBase() + 0x43AC25C))(this, value);
	}
	template <typename T = uintptr_t> T get_LastZoneError() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC264))(this);
	}
	template <typename T = Il2CppString*> T get_AASTitle() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC26C))(this);
	}
	template <typename T = void> T set_AASTitle(Il2CppString* value) {
		return ((T (*)(ZoneServerHandler*, Il2CppString*))(Il2CppBase() + 0x43AC274))(this, value);
	}
	template <typename T = Il2CppString*> T get_AASMessage() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC27C))(this);
	}
	template <typename T = void> T set_AASMessage(Il2CppString* value) {
		return ((T (*)(ZoneServerHandler*, Il2CppString*))(Il2CppBase() + 0x43AC284))(this, value);
	}
	template <typename T = Il2CppString*> T get_AASUrl() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC28C))(this);
	}
	template <typename T = void> T set_AASUrl(Il2CppString* value) {
		return ((T (*)(ZoneServerHandler*, Il2CppString*))(Il2CppBase() + 0x43AC294))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC29C))(this);
	}
	template <typename T = bool> T NeedLobbyReconnect() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AC4E8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(ZoneServerHandler*, float))(Il2CppBase() + 0x43AC76C))(this, DeltaTime);
	}
	template <typename T = bool> T FlushPenddingRequest() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AE010))(this);
	}
	template <typename T = bool> T SendPenddingPkgs() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AD38C))(this);
	}
	template <typename T = void> T AlertNoneNetworkConnection(float noneNetworkDuration) {
		return ((T (*)(ZoneServerHandler*, float))(Il2CppBase() + 0x43ADB48))(this, noneNetworkDuration);
	}
	template <typename T = void> T OnNetworkChangedEvent(uintptr_t state) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AE5FC))(this, state);
	}
	template <typename T = void> T RefreshNetworkStatus(bool success) {
		return ((T (*)(ZoneServerHandler*, bool))(Il2CppBase() + 0x43AE7FC))(this, success);
	}
	template <typename T = uintptr_t> T SetNetworkStatus(uintptr_t state) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AE6DC))(this, state);
	}
	template <typename T = void> T OnZoneConnect(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AE94C))(this, msg);
	}
	template <typename T = void> T OnZoneReConnect(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AEEF0))(this, msg);
	}
	template <typename T = void> T ProcessConnectEvent(uintptr_t ret) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AEA9C))(this, ret);
	}
	template <typename T = void> T OnZoneDisConnect(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AF4A8))(this, msg);
	}
	template <typename T = void> T OnZoneError(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AF610))(this, msg);
	}
	template <typename T = void> T OnZoneIMSDKError(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AF760))(this, msg);
	}
	template <typename T = void> T OnZoneKingError(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AFB28))(this, msg);
	}
	template <typename T = void> T OnZoneKick(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AFDF4))(this, msg);
	}
	template <typename T = void> T OnZoneAASKick(uintptr_t msg) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43B00BC))(this, msg);
	}
	template <typename T = bool> T SendPingPkg(bool force) {
		return ((T (*)(ZoneServerHandler*, bool))(Il2CppBase() + 0x43AD980))(this, force);
	}
	template <typename T = void> T OnPingPkgFinish(bool isSuccess, int32_t padding) {
		return ((T (*)(ZoneServerHandler*, bool, int32_t))(Il2CppBase() + 0x43B0DC8))(this, isSuccess, padding);
	}
	template <typename T = void> T ValidateZoneNetwork(bool reconnect) {
		return ((T (*)(ZoneServerHandler*, bool))(Il2CppBase() + 0x43B1244))(this, reconnect);
	}
	template <typename T = void> T NotifyZoneError(uintptr_t result, bool needReconnect) {
		return ((T (*)(ZoneServerHandler*, uintptr_t, bool))(Il2CppBase() + 0x43AF040))(this, result, needReconnect);
	}
	template <typename T = void> T StartMatchMrpcsReport() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B1344))(this);
	}
	template <typename T = void> T EndMatchMrpcsReport() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B17D4))(this);
	}
	template <typename T = void> T MrpcsReportFunc() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43ADCE0))(this);
	}
	template <typename T = bool> T CheckSendTimeoutPkgs() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43ACF1C))(this);
	}
	template <typename T = bool> T HasPingPkgWaiting() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B1A68))(this);
	}
	template <typename T = void> T Disconnect() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B1BDC))(this);
	}
	template <typename T = void> T CheckUpdateSendDuration(Il2CppList<uintptr_t>* requests) {
		return ((T (*)(ZoneServerHandler*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x43B1D90))(this, requests);
	}
	template <typename T = bool> T ProcessWaitingRequests(uintptr_t resp) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43B2374))(this, resp);
	}
	template <typename T = bool> T Send(uintptr_t pbPackage, uint64_t mode_route_id) {
		return ((T (*)(ZoneServerHandler*, uintptr_t, uint64_t))(Il2CppBase() + 0x43B088C))(this, pbPackage, mode_route_id);
	}
	template <typename T = bool> T SendToServer(uintptr_t request) {
		return ((T (*)(ZoneServerHandler*, uintptr_t))(Il2CppBase() + 0x43AE260))(this, request);
	}
	template <typename T = void> T SendFailEventCallback(int32_t recvCmd, int32_t sequenceId) {
		return ((T (*)(ZoneServerHandler*, int32_t, int32_t))(Il2CppBase() + 0x43B192C))(this, recvCmd, sequenceId);
	}
	template <typename T = void> T ReConnect() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B2920))(this);
	}
	template <typename T = bool> T ReConnectWithExistSession() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B2AB0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B2E2C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B30AC))(this);
	}
	template <typename T = uintptr_t> T GetNetworkStatus() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B3180))(this);
	}
	template <typename T = void> T PrintStatus() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B3250))(this);
	}
	template <typename T = bool> T IsZoneNetworkConnected() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43AE0F8))(this);
	}
	template <typename T = bool> T OnDisconnect() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B3798))(this);
	}
	template <typename T = void> T TryInitLitePack() {
		return ((T (*)(ZoneServerHandler*))(Il2CppBase() + 0x43B03D8))(this);
	}
	template <typename T = void> T OnChangeHeartBeatPing(float ping) {
		return ((T (*)(ZoneServerHandler*, float))(Il2CppBase() + 0x43ACCEC))(this, ping);
	}

};

}
