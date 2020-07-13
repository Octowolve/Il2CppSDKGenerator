#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AudioSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AudioSettings"));
	}

	template <typename T = uintptr_t> static T& OnAudioConfigurationChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_driverCapabilities() {
		return ((T (*)(void *))(Il2CppBase() + 0x469D104))(0);
	}
	template <typename T = uintptr_t> static T get_speakerMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x469D194))(0);
	}
	template <typename T = int32_t> static T get_outputSampleRate() {
		return ((T (*)(void *))(Il2CppBase() + 0x469D224))(0);
	}
	template <typename T = void> static T GetDSPBufferSize(uintptr_t* bufferLength, uintptr_t* numBuffers) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x469D2B4))(0, bufferLength, numBuffers);
	}
	template <typename T = void> static T InvokeOnAudioConfigurationChanged(bool deviceWasChanged) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x469D354))(0, deviceWasChanged);
	}

};

}
