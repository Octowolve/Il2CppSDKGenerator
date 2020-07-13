#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class IMediaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "IMediaInfo"));
	}


	template <typename T = float> T GetDurationMs() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetVideoWidth() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetVideoHeight() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppRect> T GetCropRect() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetVideoFrameRate() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetVideoDisplayRate() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasVideo() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasAudio() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetAudioTrackCount() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAudioTrackId(int32_t index) {
		return ((T (*)(IMediaInfo*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentAudioTrackId() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentAudioTrackBitrate() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetVideoTrackCount() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetVideoTrackId(int32_t index) {
		return ((T (*)(IMediaInfo*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = Il2CppString*> T GetCurrentVideoTrackId() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentVideoTrackBitrate() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetPlayerDescription() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T PlayerSupportsLinearColorSpace() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsPlaybackStalled() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTextureTransform() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T GetEstimatedTotalBandwidthUsed() {
		return ((T (*)(IMediaInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
