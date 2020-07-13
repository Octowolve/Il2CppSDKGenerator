#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkCallbackSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkCallbackSerializer"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48F6664))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkCallbackSerializer*, uintptr_t))(Il2CppBase() + 0x48F66F8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkCallbackSerializer*))(Il2CppBase() + 0x48F6724))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkCallbackSerializer*))(Il2CppBase() + 0x48F678C))(this);
	}
	template <typename T = uintptr_t> static T Init(uintptr_t in_pMemory, uint32_t in_uSize) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x48F6914))(0, in_pMemory, in_uSize);
	}
	template <typename T = void> static T Term() {
		return ((T (*)(void *))(Il2CppBase() + 0x48F69C4))(0);
	}
	template <typename T = uintptr_t> static T Lock() {
		return ((T (*)(void *))(Il2CppBase() + 0x48F6A64))(0);
	}
	template <typename T = void> static T SetLocalOutput(uint32_t in_uErrorLevel) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x48F6B04))(0, in_uErrorLevel);
	}
	template <typename T = void> static T Unlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x48F6BAC))(0);
	}
	template <typename T = uintptr_t> static T AudioSourceChangeCallbackFunc(bool in_bOtherAudioPlaying, uintptr_t in_pCookie) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x48F6C4C))(0, in_bOtherAudioPlaying, in_pCookie);
	}

};

}
