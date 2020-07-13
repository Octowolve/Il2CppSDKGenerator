#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2778C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkAudioSettings*, uintptr_t))(Il2CppBase() + 0x4A27820))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAudioSettings*))(Il2CppBase() + 0x4A2784C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAudioSettings*))(Il2CppBase() + 0x4A278B4))(this);
	}
	template <typename T = void> T set_uNumSamplesPerFrame(uint32_t value) {
		return ((T (*)(AkAudioSettings*, uint32_t))(Il2CppBase() + 0x4A27A3C))(this, value);
	}
	template <typename T = uint32_t> T get_uNumSamplesPerFrame() {
		return ((T (*)(AkAudioSettings*))(Il2CppBase() + 0x4A27AF0))(this);
	}
	template <typename T = void> T set_uNumSamplesPerSecond(uint32_t value) {
		return ((T (*)(AkAudioSettings*, uint32_t))(Il2CppBase() + 0x4A27B9C))(this, value);
	}
	template <typename T = uint32_t> T get_uNumSamplesPerSecond() {
		return ((T (*)(AkAudioSettings*))(Il2CppBase() + 0x4A27C50))(this);
	}

};

}
