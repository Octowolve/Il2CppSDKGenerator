#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class MatchSender
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "MatchSender"));
	}

	template <typename T = uintptr_t> T& m_ProtocalHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Send() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestDSLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestGMCommand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestMapLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestRespawnPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestSendLocalSpecial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T Send(uintptr_t protocol) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C17F8))(this, protocol);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MatchSender*))(Il2CppBase() + 0x19C18F0))(this);
	}
	template <typename T = void> T OnMatchEvent(uintptr_t msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C1C68))(this, msg);
	}
	template <typename T = void> T RegisterProtocolHandler(uint32_t commandId, void* handler) {
		return ((T (*)(MatchSender*, uint32_t, void*))(Il2CppBase() + 0x19C1B84))(this, commandId, handler);
	}
	template <typename T = void> T UnRegisterProtocolHandler(uint32_t commandId) {
		return ((T (*)(MatchSender*, uint32_t))(Il2CppBase() + 0x19C1D30))(this, commandId);
	}
	template <typename T = void> T OnRequestDSLogin(uintptr_t Msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C1DF8))(this, Msg);
	}
	template <typename T = void> T OnRequestGMCommand(uintptr_t Msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C2130))(this, Msg);
	}
	template <typename T = void> T OnRequestMapLoaded(uintptr_t msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C21D0))(this, msg);
	}
	template <typename T = void> T OnRequestRespawnPlayer(uintptr_t msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C2404))(this, msg);
	}
	template <typename T = void> T OnRequestSendLocalSpecial(uintptr_t msg) {
		return ((T (*)(MatchSender*, uintptr_t))(Il2CppBase() + 0x19C24A4))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MatchSender*))(Il2CppBase() + 0x19C2544))(this);
	}

};

}
