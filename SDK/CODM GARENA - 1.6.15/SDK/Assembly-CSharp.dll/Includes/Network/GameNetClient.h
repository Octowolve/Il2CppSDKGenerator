#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class GameNetClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "GameNetClient"));
	}

	template <typename T = uint32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& MAX_RESEND_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& RESEND_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& RECV_SEQUENCE_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_QUEUEDMSG_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_Connected() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_UdpSocket() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_EventProcessor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_SocketExceptionTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NetWorkInstabilityCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& MsgEncryptedBufferLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MsgEncryptedBuffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ProtocolEncryptionKey() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_EnableProtocolEncryption() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_reliableSendList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint16_t> T& m_reliableSendSequence() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_reliableReceiveList() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_lastSequenceReceive() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& MAX_SEQUENCE_NO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SEQUENCE_WRAP_SAFE_RANGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IN_QUEUE_COUNT_WARN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& ReceiveDeliveryBuffer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& SendDeliveryBuffer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSocketConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProtocolEncryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToReceiveDeliveryBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToSendDeliveryBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Receive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDataReceived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDataSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxResendTimes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPingRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimerOutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRecvQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uint32_t> T get_RoomId() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x48245EC))(this);
	}
	template <typename T = void> T set_RoomId(uint32_t value) {
		return ((T (*)(GameNetClient*, uint32_t))(Il2CppBase() + 0x48245F4))(this, value);
	}
	template <typename T = uintptr_t> T get_Socket() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x48245FC))(this);
	}
	template <typename T = bool> T IsSocketConnected() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4824604))(this);
	}
	template <typename T = bool> T IsLocalConnection() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4824B68))(this);
	}
	template <typename T = void> T Init(uintptr_t eventProcessor) {
		return ((T (*)(GameNetClient*, uintptr_t))(Il2CppBase() + 0x4824C28))(this, eventProcessor);
	}
	template <typename T = void> T UnInit() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4824CD0))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4824D84))(this);
	}
	template <typename T = bool> T Connect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(GameNetClient*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x482672C))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = void> T Disconnect(int32_t errorCode, uintptr_t socketError) {
		return ((T (*)(GameNetClient*, int32_t, uintptr_t))(Il2CppBase() + 0x48247BC))(this, errorCode, socketError);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x48268AC))(this);
	}
	template <typename T = void> T UpdateProtocolEncryptionKey(Il2CppArray<uintptr_t>* inKey) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4827254))(this, inKey);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4826B98))(this);
	}
	template <typename T = void> T PushToReceiveDeliveryBuffer(Il2CppArray<uintptr_t>* data, int32_t count, int32_t sequence) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4827408))(this, data, count, sequence);
	}
	template <typename T = void> T PushToSendDeliveryBuffer(Il2CppArray<uintptr_t>* data, int32_t count, int32_t cmd) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x48275A8))(this, data, count, cmd);
	}
	template <typename T = bool> T Send(Il2CppArray<uintptr_t>* dataBuffer, int32_t dataLen, int32_t cmd) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4827748))(this, dataBuffer, dataLen, cmd);
	}
	template <typename T = void> T Receive() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4826588))(this);
	}
	template <typename T = void> T OnDataReceived(Il2CppArray<uintptr_t>* packData, int32_t packDataCount, int32_t sequence) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4827820))(this, packData, packDataCount, sequence);
	}
	template <typename T = void> T ProcessSend() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4824EAC))(this);
	}
	template <typename T = bool> T OnDataSend(Il2CppArray<uintptr_t>* dataBuffer, int32_t dataLen, int32_t cmd) {
		return ((T (*)(GameNetClient*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4827B80))(this, dataBuffer, dataLen, cmd);
	}
	template <typename T = void> T ProcessReceive() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4825050))(this);
	}
	template <typename T = void> T OnAck(int32_t ackSequence) {
		return ((T (*)(GameNetClient*, int32_t))(Il2CppBase() + 0x482867C))(this, ackSequence);
	}
	template <typename T = int32_t> T GetMaxResendTimes() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x48288E0))(this);
	}
	template <typename T = void> T CheckPingRed(uintptr_t elem, int32_t times) {
		return ((T (*)(GameNetClient*, uintptr_t, int32_t))(Il2CppBase() + 0x4828980))(this, elem, times);
	}
	template <typename T = void> T CheckResend() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x48257C0))(this);
	}
	template <typename T = float> T GetTimerOutTime() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4828B34))(this);
	}
	template <typename T = void> T CheckRecvQueue() {
		return ((T (*)(GameNetClient*))(Il2CppBase() + 0x4825F40))(this);
	}

};

}
