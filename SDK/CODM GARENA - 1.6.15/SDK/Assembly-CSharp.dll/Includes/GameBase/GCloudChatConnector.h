#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GCloudChatConnector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GCloudChatConnector"));
	}

	template <typename T = uintptr_t> T& m_EncryptMethod() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_KeyMaking() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Connector() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_ChatServerUrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Platform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CONNECT_TIMEOUT() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& LOGPREFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisteConnector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorRecvedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConnectorRouteChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProtocolRecv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T CreateConnection(Il2CppString* newChatServerUrl, uintptr_t plat) {
		return ((T (*)(GCloudChatConnector*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EB216C))(this, newChatServerUrl, plat);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB244C))(this);
	}
	template <typename T = bool> T DoSendData(Il2CppArray<uintptr_t>* content, bool allowLost) {
		return ((T (*)(GCloudChatConnector*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1EB3698))(this, content, allowLost);
	}
	template <typename T = bool> T DoConnect() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB28A0))(this);
	}
	template <typename T = void> T UnRegisteConnector() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB3988))(this);
	}
	template <typename T = bool> T DoReconnect() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB3F38))(this);
	}
	template <typename T = bool> T DoDisconnect() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB41C0))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB2574))(this);
	}
	template <typename T = void> T OnConnectorConnect(uintptr_t result) {
		return ((T (*)(GCloudChatConnector*, uintptr_t))(Il2CppBase() + 0x1EB42F4))(this, result);
	}
	template <typename T = void> T OnConnectorReconnect(uintptr_t result) {
		return ((T (*)(GCloudChatConnector*, uintptr_t))(Il2CppBase() + 0x1EB46D0))(this, result);
	}
	template <typename T = void> T OnConnectorError(uintptr_t result) {
		return ((T (*)(GCloudChatConnector*, uintptr_t))(Il2CppBase() + 0x1EB4920))(this, result);
	}
	template <typename T = void> T OnConnectorDisconnect(uintptr_t result) {
		return ((T (*)(GCloudChatConnector*, uintptr_t))(Il2CppBase() + 0x1EB49C0))(this, result);
	}
	template <typename T = void> T OnConnectorRecvedData() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB4BFC))(this);
	}
	template <typename T = void> T OnConnectorRouteChangedEvent(uint64_t serverId) {
		return ((T (*)(GCloudChatConnector*, uint64_t))(Il2CppBase() + 0x1EB4D34))(this, serverId);
	}
	template <typename T = void> T OnStateChanged(uintptr_t state, uintptr_t result) {
		return ((T (*)(GCloudChatConnector*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1EB4EC4))(this, state, result);
	}
	template <typename T = void> T OnProtocolRecv(Il2CppArray<uintptr_t>* buffer, int32_t size) {
		return ((T (*)(GCloudChatConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1EB5174))(this, buffer, size);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(GCloudChatConnector*))(Il2CppBase() + 0x1EB5278))(this);
	}
	template <typename T = void> T DoReadData(bool knowHasNewData) {
		return ((T (*)(GCloudChatConnector*, bool))(Il2CppBase() + 0x1EB5320))(this, knowHasNewData);
	}
	template <typename T = void> T Log(Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(GCloudChatConnector*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EB1F74))(this, msg, paras);
	}

};

}
