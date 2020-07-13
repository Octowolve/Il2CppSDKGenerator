#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DanceFloorAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DanceFloorAudioComponent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& PlayList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurrentMusicIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_CurrentMusicID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_MusicInTotal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bIsPlaying() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_PlaybackPercentage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& percentageMutex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlaybackTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRemainingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDurationByAudioEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncCurrentStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlaybackPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = int32_t> T get_CurrentMusicIndex() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D42280))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D42288))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D428BC))(this);
	}
	template <typename T = float> T GetCurrentPlaybackTime() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D42964))(this);
	}
	template <typename T = float> T GetRemainingTime() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D42AB0))(this);
	}
	template <typename T = void> T StartPlayMusic(bool bStartMusic, bool bForcePlayFromStart) {
		return ((T (*)(DanceFloorAudioComponent*, bool, bool))(Il2CppBase() + 0x3D42C04))(this, bStartMusic, bForcePlayFromStart);
	}
	template <typename T = void> T SwitchMusic(bool bPlayNextOne) {
		return ((T (*)(DanceFloorAudioComponent*, bool))(Il2CppBase() + 0x3D43264))(this, bPlayNextOne);
	}
	template <typename T = void> T PlayMusic(Il2CppString* musicName, int32_t percentage) {
		return ((T (*)(DanceFloorAudioComponent*, Il2CppString*, int32_t))(Il2CppBase() + 0x3D42FE0))(this, musicName, percentage);
	}
	template <typename T = void> T StopMusic() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D42E94))(this);
	}
	template <typename T = float> T GetDurationByAudioEventName(Il2CppString* audioEventName) {
		return ((T (*)(DanceFloorAudioComponent*, Il2CppString*))(Il2CppBase() + 0x3D426CC))(this, audioEventName);
	}
	template <typename T = void> T SyncCurrentStatus(int32_t musicID, bool bIsPlayingNow, int32_t posInPercentage) {
		return ((T (*)(DanceFloorAudioComponent*, int32_t, bool, int32_t))(Il2CppBase() + 0x3D435D4))(this, musicID, bIsPlayingNow, posInPercentage);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCurrentStatus() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D437AC))(this);
	}
	template <typename T = void> T GetCurrentPlaybackPercent() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D43338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DanceFloorAudioComponent*))(Il2CppBase() + 0x3D43904))(this);
	}

};

}
