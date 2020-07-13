#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class AndroidMediaPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "AndroidMediaPlayer"));
	}

	template <typename T = uintptr_t> static T& s_ActivityContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_Interface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& s_bInitialised() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& s_Version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _nativeFunction_RenderEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& m_Video() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TextureHandle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_UseFastOesPath() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DurationMs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_iPlayerIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_API() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_HeadRotationEnabled() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_FocusEnabled() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> T& m_Method_Update() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Method_SetHeadRotation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_Method_GetCurrentTimeMs() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_Method_GetSourceVideoFrameRate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_Method_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Method_IsPaused() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_Method_IsFinished() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_Method_IsSeeking() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_Method_IsBuffering() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Method_IsLooping() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Method_HasVideo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_Method_HasAudio() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Method_SetFocusProps() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_Method_SetFocusEnabled() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_Method_SetFocusRotation() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Value0() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Value1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Value2() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Value4() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _textureQuality() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitialisePlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeinitPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IssuePluginEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEstimatedTotalBandwidthUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeekableTimeRanges() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLooping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLooping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasMetaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Seek() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SeekFast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTimeMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaybackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlaybackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioHeadRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAudioHeadRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioFocusRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAudioFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDurationMs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoFrameRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferingProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoDisplayRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeeking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPaused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBuffering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureFrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequiresVerticalFlip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MuteAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMuted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioTrackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAudioTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAudioTrackBitrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVideoTrackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVideoTrack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrackId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVideoTrackBitrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitForNextFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Render() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyTextureProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDateTimeSecondsSince1970() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerSupportsLinearColorSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}

	template <typename T = bool> static T InitialisePlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x382C044))(0);
	}
	template <typename T = void> static T DeinitPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x382C5CC))(0);
	}
	template <typename T = void> static T IssuePluginEvent(uintptr_t type, int32_t param) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x382BEB0))(0, type, param);
	}
	template <typename T = uintptr_t> T GetMethod(Il2CppString* methodName, Il2CppString* signature) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x382B9E8))(this, methodName, signature);
	}
	template <typename T = void> T SetOptions(bool useFastOesPath, bool showPosterFrame) {
		return ((T (*)(AndroidMediaPlayer*, bool, bool))(Il2CppBase() + 0x382BC70))(this, useFastOesPath, showPosterFrame);
	}
	template <typename T = int64_t> T GetEstimatedTotalBandwidthUsed() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382C824))(this);
	}
	template <typename T = Il2CppString*> T GetVersion() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382C9B8))(this);
	}
	template <typename T = bool> T OpenVideoFromFile(Il2CppString* path, int64_t offset, Il2CppString* httpHeaderJson, uint32_t sourceSamplerate, uint32_t sourceChannels, int32_t forceFileFormat) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppString*, int64_t, Il2CppString*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x382CAC0))(this, path, offset, httpHeaderJson, sourceSamplerate, sourceChannels, forceFileFormat);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSeekableTimeRanges() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382CE2C))(this);
	}
	template <typename T = void> T CloseVideo() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382D03C))(this);
	}
	template <typename T = void> T SetLooping(bool bLooping) {
		return ((T (*)(AndroidMediaPlayer*, bool))(Il2CppBase() + 0x382D22C))(this, bLooping);
	}
	template <typename T = bool> T IsLooping() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382D3EC))(this);
	}
	template <typename T = bool> T HasVideo() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382D5B0))(this);
	}
	template <typename T = bool> T HasAudio() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382D774))(this);
	}
	template <typename T = bool> T HasMetaData() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382D938))(this);
	}
	template <typename T = bool> T CanPlay() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382DA5C))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382DC18))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382DD44))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382DE70))(this);
	}
	template <typename T = void> T Seek(float timeMs) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x382DF9C))(this, timeMs);
	}
	template <typename T = void> T SeekFast(float timeMs) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x382E1A4))(this, timeMs);
	}
	template <typename T = float> T GetCurrentTimeMs() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382E3AC))(this);
	}
	template <typename T = void> T SetPlaybackRate(float rate) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x382E588))(this, rate);
	}
	template <typename T = float> T GetPlaybackRate() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382E758))(this);
	}
	template <typename T = void> T SetAudioHeadRotation(Il2CppQuaternion q) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x382E898))(this, q);
	}
	template <typename T = void> T ResetAudioHeadRotation() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382EDA0))(this);
	}
	template <typename T = void> T SetAudioFocusEnabled(bool enabled) {
		return ((T (*)(AndroidMediaPlayer*, bool))(Il2CppBase() + 0x382EF6C))(this, enabled);
	}
	template <typename T = void> T SetAudioFocusProperties(float offFocusLevel, float widthDegrees) {
		return ((T (*)(AndroidMediaPlayer*, float, float))(Il2CppBase() + 0x382F1E4))(this, offFocusLevel, widthDegrees);
	}
	template <typename T = void> T SetAudioFocusRotation(Il2CppQuaternion q) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x382F4EC))(this, q);
	}
	template <typename T = void> T ResetAudioFocus() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x382F904))(this);
	}
	template <typename T = float> T GetDurationMs() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830040))(this);
	}
	template <typename T = int32_t> T GetVideoWidth() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830110))(this);
	}
	template <typename T = int32_t> T GetVideoHeight() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38301E0))(this);
	}
	template <typename T = float> T GetVideoFrameRate() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38302B0))(this);
	}
	template <typename T = float> T GetBufferingProgress() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830484))(this);
	}
	template <typename T = float> T GetVideoDisplayRate() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38305DC))(this);
	}
	template <typename T = bool> T IsSeeking() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830790))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830954))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830B18))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830CDC))(this);
	}
	template <typename T = bool> T IsBuffering() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3830EA0))(this);
	}
	template <typename T = uintptr_t> T GetTexture(int32_t index) {
		return ((T (*)(AndroidMediaPlayer*, int32_t))(Il2CppBase() + 0x3831064))(this, index);
	}
	template <typename T = int32_t> T GetTextureFrameCount() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x383115C))(this);
	}
	template <typename T = bool> T RequiresVerticalFlip() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3831370))(this);
	}
	template <typename T = void> T MuteAudio(bool bMuted) {
		return ((T (*)(AndroidMediaPlayer*, bool))(Il2CppBase() + 0x3831440))(this, bMuted);
	}
	template <typename T = bool> T IsMuted() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3831600))(this);
	}
	template <typename T = void> T SetVolume(float volume) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x383173C))(this, volume);
	}
	template <typename T = float> T GetVolume() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x383190C))(this);
	}
	template <typename T = void> T SetBalance(float balance) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x3831A4C))(this, balance);
	}
	template <typename T = float> T GetBalance() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3831C1C))(this);
	}
	template <typename T = int32_t> T GetAudioTrackCount() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3831D5C))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrack() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3831E9C))(this);
	}
	template <typename T = void> T SetAudioTrack(int32_t index) {
		return ((T (*)(AndroidMediaPlayer*, int32_t))(Il2CppBase() + 0x3831FDC))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentAudioTrackId() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x383219C))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrackBitrate() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38322A0))(this);
	}
	template <typename T = int32_t> T GetVideoTrackCount() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832370))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrack() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832464))(this);
	}
	template <typename T = void> T SetVideoTrack(int32_t index) {
		return ((T (*)(AndroidMediaPlayer*, int32_t))(Il2CppBase() + 0x3832534))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentVideoTrackId() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832604))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrackBitrate() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832724))(this);
	}
	template <typename T = bool> T WaitForNextFrame(uintptr_t dummyCamera, int32_t previousFrameCount) {
		return ((T (*)(AndroidMediaPlayer*, uintptr_t, int32_t))(Il2CppBase() + 0x38327F4))(this, dummyCamera, previousFrameCount);
	}
	template <typename T = int64_t> T GetTextureTimeStamp() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832A44))(this);
	}
	template <typename T = void> T Render() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3832B88))(this);
	}
	template <typename T = void> T ApplyTextureProperties(uintptr_t texture) {
		return ((T (*)(AndroidMediaPlayer*, uintptr_t))(Il2CppBase() + 0x38338F8))(this, texture);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38339DC))(this);
	}
	template <typename T = double> T GetCurrentDateTimeSecondsSince1970() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3833BCC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3833D10))(this);
	}
	template <typename T = bool> T PlayerSupportsLinearColorSpace() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x383411C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTextureTransform() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38341EC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834328))(this);
	}
	template <typename T = int64_t> T xLuaBaseProxy_GetEstimatedTotalBandwidthUsed() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38347A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetSeekableTimeRanges() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38347B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseVideo() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38347B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAudioHeadRotation(Il2CppQuaternion P0) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x38347C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetAudioHeadRotation() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x38347E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAudioFocusEnabled(bool P0) {
		return ((T (*)(AndroidMediaPlayer*, bool))(Il2CppBase() + 0x38347EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetAudioFocusProperties(float P0, float P1) {
		return ((T (*)(AndroidMediaPlayer*, float, float))(Il2CppBase() + 0x38347F4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetAudioFocusRotation(Il2CppQuaternion P0) {
		return ((T (*)(AndroidMediaPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x38347FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetAudioFocus() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834820))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetBalance(float P0) {
		return ((T (*)(AndroidMediaPlayer*, float))(Il2CppBase() + 0x3834828))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetBalance() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834830))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_WaitForNextFrame(uintptr_t P0, int32_t P1) {
		return ((T (*)(AndroidMediaPlayer*, uintptr_t, int32_t))(Il2CppBase() + 0x3834838))(this, P0, P1);
	}
	template <typename T = int64_t> T xLuaBaseProxy_GetTextureTimeStamp() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyTextureProperties(uintptr_t P0) {
		return ((T (*)(AndroidMediaPlayer*, uintptr_t))(Il2CppBase() + 0x3834848))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834850))(this);
	}
	template <typename T = double> T xLuaBaseProxy_GetCurrentDateTimeSecondsSince1970() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834858))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_PlayerSupportsLinearColorSpace() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834860))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_GetTextureTransform() {
		return ((T (*)(AndroidMediaPlayer*))(Il2CppBase() + 0x3834868))(this);
	}

};

}
