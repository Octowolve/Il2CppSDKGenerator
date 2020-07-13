#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMusicSyncCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMusicSyncCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x49107F0))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMusicSyncCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4910884))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910944))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x49109AC))(this);
	}
	template <typename T = uint32_t> T get_playingID() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910B40))(this);
	}
	template <typename T = int32_t> T get_segmentInfo_iCurrentPosition() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910BEC))(this);
	}
	template <typename T = int32_t> T get_segmentInfo_iPreEntryDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910C98))(this);
	}
	template <typename T = int32_t> T get_segmentInfo_iActiveDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910D44))(this);
	}
	template <typename T = int32_t> T get_segmentInfo_iPostExitDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910DF0))(this);
	}
	template <typename T = int32_t> T get_segmentInfo_iRemainingLookAheadTime() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910E9C))(this);
	}
	template <typename T = float> T get_segmentInfo_fBeatDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910F48))(this);
	}
	template <typename T = float> T get_segmentInfo_fBarDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x4910FF4))(this);
	}
	template <typename T = float> T get_segmentInfo_fGridDuration() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x49110A0))(this);
	}
	template <typename T = float> T get_segmentInfo_fGridOffset() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x491114C))(this);
	}
	template <typename T = uintptr_t> T get_musicSyncType() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x49111F8))(this);
	}
	template <typename T = Il2CppString*> T get_userCueName() {
		return ((T (*)(AkMusicSyncCallbackInfo*))(Il2CppBase() + 0x49112A4))(this);
	}

};

}
