#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UdpSocket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UdpSocket"));
	}

	template <typename T = bool> T& m_IsRunning() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsSendData() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uint32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& SendBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ReceiveBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& ReceivePingBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EncryptionKey() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_EnableEncryption() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_NetworkThread() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& MaxSleepCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SleepMilliSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& SleepMilliSecond_WaitForPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& UseNew() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> T& SocketExceptionRaised() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SocketErrorCode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& UDP_RECV_MSG_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& StandbyBytes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_AckWrappedStream() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_AckBinaryWriter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_SendLock() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ClientSocket() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleUDPMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MainSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartThreadProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadNetworkProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWaitingForPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadSocketException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadReceiveReplyAck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRunning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SocketAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> T Init(bool inEnableEncryption, Il2CppArray<uintptr_t>* encryptionKey) {
		return ((T (*)(UdpSocket*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A39E8))(this, inEnableEncryption, encryptionKey);
	}
	template <typename T = bool> T Connect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(UdpSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x439FCA0))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = void> T Disconnect() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A005C))(this);
	}
	template <typename T = void> T RecycleUDPMsg() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A3B20))(this);
	}
	template <typename T = void> T MainSend(Il2CppArray<uintptr_t>* Bytes, int32_t ByteCount, uint32_t cmd) {
		return ((T (*)(UdpSocket*, Il2CppArray<uintptr_t>*, int32_t, uint32_t))(Il2CppBase() + 0x43A3EDC))(this, Bytes, ByteCount, cmd);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A4154))(this);
	}
	template <typename T = void> T StartThreadProcess() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A48C0))(this);
	}
	template <typename T = void> T ThreadNetworkProcess() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A4A44))(this);
	}
	template <typename T = bool> T IsWaitingForPing() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A56F0))(this);
	}
	template <typename T = bool> T get_SocketExceptionRaised() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A5984))(this);
	}
	template <typename T = void> T set_SocketExceptionRaised(bool value) {
		return ((T (*)(UdpSocket*, bool))(Il2CppBase() + 0x43A3B18))(this, value);
	}
	template <typename T = uintptr_t> T get_SocketErrorCode() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A598C))(this);
	}
	template <typename T = void> T set_SocketErrorCode(uintptr_t value) {
		return ((T (*)(UdpSocket*, uintptr_t))(Il2CppBase() + 0x43A5994))(this, value);
	}
	template <typename T = void> T ThreadSocketException(uintptr_t exp) {
		return ((T (*)(UdpSocket*, uintptr_t))(Il2CppBase() + 0x43A4694))(this, exp);
	}
	template <typename T = void> T ThreadException() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A47D4))(this);
	}
	template <typename T = bool> T ProcessReceive() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A4F50))(this);
	}
	template <typename T = void> T ThreadReceiveReplyAck(uint16_t seqNo, unsigned char sendTimes, uint32_t cmd) {
		return ((T (*)(UdpSocket*, uint16_t, unsigned char, uint32_t))(Il2CppBase() + 0x43A599C))(this, seqNo, sendTimes, cmd);
	}
	template <typename T = void> T ProcessSend() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A4374))(this);
	}
	template <typename T = bool> T IsRunning() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A58A0))(this);
	}
	template <typename T = bool> T IsLocalConnection() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A18F4))(this);
	}
	template <typename T = bool> T SocketConnect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(UdpSocket*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x43A17BC))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = int32_t> T SocketReceive(Il2CppArray<uintptr_t>* buff) {
		return ((T (*)(UdpSocket*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43A16A4))(this, buff);
	}
	template <typename T = void> T SocketSend(Il2CppArray<uintptr_t>* buff, int32_t count) {
		return ((T (*)(UdpSocket*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43A1564))(this, buff, count);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A1370))(this);
	}
	template <typename T = bool> T SocketAvailable() {
		return ((T (*)(UdpSocket*))(Il2CppBase() + 0x43A1450))(this);
	}

};

}
