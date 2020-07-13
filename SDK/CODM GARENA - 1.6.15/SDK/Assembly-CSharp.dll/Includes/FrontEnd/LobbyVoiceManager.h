#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbyVoiceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbyVoiceManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bIsEnteringVoiceRoom() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LobbyRoomVoiceName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SelfLobbyVoiceMemberId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& wait2JoinRoomName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLobbyVoiceMicrophoneMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurLobbyVoiceAudioMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEnterLobbyVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToExitLobbyVoiceRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLobbyVoiceRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyVoiceRoomJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyVoiceRoomQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyVoiceRoomJoinFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPauseComeback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWait2JoinRoomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetCurLobbyVoiceMicrophoneMode() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B2870))(this);
	}
	template <typename T = uintptr_t> T GetCurLobbyVoiceAudioMode() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B29AC))(this);
	}
	template <typename T = uintptr_t> T get_CurLobbyVoiceMicrophoneMode() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36AE790))(this);
	}
	template <typename T = void> T set_CurLobbyVoiceMicrophoneMode(uintptr_t value) {
		return ((T (*)(LobbyVoiceManager*, uintptr_t))(Il2CppBase() + 0x36AF798))(this, value);
	}
	template <typename T = uintptr_t> T get_CurLobbyVoiceAudioMode() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36AE78C))(this);
	}
	template <typename T = void> T set_CurLobbyVoiceAudioMode(uintptr_t value) {
		return ((T (*)(LobbyVoiceManager*, uintptr_t))(Il2CppBase() + 0x36AF560))(this, value);
	}
	template <typename T = void> T TryToEnterLobbyVoiceRoom() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36AF07C))(this);
	}
	template <typename T = void> T TryToExitLobbyVoiceRoom() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B2AEC))(this);
	}
	template <typename T = Il2CppString*> T GetLobbyVoiceRoomName(uint32_t room_addr, uint32_t room_Id) {
		return ((T (*)(LobbyVoiceManager*, uint32_t, uint32_t))(Il2CppBase() + 0x36B2C18))(this, room_addr, room_Id);
	}
	template <typename T = void> T OnLobbyVoiceRoomJoin(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(LobbyVoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x36B2E7C))(this, roomName, memberId);
	}
	template <typename T = int32_t> T OnLobbyVoiceRoomQuit(Il2CppString* roomName, int32_t memberId) {
		return ((T (*)(LobbyVoiceManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x36B3390))(this, roomName, memberId);
	}
	template <typename T = void> T OnLobbyVoiceRoomJoinFailed() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B3640))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B34F0))(this);
	}
	template <typename T = void> T OnApplicationPauseComeback() {
		return ((T (*)(LobbyVoiceManager*))(Il2CppBase() + 0x36B385C))(this);
	}
	template <typename T = void> T ResetWait2JoinRoomName(Il2CppString* name) {
		return ((T (*)(LobbyVoiceManager*, Il2CppString*))(Il2CppBase() + 0x36B2DA4))(this, name);
	}

};

}
