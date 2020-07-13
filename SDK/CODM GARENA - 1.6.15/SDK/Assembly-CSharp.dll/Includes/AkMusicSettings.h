#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMusicSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMusicSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4910264))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMusicSettings*, uintptr_t))(Il2CppBase() + 0x49102F8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMusicSettings*))(Il2CppBase() + 0x4910324))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMusicSettings*))(Il2CppBase() + 0x491038C))(this);
	}
	template <typename T = void> T set_fStreamingLookAheadRatio(float value) {
		return ((T (*)(AkMusicSettings*, float))(Il2CppBase() + 0x4910514))(this, value);
	}
	template <typename T = float> T get_fStreamingLookAheadRatio() {
		return ((T (*)(AkMusicSettings*))(Il2CppBase() + 0x49105C8))(this);
	}

};

}
