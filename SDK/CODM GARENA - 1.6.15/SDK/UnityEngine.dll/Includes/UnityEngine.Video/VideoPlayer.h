#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Video {

class VideoPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Video", "VideoPlayer"));
	}

	template <typename T = uintptr_t> T& prepareCompleted() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& loopPointReached() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& started() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& frameDropped() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& errorReceived() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& seekCompleted() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& frameReady() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> static T InvokePrepareCompletedCallback_Internal(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3D8F0))(0, source);
	}
	template <typename T = void> static T InvokeFrameReadyCallback_Internal(uintptr_t source, int64_t frameIdx) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x4D3D9BC))(0, source, frameIdx);
	}
	template <typename T = void> static T InvokeLoopPointReachedCallback_Internal(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3DAE4))(0, source);
	}
	template <typename T = void> static T InvokeStartedCallback_Internal(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3DB18))(0, source);
	}
	template <typename T = void> static T InvokeFrameDroppedCallback_Internal(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3DB4C))(0, source);
	}
	template <typename T = void> static T InvokeErrorReceivedCallback_Internal(uintptr_t source, Il2CppString* errorStr) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4D3DB80))(0, source, errorStr);
	}
	template <typename T = void> static T InvokeSeekCompletedCallback_Internal(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D3DC78))(0, source);
	}

};

}
