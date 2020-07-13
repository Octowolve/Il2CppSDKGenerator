#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class MediaPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "MediaPlayer"));
	}

	template <typename T = uintptr_t> T& m_VideoLocation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_VideoPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_AutoOpen() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_AutoStart() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& m_Loop() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = float> T& m_Volume() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Balance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Muted() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PlaybackRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_Resample() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ResampleMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_ResampleBufferSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Resampler() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_Persistent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_videoMapping() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_StereoPacking() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_AlphaPacking() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_DisplayDebugStereoColorTint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_FilterMode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_WrapMode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_AnisoLevel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_LoadSubtitles() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_SubtitleLocation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_queueSubtitleLocation() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& m_SubtitlePath() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& m_queueSubtitlePath() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_loadSubtitlesRoutine() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_AudioHeadTransform() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_AudioFocusEnabled() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_AudioFocusTransform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_AudioFocusWidthDegrees() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_AudioFocusOffLevelDB() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_events() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_eventMask() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_forceFileFormat() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _pauseMediaOnAppPause() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _playMediaOnAppUnpause() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = uintptr_t> T& m_Control() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Player() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_Subtitles() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Dispose() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_VideoOpened() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_AutoStartTriggered() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = bool> T& m_WasPlayingOnPause() {
		return *(T*)((uintptr_t)this + 0xAE);
	}
	template <typename T = uintptr_t> T& _renderingCoroutine() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> static T& s_GlobalStartup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_EventFired_ReadyToPlay() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_EventFired_Started() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = bool> T& m_EventFired_FirstFrameReady() {
		return *(T*)((uintptr_t)this + 0xB6);
	}
	template <typename T = bool> T& m_EventFired_FinishedPlaying() {
		return *(T*)((uintptr_t)this + 0xB7);
	}
	template <typename T = bool> T& m_EventFired_MetaDataReady() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_EventState_PlaybackStalled() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& m_EventState_PlaybackBuffering() {
		return *(T*)((uintptr_t)this + 0xBA);
	}
	template <typename T = bool> T& m_EventState_PlaybackSeeking() {
		return *(T*)((uintptr_t)this + 0xBB);
	}
	template <typename T = int32_t> T& m_EventState_PreviousWidth() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_EventState_PreviousHeight() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& m_previousSubtitleIndex() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& m_DummyCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_FinishedFrameOpenCheck() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uint32_t> T& m_sourceSampleRate() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uint32_t> T& m_sourceChannels() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_manuallySetAudioSourceProperties() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _optionsWindows() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _optionsMacOSX() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& _optionsIOS() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _optionsTVOS() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& _optionsAndroid() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _optionsWindowsPhone() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& _optionsWindowsUWP() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _optionsWebGL() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& _optionsPS4() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOpenChunkedVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChunkToVideoBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndOpenChunkedVideoFromBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSubtitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSubtitlesCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableSubtitles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenVideoFromBufferInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOpenVideoFromBufferInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChunkToBufferInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndOpenVideoFromBufferInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OpenVideoFromFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaybackOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Stop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rewind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateResampler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRenderCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRenderCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinalRenderCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlatformOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStreamingAssetsPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformVideoApiString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformFileOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformHttpHeaderJson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlatformMediaPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceWaitForNewFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAudioFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAudioHeadTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateErrors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHandleEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEventIfPossible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanFireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDummyCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractFrameCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractFrameAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ExtractFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}

	template <typename T = uintptr_t> T get_FrameResampler() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A30))(this);
	}
	template <typename T = bool> T get_Persistent() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A38))(this);
	}
	template <typename T = void> T set_Persistent(bool value) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x4114A40))(this, value);
	}
	template <typename T = uintptr_t> T get_VideoLayoutMapping() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A48))(this);
	}
	template <typename T = void> T set_VideoLayoutMapping(uintptr_t value) {
		return ((T (*)(MediaPlayer*, uintptr_t))(Il2CppBase() + 0x4114A50))(this, value);
	}
	template <typename T = uintptr_t> T get_Info() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A58))(this);
	}
	template <typename T = uintptr_t> T get_Control() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A60))(this);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A68))(this);
	}
	template <typename T = uintptr_t> T get_TextureProducer() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A70))(this);
	}
	template <typename T = uintptr_t> T get_Subtitles() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A78))(this);
	}
	template <typename T = uintptr_t> T get_Events() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114A80))(this);
	}
	template <typename T = bool> T get_VideoOpened() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C04))(this);
	}
	template <typename T = bool> T get_PauseMediaOnAppPause() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C0C))(this);
	}
	template <typename T = void> T set_PauseMediaOnAppPause(bool value) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x4114C14))(this, value);
	}
	template <typename T = bool> T get_PlayMediaOnAppUnpause() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C1C))(this);
	}
	template <typename T = void> T set_PlayMediaOnAppUnpause(bool value) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x4114C24))(this, value);
	}
	template <typename T = uintptr_t> T get_ForceFileFormat() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C2C))(this);
	}
	template <typename T = void> T set_ForceFileFormat(uintptr_t value) {
		return ((T (*)(MediaPlayer*, uintptr_t))(Il2CppBase() + 0x4114C34))(this, value);
	}
	template <typename T = void> T set_AudioHeadTransform(uintptr_t value) {
		return ((T (*)(MediaPlayer*, uintptr_t))(Il2CppBase() + 0x4114C3C))(this, value);
	}
	template <typename T = uintptr_t> T get_AudioHeadTransform() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C44))(this);
	}
	template <typename T = bool> T get_AudioFocusEnabled() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C4C))(this);
	}
	template <typename T = void> T set_AudioFocusEnabled(bool value) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x4114C54))(this, value);
	}
	template <typename T = float> T get_AudioFocusOffLevelDB() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C5C))(this);
	}
	template <typename T = void> T set_AudioFocusOffLevelDB(float value) {
		return ((T (*)(MediaPlayer*, float))(Il2CppBase() + 0x4114C64))(this, value);
	}
	template <typename T = float> T get_AudioFocusWidthDegrees() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C6C))(this);
	}
	template <typename T = void> T set_AudioFocusWidthDegrees(float value) {
		return ((T (*)(MediaPlayer*, float))(Il2CppBase() + 0x4114C74))(this, value);
	}
	template <typename T = uintptr_t> T get_AudioFocusTransform() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C7C))(this);
	}
	template <typename T = void> T set_AudioFocusTransform(uintptr_t value) {
		return ((T (*)(MediaPlayer*, uintptr_t))(Il2CppBase() + 0x4114C84))(this, value);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsWindows() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C8C))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsMacOSX() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C94))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsIOS() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114C9C))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsTVOS() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CA4))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsAndroid() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CAC))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsWindowsPhone() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CB4))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsWindowsUWP() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CBC))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsWebGL() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CC4))(this);
	}
	template <typename T = uintptr_t> T get_PlatformOptionsPS4() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CCC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114CD4))(this);
	}
	template <typename T = void> T Initialise() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4114E04))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4115304))(this);
	}
	template <typename T = bool> T OpenVideoFromFile(uintptr_t location, Il2CppString* path, bool autoPlay) {
		return ((T (*)(MediaPlayer*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x4116198))(this, location, path, autoPlay);
	}
	template <typename T = bool> T OpenVideoFromBuffer(Il2CppArray<uintptr_t>* buffer, bool autoPlay) {
		return ((T (*)(MediaPlayer*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x41162B8))(this, buffer, autoPlay);
	}
	template <typename T = bool> T StartOpenChunkedVideoFromBuffer(uint64_t length, bool autoPlay) {
		return ((T (*)(MediaPlayer*, uint64_t, bool))(Il2CppBase() + 0x411673C))(this, length, autoPlay);
	}
	template <typename T = bool> T AddChunkToVideoBuffer(Il2CppArray<uintptr_t>* chunk, uint64_t offset, uint64_t chunkSize) {
		return ((T (*)(MediaPlayer*, Il2CppArray<uintptr_t>*, uint64_t, uint64_t))(Il2CppBase() + 0x4116BD4))(this, chunk, offset, chunkSize);
	}
	template <typename T = bool> T EndOpenChunkedVideoFromBuffer() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4116ECC))(this);
	}
	template <typename T = bool> T get_SubtitlesEnabled() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117138))(this);
	}
	template <typename T = Il2CppString*> T get_SubtitlePath() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117140))(this);
	}
	template <typename T = uintptr_t> T get_SubtitleLocation() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117148))(this);
	}
	template <typename T = bool> T EnableSubtitles(uintptr_t fileLocation, Il2CppString* filePath) {
		return ((T (*)(MediaPlayer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4115AAC))(this, fileLocation, filePath);
	}
	template <typename T = uintptr_t> T LoadSubtitlesCoroutine(Il2CppString* url, uintptr_t fileLocation, Il2CppString* filePath) {
		return ((T (*)(MediaPlayer*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41173B0))(this, url, fileLocation, filePath);
	}
	template <typename T = void> T DisableSubtitles() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x41174FC))(this);
	}
	template <typename T = bool> T OpenVideoFromBufferInternal(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(MediaPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41163EC))(this, buffer);
	}
	template <typename T = bool> T StartOpenVideoFromBufferInternal(uint64_t length) {
		return ((T (*)(MediaPlayer*, uint64_t))(Il2CppBase() + 0x4116878))(this, length);
	}
	template <typename T = bool> T AddChunkToBufferInternal(Il2CppArray<uintptr_t>* chunk, uint64_t offset, uint64_t chunkSize) {
		return ((T (*)(MediaPlayer*, Il2CppArray<uintptr_t>*, uint64_t, uint64_t))(Il2CppBase() + 0x4116CEC))(this, chunk, offset, chunkSize);
	}
	template <typename T = bool> T EndOpenVideoFromBufferInternal() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4116FA0))(this);
	}
	template <typename T = bool> T OpenVideoFromFile_1() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4115484))(this);
	}
	template <typename T = void> T SetPlaybackOptions() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117A38))(this);
	}
	template <typename T = void> T CloseVideo() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117730))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118660))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118864))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118A50))(this);
	}
	template <typename T = void> T Rewind(bool pause) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x4118BA4))(this, pause);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118D28))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411A144))(this);
	}
	template <typename T = void> T UpdateResampler() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411A218))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411BADC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411BC60))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411BDD4))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411C09C))(this);
	}
	template <typename T = void> T StartRenderCoroutine() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x41160A4))(this);
	}
	template <typename T = void> T StopRenderCoroutine() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118574))(this);
	}
	template <typename T = uintptr_t> T FinalRenderCapture() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411C308))(this);
	}
	template <typename T = uintptr_t> static T GetPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x4117150))(0);
	}
	template <typename T = uintptr_t> T GetCurrentPlatformOptions() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4117968))(this);
	}
	template <typename T = Il2CppString*> static T GetPath(uintptr_t location) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x411C420))(0, location);
	}
	template <typename T = Il2CppString*> static T GetStreamingAssetsPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x411C668))(0);
	}
	template <typename T = Il2CppString*> static T GetFilePath(Il2CppString* path, uintptr_t location) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x411C738))(0, path, location);
	}
	template <typename T = Il2CppString*> T GetPlatformVideoApiString() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411C91C))(this);
	}
	template <typename T = int64_t> T GetPlatformFileOffset() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118090))(this);
	}
	template <typename T = Il2CppString*> T GetPlatformHttpHeaderJson() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4118178))(this);
	}
	template <typename T = Il2CppString*> T GetPlatformFilePath(uintptr_t platform, uintptr_t filePath, uintptr_t fileLocation) {
		return ((T (*)(MediaPlayer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4117218))(this, platform, filePath, fileLocation);
	}
	template <typename T = uintptr_t> T CreatePlatformMediaPlayer() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x411CA74))(this);
	}
	template <typename T = bool> T ForceWaitForNewFrame(int32_t lastFrameCount, float timeoutMs) {
		return ((T (*)(MediaPlayer*, int32_t, float))(Il2CppBase() + 0x411CF28))(this, lastFrameCount, timeoutMs);
	}
	template <typename T = void> T UpdateAudioFocus() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4119348))(this);
	}
	template <typename T = void> T UpdateAudioHeadTransform() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x41190C4))(this);
	}
	template <typename T = void> T UpdateErrors() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4119694))(this);
	}
	template <typename T = void> T UpdateEvents() {
		return ((T (*)(MediaPlayer*))(Il2CppBase() + 0x4119924))(this);
	}
	template <typename T = bool> T IsHandleEvent(uintptr_t eventType) {
		return ((T (*)(MediaPlayer*, uintptr_t))(Il2CppBase() + 0x41183CC))(this, eventType);
	}
	template <typename T = bool> T FireEventIfPossible(uintptr_t eventType, bool hasFired) {
		return ((T (*)(MediaPlayer*, uintptr_t, bool))(Il2CppBase() + 0x411D354))(this, eventType, hasFired);
	}
	template <typename T = bool> T CanFireEvent(uintptr_t et, bool hasFired) {
		return ((T (*)(MediaPlayer*, uintptr_t, bool))(Il2CppBase() + 0x411D4A8))(this, et, hasFired);
	}
	template <typename T = void> T OnApplicationFocus(bool focusStatus) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x411E070))(this, focusStatus);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(MediaPlayer*, bool))(Il2CppBase() + 0x411E208))(this, pauseStatus);
	}
	template <typename T = uintptr_t> static T GetDummyCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x411E454))(0);
	}
	template <typename T = uintptr_t> T ExtractFrameCoroutine(uintptr_t target, uintptr_t callback, float timeSeconds, bool accurateSeek, int32_t timeoutMs, int32_t timeThresholdMs) {
		return ((T (*)(MediaPlayer*, uintptr_t, uintptr_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x411E8A8))(this, target, callback, timeSeconds, accurateSeek, timeoutMs, timeThresholdMs);
	}
	template <typename T = void> T ExtractFrameAsync(uintptr_t target, uintptr_t callback, float timeSeconds, bool accurateSeek, int32_t timeoutMs, int32_t timeThresholdMs) {
		return ((T (*)(MediaPlayer*, uintptr_t, uintptr_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x411EA28))(this, target, callback, timeSeconds, accurateSeek, timeoutMs, timeThresholdMs);
	}
	template <typename T = uintptr_t> T ExtractFrame(uintptr_t target, float timeSeconds, bool accurateSeek, int32_t timeoutMs, int32_t timeThresholdMs) {
		return ((T (*)(MediaPlayer*, uintptr_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x411EB68))(this, target, timeSeconds, accurateSeek, timeoutMs, timeThresholdMs);
	}
	template <typename T = uintptr_t> T ExtractFrame_1(float timeSeconds, bool accurateSeek, int32_t timeoutMs, int32_t timeThresholdMs) {
		return ((T (*)(MediaPlayer*, float, bool, int32_t, int32_t))(Il2CppBase() + 0x411EE48))(this, timeSeconds, accurateSeek, timeoutMs, timeThresholdMs);
	}

};

}
