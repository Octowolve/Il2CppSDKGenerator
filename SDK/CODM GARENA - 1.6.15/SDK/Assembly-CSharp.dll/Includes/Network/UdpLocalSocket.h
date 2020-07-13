#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UdpLocalSocket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UdpLocalSocket"));
	}

	template <typename T = int32_t> static T& BufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& mIsConnected() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UnUsed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_RecvBuffer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_SendBuffer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_SpecialSendBuffer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_SpecialRecvBuffer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnRecvSpecial() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnUsedBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSpecial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSpecialReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x439FAAC))(0);
	}
	template <typename T = bool> T Connect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(UdpLocalSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x439FB5C))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x439FE58))(this);
	}
	template <typename T = void> T Disconnect() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x439FF78))(this);
	}
	template <typename T = bool> T SocketAvailable() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A0304))(this);
	}
	template <typename T = int32_t> T OnSend(uintptr_t buff, int32_t size, uintptr_t flag) {
		return ((T (*)(UdpLocalSocket*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x43A0418))(this, buff, size, flag);
	}
	template <typename T = int32_t> T OnRecv(uintptr_t buff, int32_t size, uintptr_t flag) {
		return ((T (*)(UdpLocalSocket*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x43A083C))(this, buff, size, flag);
	}
	template <typename T = uintptr_t> T GetUnUsedBuffer() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A069C))(this);
	}
	template <typename T = void> T SocketSend(Il2CppArray<uintptr_t>* buff, int32_t count) {
		return ((T (*)(UdpLocalSocket*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A0BCC))(this, buff, count);
	}
	template <typename T = void> T SendSpecial(Il2CppArray<uintptr_t>* buff) {
		return ((T (*)(UdpLocalSocket*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A0D2C))(this, buff);
	}
	template <typename T = void> T ProcessSpecialReceive() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A0170))(this);
	}
	template <typename T = int32_t> T SocketReceive(Il2CppArray<uintptr_t>* buff) {
		return ((T (*)(UdpLocalSocket*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A0F4C))(this, buff);
	}
	template <typename T = bool> T SocketConnect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(UdpLocalSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x43A1108))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = bool> T IsLocalConnection() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A1200))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Connect(Il2CppString* P0, uint16_t P1, uint32_t P2) {
		return ((T (*)(UdpLocalSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x43A1354))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_IsConnected() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A136C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Disconnect() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A1448))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_SocketAvailable() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A144C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SocketSend(Il2CppArray<uintptr_t>* P0, int32_t P1) {
		return ((T (*)(UdpLocalSocket*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A1560))(this, P0, P1);
	}
	template <typename T = int32_t> T xLuaBaseProxy_SocketReceive(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UdpLocalSocket*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A16A0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_SocketConnect(Il2CppString* P0, uint16_t P1, uint32_t P2) {
		return ((T (*)(UdpLocalSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x43A17A4))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_IsLocalConnection() {
		return ((T (*)(UdpLocalSocket*))(Il2CppBase() + 0x43A18F0))(this);
	}

};

}
