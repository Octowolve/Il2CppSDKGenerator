#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEventCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEventCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48FE480))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkEventCallbackInfo*, uintptr_t))(Il2CppBase() + 0x48FA330))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkEventCallbackInfo*))(Il2CppBase() + 0x48FA460))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkEventCallbackInfo*))(Il2CppBase() + 0x48FA658))(this);
	}
	template <typename T = uint32_t> T get_playingID() {
		return ((T (*)(AkEventCallbackInfo*))(Il2CppBase() + 0x48FE514))(this);
	}
	template <typename T = uint32_t> T get_eventID() {
		return ((T (*)(AkEventCallbackInfo*))(Il2CppBase() + 0x48FE5C0))(this);
	}

};

}
