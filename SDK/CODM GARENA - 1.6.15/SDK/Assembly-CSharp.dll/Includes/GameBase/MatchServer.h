#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchServer"));
	}

	template <typename T = uintptr_t> T& m_GameServerHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_connectedIp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& m_connectedPort() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_connectedRoomId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& kNullIPAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsOnlineMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DSConnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDSConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDSIpAndPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDSIp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGameInfoData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisConnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DisConnectDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DSUpdateEncryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOnlineMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Flush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchMapLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalServerTriggerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_GeneralGameServerHandler() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C18E8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C265C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(MatchServer*, float))(Il2CppBase() + 0x19C2758))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C2828))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C29CC))(this);
	}
	template <typename T = bool> T DSConnect(Il2CppString* serverAddress, uint16_t serverPort, uint32_t roomId) {
		return ((T (*)(MatchServer*, Il2CppString*, uint16_t, uint32_t))(Il2CppBase() + 0x19C2A90))(this, serverAddress, serverPort, roomId);
	}
	template <typename T = bool> T IsDSConnected() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C2C84))(this);
	}
	template <typename T = Il2CppString*> T GetDSIpAndPort() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C2D48))(this);
	}
	template <typename T = Il2CppString*> T GetDSIp() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C2EE8))(this);
	}
	template <typename T = void> T ClearGameInfoData() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C28CC))(this);
	}
	template <typename T = void> T DisConnectDS(bool quitMatch) {
		return ((T (*)(MatchServer*, bool))(Il2CppBase() + 0x19B2DDC))(this, quitMatch);
	}
	template <typename T = void> T DisConnectDS_1(uintptr_t error) {
		return ((T (*)(MatchServer*, uintptr_t))(Il2CppBase() + 0x19C2FF0))(this, error);
	}
	template <typename T = void> T DSUpdateEncryptionKey(Il2CppArray<uintptr_t>* inKey) {
		return ((T (*)(MatchServer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19C30C0))(this, inKey);
	}
	template <typename T = bool> T get_IsLocalServer() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C3188))(this);
	}
	template <typename T = void> T SwitchOnlineMode(bool online) {
		return ((T (*)(MatchServer*, bool))(Il2CppBase() + 0x19C319C))(this, online);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C3254))(this);
	}
	template <typename T = void> T OnMatchMapLoadComplete() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x1960884))(this);
	}
	template <typename T = void> T SetPause(bool paused) {
		return ((T (*)(MatchServer*, bool))(Il2CppBase() + 0x19C3304))(this, paused);
	}
	template <typename T = void> T OnLocalServerTriggerEnterExit(uintptr_t self, uintptr_t other, bool enter) {
		return ((T (*)(MatchServer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x19C33A4))(this, self, other, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C3460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MatchServer*, float))(Il2CppBase() + 0x19C3468))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C3470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(MatchServer*))(Il2CppBase() + 0x19C3478))(this);
	}

};

}
