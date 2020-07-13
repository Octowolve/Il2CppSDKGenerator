#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMusicPlaylistCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMusicPlaylistCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x490FB7C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMusicPlaylistCallbackInfo*, uintptr_t))(Il2CppBase() + 0x490FC10))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x490FCCC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x490FD3C))(this);
	}
	template <typename T = uint32_t> T get_playlistID() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x490FECC))(this);
	}
	template <typename T = uint32_t> T get_uNumPlaylistItems() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x490FF78))(this);
	}
	template <typename T = uint32_t> T get_uPlaylistSelection() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x4910024))(this);
	}
	template <typename T = uint32_t> T get_uPlaylistItemDone() {
		return ((T (*)(AkMusicPlaylistCallbackInfo*))(Il2CppBase() + 0x49100D0))(this);
	}

};

}
