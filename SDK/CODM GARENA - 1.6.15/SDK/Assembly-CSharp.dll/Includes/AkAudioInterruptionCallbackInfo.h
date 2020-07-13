#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioInterruptionCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioInterruptionCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A24130))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkAudioInterruptionCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4A241C4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAudioInterruptionCallbackInfo*))(Il2CppBase() + 0x4A241F0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAudioInterruptionCallbackInfo*))(Il2CppBase() + 0x4A24258))(this);
	}
	template <typename T = bool> T get_bEnterInterruption() {
		return ((T (*)(AkAudioInterruptionCallbackInfo*))(Il2CppBase() + 0x4A243E0))(this);
	}

};

}
