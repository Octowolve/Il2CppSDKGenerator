#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class GameServerHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "GameServerHandler"));
	}

	template <typename T = int32_t> static T& DS_SERVER_TIMEOUT_SECONDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_DisconnectTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LastDSError() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IgnoreReconnect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> static T& IngoreLobbyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_SocketClient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDSServerTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Connect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPacket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSLoginSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReconnectDSNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnalysisSuitableDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProtocolEncryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = bool> T get_IsLocalGameServer() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4828CD4))(this);
	}
	template <typename T = uintptr_t> T CurrentState() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4828CDC))(this);
	}
	template <typename T = bool> T IsDSServerTimeout() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4828DAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4828EC4))(this);
	}
	template <typename T = void> T UnInit() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x48290EC))(this);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x48291E0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(GameServerHandler*, float))(Il2CppBase() + 0x48292C0))(this, DeltaTime);
	}
	template <typename T = bool> T HasSettlement() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x48293E0))(this);
	}
	template <typename T = void> T CheckPing() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4829524))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4829738))(this);
	}
	template <typename T = bool> T Send(uintptr_t protocol) {
		return ((T (*)(GameServerHandler*, uintptr_t))(Il2CppBase() + 0x4829820))(this, protocol);
	}
	template <typename T = bool> T Connect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(GameServerHandler*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x4829B60))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x4829C90))(this);
	}
	template <typename T = bool> T ProcessPacket(Il2CppArray<uintptr_t>* packData, int32_t PackDataCount, int32_t Sequence) {
		return ((T (*)(GameServerHandler*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x482798C))(this, packData, PackDataCount, Sequence);
	}
	template <typename T = void> T Disconnect(int32_t errorCode) {
		return ((T (*)(GameServerHandler*, int32_t))(Il2CppBase() + 0x4829FF8))(this, errorCode);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x482A0EC))(this);
	}
	template <typename T = void> T OnDisconnect(int32_t errorCode) {
		return ((T (*)(GameServerHandler*, int32_t))(Il2CppBase() + 0x4826C48))(this, errorCode);
	}
	template <typename T = bool> T ReconnectDSNow() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x482A1C8))(this);
	}
	template <typename T = void> T AnalysisSuitableDS() {
		return ((T (*)(GameServerHandler*))(Il2CppBase() + 0x482A36C))(this);
	}
	template <typename T = void> T UpdateProtocolEncryptionKey(Il2CppArray<uintptr_t>* inKey) {
		return ((T (*)(GameServerHandler*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x482A734))(this, inKey);
	}

};

}
