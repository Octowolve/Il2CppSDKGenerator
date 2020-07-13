#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class GCloudConnector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "GCloudConnector"));
	}

	template <typename T = uintptr_t> T& ConnectEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& DisconnectEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RelayConnectEvent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RecvedDataEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RecvedUDPDataEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RouteChangedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& StateChangedEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Connected() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& connectorType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& manualUpdate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& autoReconnect() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = bool> T& autoLogin() {
		return *(T*)((uintptr_t)this + 0x42);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_ConnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_ConnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_DisconnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_DisconnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_RelayConnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_RelayConnectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_RecvedDataEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_RecvedDataEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_RecvedUDPDataEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_RecvedUDPDataEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_RouteChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_RouteChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_StateChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_StateChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RelayConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteRoute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteUDP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadUDP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProtocolVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAuthInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClientType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRouteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSyncInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConnectedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_convertConnectorResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelayConnectedProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisconnectProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChangedProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRouteChangedProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PerformVoidMethodWithId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = void> T add_ConnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530044))(this, value);
	}
	template <typename T = void> T remove_ConnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x453023C))(this, value);
	}
	template <typename T = void> T add_DisconnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530434))(this, value);
	}
	template <typename T = void> T remove_DisconnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x453062C))(this, value);
	}
	template <typename T = void> T add_RelayConnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530824))(this, value);
	}
	template <typename T = void> T remove_RelayConnectEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530A1C))(this, value);
	}
	template <typename T = void> T add_RecvedDataEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530C14))(this, value);
	}
	template <typename T = void> T remove_RecvedDataEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4530E0C))(this, value);
	}
	template <typename T = void> T add_RecvedUDPDataEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4531004))(this, value);
	}
	template <typename T = void> T remove_RecvedUDPDataEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45311FC))(this, value);
	}
	template <typename T = void> T add_RouteChangedEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45313F4))(this, value);
	}
	template <typename T = void> T remove_RouteChangedEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45315EC))(this, value);
	}
	template <typename T = void> T add_StateChangedEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45317E4))(this, value);
	}
	template <typename T = void> T remove_StateChangedEvent(uintptr_t value) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45319DC))(this, value);
	}
	template <typename T = bool> T get_Connected() {
		return ((T (*)(GCloudConnector*))(Il2CppBase() + 0x4531BD4))(this);
	}
	template <typename T = void> T set_Connected(bool value) {
		return ((T (*)(GCloudConnector*, bool))(Il2CppBase() + 0x453003C))(this, value);
	}
	template <typename T = uintptr_t> T Initialize(uintptr_t initInfo) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4531BDC))(this, initInfo);
	}
	template <typename T = uintptr_t> T Connect(uintptr_t channel, Il2CppString* url, bool clearBuffer) {
		return ((T (*)(GCloudConnector*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4531E60))(this, channel, url, clearBuffer);
	}
	template <typename T = uintptr_t> T RelayConnect() {
		return ((T (*)(GCloudConnector*))(Il2CppBase() + 0x453209C))(this);
	}
	template <typename T = uintptr_t> T Disconnect() {
		return ((T (*)(GCloudConnector*))(Il2CppBase() + 0x4532270))(this);
	}
	template <typename T = bool> T Write(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4532444))(this, data, len);
	}
	template <typename T = bool> T WriteRoute(Il2CppArray<uintptr_t>* data, int32_t dataLen, uintptr_t routeInfo) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4532658))(this, data, dataLen, routeInfo);
	}
	template <typename T = bool> T WriteUDP(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x45328BC))(this, data, len);
	}
	template <typename T = bool> T Read(Il2CppArray<uintptr_t>* buffer, uintptr_t realLength) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x45329AC))(this, buffer, realLength);
	}
	template <typename T = bool> T ReadUDP(Il2CppArray<uintptr_t>* buffer, uintptr_t realLength) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4532BB8))(this, buffer, realLength);
	}
	template <typename T = void> T SetProtocolVersion(int32_t headVersion, int32_t bodyVersion) {
		return ((T (*)(GCloudConnector*, int32_t, int32_t))(Il2CppBase() + 0x4532CC0))(this, headVersion, bodyVersion);
	}
	template <typename T = void> T SetAuthInfo(uintptr_t type, uintptr_t channel, Il2CppString* appid, Il2CppString* openid, Il2CppString* token, Il2CppString* extInfo) {
		return ((T (*)(GCloudConnector*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4532E80))(this, type, channel, appid, openid, token, extInfo);
	}
	template <typename T = void> T SetClientType(uintptr_t type) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x45330E8))(this, type);
	}
	template <typename T = void> T SetRouteInfo(uintptr_t routeInfo) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4533298))(this, routeInfo);
	}
	template <typename T = void> T SetSyncInfo(uint32_t reserve, Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(GCloudConnector*, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4533484))(this, reserve, data, len);
	}
	template <typename T = bool> T GetConnectedInfo(uintptr_t info) {
		return ((T (*)(GCloudConnector*, uintptr_t))(Il2CppBase() + 0x4533664))(this, info);
	}
	template <typename T = uintptr_t> T convertConnectorResult(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x453388C))(this, data);
	}
	template <typename T = void> T OnConnected(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4533990))(this, data);
	}
	template <typename T = void> T OnRelayConnectedProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4533B08))(this, data);
	}
	template <typename T = void> T OnDisconnectProc(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(GCloudConnector*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4533C80))(this, data);
	}
	template <typename T = void> T OnStateChangedProc(int32_t state, Il2CppArray<uintptr_t>* resultdata) {
		return ((T (*)(GCloudConnector*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4533E10))(this, state, resultdata);
	}
	template <typename T = void> T OnRouteChangedProc(Il2CppString* msg) {
		return ((T (*)(GCloudConnector*, Il2CppString*))(Il2CppBase() + 0x4533FD0))(this, msg);
	}
	template <typename T = void> T PerformVoidMethodWithId(int32_t methodId) {
		return ((T (*)(GCloudConnector*, int32_t))(Il2CppBase() + 0x4534150))(this, methodId);
	}
	template <typename T = uintptr_t> static T gcloud_connector_Initialize(uint64_t objId, uintptr_t type, bool manualUpdate, bool autoReconnect, bool autoLogin, Il2CppArray<uintptr_t>* initInfo, int32_t size) {
		return ((T (*)(void *, uint64_t, uintptr_t, bool, bool, bool, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4531D54))(0, objId, type, manualUpdate, autoReconnect, autoLogin, initInfo, size);
	}
	template <typename T = uintptr_t> static T gcloud_connector_connect(uint64_t objId, uintptr_t channel, Il2CppString* url, bool clear) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4531F74))(0, objId, channel, url, clear);
	}
	template <typename T = uintptr_t> static T gcloud_connector_relayconnect(uint64_t objId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4532188))(0, objId);
	}
	template <typename T = uintptr_t> static T gcloud_connector_disconnect(uint64_t objId) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x453235C))(0, objId);
	}
	template <typename T = bool> static T gcloud_connector_writeData(uint64_t objId, Il2CppArray<uintptr_t>* buff, int32_t size, bool rawUdp) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4532550))(0, objId, buff, size, rawUdp);
	}
	template <typename T = bool> static T gcloud_connector_readData(uint64_t objId, Il2CppArray<uintptr_t>* buff, uintptr_t size, bool rawUdp) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4532AB0))(0, objId, buff, size, rawUdp);
	}
	template <typename T = bool> static T gcloud_connector_writeRoute(uint64_t objId, Il2CppArray<uintptr_t>* dataBuff, int32_t dataSize, Il2CppArray<uintptr_t>* routeInfo, int32_t infoSize) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x45327A4))(0, objId, dataBuff, dataSize, routeInfo, infoSize);
	}
	template <typename T = void> static T gcloud_connector_set_authInfo(uint64_t objId, uintptr_t type, Il2CppString* appid, uintptr_t channel, Il2CppString* openid, Il2CppString* token, Il2CppString* extInfo) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4532F84))(0, objId, type, appid, channel, openid, token, extInfo);
	}
	template <typename T = void> static T gcloud_connector_set_protocol_version(uint64_t objId, int32_t headVersion, int32_t bodyVersion) {
		return ((T (*)(void *, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x4532D90))(0, objId, headVersion, bodyVersion);
	}
	template <typename T = uintptr_t> static T gcloud_connector_set_clientType(uint64_t objId, uintptr_t type) {
		return ((T (*)(void *, uint64_t, uintptr_t))(Il2CppBase() + 0x45331AC))(0, objId, type);
	}
	template <typename T = uintptr_t> static T gcloud_connector_setRouteInfo(uint64_t objId, Il2CppArray<uintptr_t>* buff, int32_t size) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x453338C))(0, objId, buff, size);
	}
	template <typename T = void> static T gcloud_connector_set_syncInfo(uint64_t objId, uint32_t extInt, Il2CppArray<uintptr_t>* buff, int32_t size) {
		return ((T (*)(void *, uint64_t, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4533564))(0, objId, extInt, buff, size);
	}
	template <typename T = bool> static T gcloud_connector_get_connectedInfo(uint64_t objId, Il2CppArray<uintptr_t>* buff, int32_t size) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x453378C))(0, objId, buff, size);
	}
	template <typename T = void> T xLuaBaseProxy_PerformVoidMethodWithId(int32_t P0) {
		return ((T (*)(GCloudConnector*, int32_t))(Il2CppBase() + 0x4534358))(this, P0);
	}

};

}
