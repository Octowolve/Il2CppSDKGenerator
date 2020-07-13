#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class IGameServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "IGameServer"));
	}


	template <typename T = bool> T Send(uintptr_t protocol) {
		return ((T (*)(IGameServer*, uintptr_t))(Il2CppBase() + 0x0))(this, protocol);
	}
	template <typename T = bool> T Connect(Il2CppString* address, uint16_t port, uint32_t roomId) {
		return ((T (*)(IGameServer*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x0))(this, address, port, roomId);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(IGameServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Disconnect(int32_t errorCode) {
		return ((T (*)(IGameServer*, int32_t))(Il2CppBase() + 0x0))(this, errorCode);
	}
	template <typename T = void> T OnDisconnect(int32_t errorCode) {
		return ((T (*)(IGameServer*, int32_t))(Il2CppBase() + 0x0))(this, errorCode);
	}
	template <typename T = void> T OnDSLoginSuccess() {
		return ((T (*)(IGameServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsDSServerTimeout() {
		return ((T (*)(IGameServer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CurrentState() {
		return ((T (*)(IGameServer*))(Il2CppBase() + 0x0))(this);
	}

};

}
