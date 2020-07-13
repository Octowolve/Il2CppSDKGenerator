#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IConnector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IConnector"));
	}


	template <typename T = void> T add_ConnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_ConnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_DisconnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_DisconnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_RelayConnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_RelayConnectEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_RecvedDataEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_RecvedDataEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_RecvedUDPDataEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_RecvedUDPDataEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_RouteChangedEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_RouteChangedEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_StateChangedEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_StateChangedEvent(uintptr_t value) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_Connected() {
		return ((T (*)(IConnector*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Initialize(uintptr_t initInfo) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, initInfo);
	}
	template <typename T = uintptr_t> T Connect(uintptr_t channel, Il2CppString* url, bool clearBuffer) {
		return ((T (*)(IConnector*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, channel, url, clearBuffer);
	}
	template <typename T = uintptr_t> T RelayConnect() {
		return ((T (*)(IConnector*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Disconnect() {
		return ((T (*)(IConnector*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Write(Il2CppArray<uintptr_t>* data, int32_t dataLen) {
		return ((T (*)(IConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, data, dataLen);
	}
	template <typename T = bool> T WriteRoute(Il2CppArray<uintptr_t>* data, int32_t dataLen, uintptr_t routeInfo) {
		return ((T (*)(IConnector*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, dataLen, routeInfo);
	}
	template <typename T = bool> T Read(Il2CppArray<uintptr_t>* buffer, uintptr_t dataLength) {
		return ((T (*)(IConnector*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, buffer, dataLength);
	}
	template <typename T = bool> T WriteUDP(Il2CppArray<uintptr_t>* data, int32_t dataLen) {
		return ((T (*)(IConnector*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, data, dataLen);
	}
	template <typename T = bool> T ReadUDP(Il2CppArray<uintptr_t>* buffer, uintptr_t dataLen) {
		return ((T (*)(IConnector*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, buffer, dataLen);
	}
	template <typename T = void> T SetAuthInfo(uintptr_t type, uintptr_t channel, Il2CppString* appid, Il2CppString* openid, Il2CppString* token, Il2CppString* extInfo) {
		return ((T (*)(IConnector*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, type, channel, appid, openid, token, extInfo);
	}
	template <typename T = void> T SetProtocolVersion(int32_t headVersion, int32_t bodyVersion) {
		return ((T (*)(IConnector*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, headVersion, bodyVersion);
	}
	template <typename T = void> T SetClientType(uintptr_t type) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, type);
	}
	template <typename T = void> T SetRouteInfo(uintptr_t routeInfo) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, routeInfo);
	}
	template <typename T = void> T SetSyncInfo(uint32_t reserve, Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(IConnector*, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, reserve, data, len);
	}
	template <typename T = bool> T GetConnectedInfo(uintptr_t info) {
		return ((T (*)(IConnector*, uintptr_t))(Il2CppBase() + 0x0))(this, info);
	}

};

}
