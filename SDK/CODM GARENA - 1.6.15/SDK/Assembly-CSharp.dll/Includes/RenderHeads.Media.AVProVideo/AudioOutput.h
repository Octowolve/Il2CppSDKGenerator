#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class AudioOutput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "AudioOutput"));
	}

	template <typename T = uintptr_t> T& _audioOutputMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _mediaPlayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _audioSource() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _channelMask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMediaPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMediaPlayerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyAudioSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AudioOutput*))(Il2CppBase() + 0x3834924))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AudioOutput*))(Il2CppBase() + 0x38349E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AudioOutput*))(Il2CppBase() + 0x3834D00))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AudioOutput*))(Il2CppBase() + 0x3834DA8))(this);
	}
	template <typename T = void> T ChangeMediaPlayer(uintptr_t newPlayer) {
		return ((T (*)(AudioOutput*, uintptr_t))(Il2CppBase() + 0x3834A90))(this, newPlayer);
	}
	template <typename T = void> T OnMediaPlayerEvent(uintptr_t mp, uintptr_t et, uintptr_t errorCode) {
		return ((T (*)(AudioOutput*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38352CC))(this, mp, et, errorCode);
	}
	template <typename T = void> static T ApplyAudioSettings(uintptr_t player, uintptr_t audioSource) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3834F88))(0, player, audioSource);
	}

};

}
