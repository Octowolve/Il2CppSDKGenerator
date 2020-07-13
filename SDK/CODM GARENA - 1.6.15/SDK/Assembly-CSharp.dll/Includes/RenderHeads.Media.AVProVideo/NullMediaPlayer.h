#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class NullMediaPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "NullMediaPlayer"));
	}

	template <typename T = bool> T& _isPlaying() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isPaused() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& _currentTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _volume() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _playbackRate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _bLoop() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _Width() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _height() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _texture() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _texture_AVPro() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _texture_AVPro1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& _fakeFlipTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _frameCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> static T& FrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLooping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLooping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasMetaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeeking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPaused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuffering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDurationMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoDisplayRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequiresVerticalFlip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Seek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeekFast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeekWithTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTimeMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaybackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaybackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferingProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MuteAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMuted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioTrackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoTrackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrackBitrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVideoTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrackBitrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = Il2CppString*> T GetVersion() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41218F8))(this);
	}
	template <typename T = bool> T OpenVideoFromFile(Il2CppString* path, int64_t offset, Il2CppString* httpHeaderJson, uint32_t sourceSamplerate, uint32_t sourceChannels, int32_t forceFileFormat) {
		return ((T (*)(NullMediaPlayer*, Il2CppString*, int64_t, Il2CppString*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x41219B0))(this, path, offset, httpHeaderJson, sourceSamplerate, sourceChannels, forceFileFormat);
	}
	template <typename T = void> T CloseVideo() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4121D8C))(this);
	}
	template <typename T = void> T SetLooping(bool bLooping) {
		return ((T (*)(NullMediaPlayer*, bool))(Il2CppBase() + 0x4121E94))(this, bLooping);
	}
	template <typename T = bool> T IsLooping() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4121F3C))(this);
	}
	template <typename T = bool> T HasMetaData() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4121FE4))(this);
	}
	template <typename T = bool> T CanPlay() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122084))(this);
	}
	template <typename T = bool> T HasAudio() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122124))(this);
	}
	template <typename T = bool> T HasVideo() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41221C4))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122264))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122314))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41223B8))(this);
	}
	template <typename T = bool> T IsSeeking() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412245C))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41224FC))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41225A4))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412264C))(this);
	}
	template <typename T = bool> T IsBuffering() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412272C))(this);
	}
	template <typename T = float> T GetDurationMs() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41227CC))(this);
	}
	template <typename T = int32_t> T GetVideoWidth() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122870))(this);
	}
	template <typename T = int32_t> T GetVideoHeight() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122910))(this);
	}
	template <typename T = float> T GetVideoDisplayRate() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41229B0))(this);
	}
	template <typename T = uintptr_t> T GetTexture(int32_t index) {
		return ((T (*)(NullMediaPlayer*, int32_t))(Il2CppBase() + 0x4122A54))(this, index);
	}
	template <typename T = int32_t> T GetTextureFrameCount() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122AFC))(this);
	}
	template <typename T = bool> T RequiresVerticalFlip() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122B9C))(this);
	}
	template <typename T = void> T Seek(float timeMs) {
		return ((T (*)(NullMediaPlayer*, float))(Il2CppBase() + 0x4122C3C))(this, timeMs);
	}
	template <typename T = void> T SeekFast(float timeMs) {
		return ((T (*)(NullMediaPlayer*, float))(Il2CppBase() + 0x4122CE8))(this, timeMs);
	}
	template <typename T = void> T SeekWithTolerance(float timeMs, float beforeMs, float afterMs) {
		return ((T (*)(NullMediaPlayer*, float, float, float))(Il2CppBase() + 0x4122D94))(this, timeMs, beforeMs, afterMs);
	}
	template <typename T = float> T GetCurrentTimeMs() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122E64))(this);
	}
	template <typename T = void> T SetPlaybackRate(float rate) {
		return ((T (*)(NullMediaPlayer*, float))(Il2CppBase() + 0x4122F04))(this, rate);
	}
	template <typename T = float> T GetPlaybackRate() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4122FB0))(this);
	}
	template <typename T = float> T GetBufferingProgress() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123050))(this);
	}
	template <typename T = void> T MuteAudio(bool bMuted) {
		return ((T (*)(NullMediaPlayer*, bool))(Il2CppBase() + 0x41230F0))(this, bMuted);
	}
	template <typename T = bool> T IsMuted() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123190))(this);
	}
	template <typename T = void> T SetVolume(float volume) {
		return ((T (*)(NullMediaPlayer*, float))(Il2CppBase() + 0x4123230))(this, volume);
	}
	template <typename T = float> T GetVolume() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41232DC))(this);
	}
	template <typename T = int32_t> T GetAudioTrackCount() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412337C))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrack() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412341C))(this);
	}
	template <typename T = void> T SetAudioTrack(int32_t index) {
		return ((T (*)(NullMediaPlayer*, int32_t))(Il2CppBase() + 0x41234BC))(this, index);
	}
	template <typename T = int32_t> T GetVideoTrackCount() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412355C))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrack() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41235FC))(this);
	}
	template <typename T = Il2CppString*> T GetCurrentAudioTrackId() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412369C))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrackBitrate() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x412378C))(this);
	}
	template <typename T = void> T SetVideoTrack(int32_t index) {
		return ((T (*)(NullMediaPlayer*, int32_t))(Il2CppBase() + 0x412382C))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentVideoTrackId() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41238CC))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrackBitrate() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x41239BC))(this);
	}
	template <typename T = float> T GetVideoFrameRate() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123A5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123B00))(this);
	}
	template <typename T = void> T Render() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123D04))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseVideo() {
		return ((T (*)(NullMediaPlayer*))(Il2CppBase() + 0x4123E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SeekWithTolerance(float P0, float P1, float P2) {
		return ((T (*)(NullMediaPlayer*, float, float, float))(Il2CppBase() + 0x4123E38))(this, P0, P1, P2);
	}

};

}
