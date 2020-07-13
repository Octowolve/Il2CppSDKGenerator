#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkCallbackManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkCallbackManager"));
	}

	template <typename T = uintptr_t> static T& AkEventCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AkDynamicSequenceItemCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& AkMIDIEventCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& AkMarkerCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& AkDurationCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& AkMusicSyncCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& AkMusicPlaylistCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& AkAudioSourceChangeCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& AkMonitoringCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& AkBankCallbackInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_mapEventCallbacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_mapBankCallbacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& m_LastAddedEventPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& m_pNotifMem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& m_MonitoringCB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& ms_sourceChangeCallbackPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> static T RemoveEventCallback(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4A2E8AC))(0, in_playingID);
	}
	template <typename T = void> static T RemoveEventCallbackCookie(uintptr_t in_cookie) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2ED98))(0, in_cookie);
	}
	template <typename T = void> static T RemoveBankCallback(uintptr_t in_cookie) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2F1B4))(0, in_cookie);
	}
	template <typename T = void> static T SetLastAddedPlayingID(uint32_t in_playingID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4A2F5D0))(0, in_playingID);
	}
	template <typename T = uintptr_t> static T Init(int32_t BufferSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4A2F728))(0, BufferSize);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2F884))(0);
	}
	template <typename T = void> static T SetMonitoringCallback(uintptr_t in_Level, uintptr_t in_CB) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A2FA38))(0, in_Level, in_CB);
	}
	template <typename T = void> static T SetBGMCallback(uintptr_t in_CB, uintptr_t in_cookie) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A2FB08))(0, in_CB, in_cookie);
	}
	template <typename T = int32_t> static T PostCallbacks() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2FC08))(0);
	}

};

}
