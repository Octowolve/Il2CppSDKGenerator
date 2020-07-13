#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class IMediaControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "IMediaControl"));
	}


	template <typename T = bool> T OpenVideoFromFile(Il2CppString* path, int64_t offset, Il2CppString* httpHeaderJson, uint32_t sourceSamplerate, uint32_t sourceChannels, int32_t forceFileFormat) {
		return ((T (*)(IMediaControl*, Il2CppString*, int64_t, Il2CppString*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x0))(this, path, offset, httpHeaderJson, sourceSamplerate, sourceChannels, forceFileFormat);
	}
	template <typename T = bool> T OpenVideoFromBuffer(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(IMediaControl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, buffer);
	}
	template <typename T = bool> T StartOpenVideoFromBuffer(uint64_t length) {
		return ((T (*)(IMediaControl*, uint64_t))(Il2CppBase() + 0x0))(this, length);
	}
	template <typename T = bool> T AddChunkToVideoBuffer(Il2CppArray<uintptr_t>* chunk, uint64_t offset, uint64_t length) {
		return ((T (*)(IMediaControl*, Il2CppArray<uintptr_t>*, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, chunk, offset, length);
	}
	template <typename T = bool> T EndOpenVideoFromBuffer() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CloseVideo() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetLooping(bool bLooping) {
		return ((T (*)(IMediaControl*, bool))(Il2CppBase() + 0x0))(this, bLooping);
	}
	template <typename T = bool> T IsLooping() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasMetaData() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanPlay() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsSeeking() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPaused() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsBuffering() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Rewind() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Seek(float timeMs) {
		return ((T (*)(IMediaControl*, float))(Il2CppBase() + 0x0))(this, timeMs);
	}
	template <typename T = void> T SeekFast(float timeMs) {
		return ((T (*)(IMediaControl*, float))(Il2CppBase() + 0x0))(this, timeMs);
	}
	template <typename T = void> T SeekWithTolerance(float timeMs, float beforeMs, float afterMs) {
		return ((T (*)(IMediaControl*, float, float, float))(Il2CppBase() + 0x0))(this, timeMs, beforeMs, afterMs);
	}
	template <typename T = float> T GetCurrentTimeMs() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = double> T GetCurrentDateTimeSecondsSince1970() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetSeekableTimeRanges() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetPlaybackRate() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetPlaybackRate(float rate) {
		return ((T (*)(IMediaControl*, float))(Il2CppBase() + 0x0))(this, rate);
	}
	template <typename T = void> T MuteAudio(bool bMute) {
		return ((T (*)(IMediaControl*, bool))(Il2CppBase() + 0x0))(this, bMute);
	}
	template <typename T = bool> T IsMuted() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetVolume(float volume) {
		return ((T (*)(IMediaControl*, float))(Il2CppBase() + 0x0))(this, volume);
	}
	template <typename T = void> T SetBalance(float balance) {
		return ((T (*)(IMediaControl*, float))(Il2CppBase() + 0x0))(this, balance);
	}
	template <typename T = float> T GetVolume() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetBalance() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrack() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAudioTrack(int32_t index) {
		return ((T (*)(IMediaControl*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = int32_t> T GetCurrentVideoTrack() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetVideoTrack(int32_t index) {
		return ((T (*)(IMediaControl*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = float> T GetBufferingProgress() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetBufferedTimeRangeCount() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T GetBufferedTimeRange(int32_t index, uintptr_t startTimeMs, uintptr_t endTimeMs) {
		return ((T (*)(IMediaControl*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, index, startTimeMs, endTimeMs);
	}
	template <typename T = uintptr_t> T GetLastError() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T GetLastExtendedErrorCode() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetTextureProperties(uintptr_t filterMode, uintptr_t wrapMode, int32_t anisoLevel) {
		return ((T (*)(IMediaControl*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, filterMode, wrapMode, anisoLevel);
	}
	template <typename T = void> T GrabAudio(Il2CppArray<uintptr_t>* buffer, int32_t floatCount, int32_t channelCount) {
		return ((T (*)(IMediaControl*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, floatCount, channelCount);
	}
	template <typename T = int32_t> T GetNumAudioChannels() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAudioHeadRotation(Il2CppQuaternion q) {
		return ((T (*)(IMediaControl*, Il2CppQuaternion))(Il2CppBase() + 0x0))(this, q);
	}
	template <typename T = void> T ResetAudioHeadRotation() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetAudioChannelMode(uintptr_t channelMode) {
		return ((T (*)(IMediaControl*, uintptr_t))(Il2CppBase() + 0x0))(this, channelMode);
	}
	template <typename T = void> T SetAudioFocusEnabled(bool enabled) {
		return ((T (*)(IMediaControl*, bool))(Il2CppBase() + 0x0))(this, enabled);
	}
	template <typename T = void> T SetAudioFocusProperties(float offFocusLevel, float widthDegrees) {
		return ((T (*)(IMediaControl*, float, float))(Il2CppBase() + 0x0))(this, offFocusLevel, widthDegrees);
	}
	template <typename T = void> T SetAudioFocusRotation(Il2CppQuaternion q) {
		return ((T (*)(IMediaControl*, Il2CppQuaternion))(Il2CppBase() + 0x0))(this, q);
	}
	template <typename T = void> T ResetAudioFocus() {
		return ((T (*)(IMediaControl*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T WaitForNextFrame(uintptr_t dummyCamera, int32_t previousFrameCount) {
		return ((T (*)(IMediaControl*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, dummyCamera, previousFrameCount);
	}
	template <typename T = void> T SetPlayWithoutBuffering(bool playWithoutBuffering) {
		return ((T (*)(IMediaControl*, bool))(Il2CppBase() + 0x0))(this, playWithoutBuffering);
	}
	template <typename T = void> T SetKeyServerURL(Il2CppString* url) {
		return ((T (*)(IMediaControl*, Il2CppString*))(Il2CppBase() + 0x0))(this, url);
	}
	template <typename T = void> T SetKeyServerAuthToken(Il2CppString* token) {
		return ((T (*)(IMediaControl*, Il2CppString*))(Il2CppBase() + 0x0))(this, token);
	}
	template <typename T = void> T SetDecryptionKeyBase64(Il2CppString* key) {
		return ((T (*)(IMediaControl*, Il2CppString*))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T SetDecryptionKey(Il2CppArray<uintptr_t>* key) {
		return ((T (*)(IMediaControl*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, key);
	}

};

}
