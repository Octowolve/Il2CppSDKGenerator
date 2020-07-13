#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class BaseMediaPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "BaseMediaPlayer"));
	}

	template <typename T = Il2CppString*> T& _playerDescription() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _lastError() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _defaultTextureFilterMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _defaultTextureWrapMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _defaultTextureAnisoLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _seekableTimeRanges() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _stallDetectionTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _stallDetectionFrame() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _subtitles() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _currentSubtitle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOpenVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChunkToVideoBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndOpenVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rewind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeekWithTolerance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDateTimeSecondsSince1970() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeekableTimeRanges() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCropRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForNextFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayWithoutBuffering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKeyServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKeyServerAuthToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDecryptionKeyBase64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDecryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SupportsTextureFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetYpCbCrTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumAudioChannels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioHeadRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAudioHeadRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioChannelMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAudioFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEstimatedTotalBandwidthUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastExtendedErrorCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerSupportsLinearColorSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferedTimeRangeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferedTimeRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTextureProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GrabAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExpectingNewVideoFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaybackStalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSubtitlesSRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSubtitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubtitleIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubtitleText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}

	template <typename T = Il2CppString*> T GetVersion() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T OpenVideoFromFile(Il2CppString* path, int64_t offset, Il2CppString* httpHeaderJson, uint32_t sourceSamplerate, uint32_t sourceChannels, int32_t forceFileFormat) {
		return ((T (*)(BaseMediaPlayer*, Il2CppString*, int64_t, Il2CppString*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x0))(this, path, offset, httpHeaderJson, sourceSamplerate, sourceChannels, forceFileFormat);
	}
	template <typename T = bool> T OpenVideoFromBuffer(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(BaseMediaPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x410C928))(this, buffer);
	}
	template <typename T = bool> T StartOpenVideoFromBuffer(uint64_t length) {
		return ((T (*)(BaseMediaPlayer*, uint64_t))(Il2CppBase() + 0x410C9D0))(this, length);
	}
	template <typename T = bool> T AddChunkToVideoBuffer(Il2CppArray<uintptr_t>* chunk, uint64_t offset, uint64_t length) {
		return ((T (*)(BaseMediaPlayer*, Il2CppArray<uintptr_t>*, uint64_t, uint64_t))(Il2CppBase() + 0x410CA90))(this, chunk, offset, length);
	}
	template <typename T = bool> T EndOpenVideoFromBuffer() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CB68))(this);
	}
	template <typename T = void> T CloseVideo() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CC08))(this);
	}
	template <typename T = void> T SetLooping(bool bLooping) {
		return ((T (*)(BaseMediaPlayer*, bool))(Il2CppBase() + 0x0))(this, bLooping);
	}
	template <typename T = bool> T IsLooping() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasMetaData() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanPlay() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Rewind() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CCB4))(this);
	}
	template <typename T = void> T Seek(float timeMs) {
		return ((T (*)(BaseMediaPlayer*, float))(Il2CppBase() + 0x0))(this, timeMs);
	}
	template <typename T = void> T SeekFast(float timeMs) {
		return ((T (*)(BaseMediaPlayer*, float))(Il2CppBase() + 0x0))(this, timeMs);
	}
	template <typename T = void> T SeekWithTolerance(float timeMs, float beforeMs, float afterMs) {
		return ((T (*)(BaseMediaPlayer*, float, float, float))(Il2CppBase() + 0x410CD68))(this, timeMs, beforeMs, afterMs);
	}
	template <typename T = float> T GetCurrentTimeMs() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = double> T GetCurrentDateTimeSecondsSince1970() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CE48))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSeekableTimeRanges() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CEEC))(this);
	}
	template <typename T = float> T GetPlaybackRate() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetPlaybackRate(float rate) {
		return ((T (*)(BaseMediaPlayer*, float))(Il2CppBase() + 0x0))(this, rate);
	}
	template <typename T = float> T GetDurationMs() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetVideoWidth() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetVideoHeight() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppRect> T GetCropRect() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410CF8C))(this);
	}
	template <typename T = float> T GetVideoDisplayRate() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasAudio() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasVideo() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsSeeking() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsBuffering() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T WaitForNextFrame(uintptr_t dummyCamera, int32_t previousFrameCount) {
		return ((T (*)(BaseMediaPlayer*, uintptr_t, int32_t))(Il2CppBase() + 0x410D064))(this, dummyCamera, previousFrameCount);
	}
	template <typename T = void> T SetPlayWithoutBuffering(bool playWithoutBuffering) {
		return ((T (*)(BaseMediaPlayer*, bool))(Il2CppBase() + 0x410D124))(this, playWithoutBuffering);
	}
	template <typename T = void> T SetKeyServerURL(Il2CppString* url) {
		return ((T (*)(BaseMediaPlayer*, Il2CppString*))(Il2CppBase() + 0x410D1C4))(this, url);
	}
	template <typename T = void> T SetKeyServerAuthToken(Il2CppString* token) {
		return ((T (*)(BaseMediaPlayer*, Il2CppString*))(Il2CppBase() + 0x410D264))(this, token);
	}
	template <typename T = void> T SetDecryptionKeyBase64(Il2CppString* key) {
		return ((T (*)(BaseMediaPlayer*, Il2CppString*))(Il2CppBase() + 0x410D304))(this, key);
	}
	template <typename T = void> T SetDecryptionKey(Il2CppArray<uintptr_t>* key) {
		return ((T (*)(BaseMediaPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x410D3A4))(this, key);
	}
	template <typename T = int32_t> T GetTextureCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D444))(this);
	}
	template <typename T = uintptr_t> T GetTexture(int32_t index) {
		return ((T (*)(BaseMediaPlayer*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetTextureFrameCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T SupportsTextureFrameCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D4E4))(this);
	}
	template <typename T = int64_t> T GetTextureTimeStamp() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D584))(this);
	}
	template <typename T = bool> T RequiresVerticalFlip() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTextureTransform() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D628))(this);
	}
	template <typename T = uintptr_t> T GetYpCbCrTransform() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D744))(this);
	}
	template <typename T = void> T MuteAudio(bool bMuted) {
		return ((T (*)(BaseMediaPlayer*, bool))(Il2CppBase() + 0x0))(this, bMuted);
	}
	template <typename T = bool> T IsMuted() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetVolume(float volume) {
		return ((T (*)(BaseMediaPlayer*, float))(Il2CppBase() + 0x0))(this, volume);
	}
	template <typename T = void> T SetBalance(float balance) {
		return ((T (*)(BaseMediaPlayer*, float))(Il2CppBase() + 0x410D7F4))(this, balance);
	}
	template <typename T = float> T GetVolume() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetBalance() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D894))(this);
	}
	template <typename T = int32_t> T GetAudioTrackCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAudioTrackId(int32_t index) {
		return ((T (*)(BaseMediaPlayer*, int32_t))(Il2CppBase() + 0x410D934))(this, index);
	}
	template <typename T = int32_t> T GetCurrentAudioTrack() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAudioTrack(int32_t index) {
		return ((T (*)(BaseMediaPlayer*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentAudioTrackId() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrackBitrate() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetNumAudioChannels() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410D9F4))(this);
	}
	template <typename T = void> T SetAudioHeadRotation(Il2CppQuaternion q) {
		return ((T (*)(BaseMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x410DA94))(this, q);
	}
	template <typename T = void> T ResetAudioHeadRotation() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410DB54))(this);
	}
	template <typename T = void> T SetAudioChannelMode(uintptr_t channelMode) {
		return ((T (*)(BaseMediaPlayer*, uintptr_t))(Il2CppBase() + 0x410DBEC))(this, channelMode);
	}
	template <typename T = void> T SetAudioFocusEnabled(bool enabled) {
		return ((T (*)(BaseMediaPlayer*, bool))(Il2CppBase() + 0x410DC8C))(this, enabled);
	}
	template <typename T = void> T SetAudioFocusProperties(float offFocusLevel, float widthDegrees) {
		return ((T (*)(BaseMediaPlayer*, float, float))(Il2CppBase() + 0x410DD2C))(this, offFocusLevel, widthDegrees);
	}
	template <typename T = void> T SetAudioFocusRotation(Il2CppQuaternion q) {
		return ((T (*)(BaseMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x410DDE0))(this, q);
	}
	template <typename T = void> T ResetAudioFocus() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410DEA0))(this);
	}
	template <typename T = int32_t> T GetVideoTrackCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetVideoTrackId(int32_t index) {
		return ((T (*)(BaseMediaPlayer*, int32_t))(Il2CppBase() + 0x410DF38))(this, index);
	}
	template <typename T = int32_t> T GetCurrentVideoTrack() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetVideoTrack(int32_t index) {
		return ((T (*)(BaseMediaPlayer*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentVideoTrackId() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrackBitrate() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetVideoFrameRate() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T GetEstimatedTotalBandwidthUsed() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410DFF8))(this);
	}
	template <typename T = float> T GetBufferingProgress() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Render() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetLastError() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E09C))(this);
	}
	template <typename T = int64_t> T GetLastExtendedErrorCode() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E13C))(this);
	}
	template <typename T = Il2CppString*> T GetPlayerDescription() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E1E0))(this);
	}
	template <typename T = bool> T PlayerSupportsLinearColorSpace() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E280))(this);
	}
	template <typename T = int32_t> T GetBufferedTimeRangeCount() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E320))(this);
	}
	template <typename T = bool> T GetBufferedTimeRange(int32_t index, uintptr_t startTimeMs, uintptr_t endTimeMs) {
		return ((T (*)(BaseMediaPlayer*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x410E3C0))(this, index, startTimeMs, endTimeMs);
	}
	template <typename T = void> T SetTextureProperties(uintptr_t filterMode, uintptr_t wrapMode, int32_t anisoLevel) {
		return ((T (*)(BaseMediaPlayer*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x410E488))(this, filterMode, wrapMode, anisoLevel);
	}
	template <typename T = void> T ApplyTextureProperties(uintptr_t texture) {
		return ((T (*)(BaseMediaPlayer*, uintptr_t))(Il2CppBase() + 0x410E5C4))(this, texture);
	}
	template <typename T = void> T GrabAudio(Il2CppArray<uintptr_t>* buffer, int32_t floatCount, int32_t channelCount) {
		return ((T (*)(BaseMediaPlayer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x410E700))(this, buffer, floatCount, channelCount);
	}
	template <typename T = bool> T IsExpectingNewVideoFrame() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E7BC))(this);
	}
	template <typename T = bool> T IsPlaybackStalled() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410E8DC))(this);
	}
	template <typename T = bool> T LoadSubtitlesSRT(Il2CppString* data) {
		return ((T (*)(BaseMediaPlayer*, Il2CppString*))(Il2CppBase() + 0x410EA20))(this, data);
	}
	template <typename T = void> T UpdateSubtitles() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410F170))(this);
	}
	template <typename T = int32_t> T GetSubtitleIndex() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410F43C))(this);
	}
	template <typename T = Il2CppString*> T GetSubtitleText() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410F4E8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseMediaPlayer*))(Il2CppBase() + 0x410F5E8))(this);
	}

};

}
