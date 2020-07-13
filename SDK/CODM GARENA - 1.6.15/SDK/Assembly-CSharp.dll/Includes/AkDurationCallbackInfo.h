#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkDurationCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkDurationCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48FA1E0))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkDurationCallbackInfo*, uintptr_t))(Il2CppBase() + 0x48FA274))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA3F0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA4C8))(this);
	}
	template <typename T = float> T get_fDuration() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA7EC))(this);
	}
	template <typename T = float> T get_fEstimatedDuration() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA898))(this);
	}
	template <typename T = uint32_t> T get_audioNodeID() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA944))(this);
	}
	template <typename T = uint32_t> T get_mediaID() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FA9F0))(this);
	}
	template <typename T = bool> T get_bStreaming() {
		return ((T (*)(AkDurationCallbackInfo*))(Il2CppBase() + 0x48FAA9C))(this);
	}

};

}
