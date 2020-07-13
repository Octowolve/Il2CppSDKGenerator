#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioInputManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioInputManager"));
	}

	template <typename T = bool> static T& initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T& audioSamplesDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T& audioFormatDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& audioFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& audioSamplesDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& audioFormatDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uint32_t> static T PostAudioInputEvent(uintptr_t akEvent, uintptr_t gameObject, uintptr_t sampleDelegate, uintptr_t formatDelegate) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A22C54))(0, akEvent, gameObject, sampleDelegate, formatDelegate);
	}
	template <typename T = uint32_t> static T PostAudioInputEvent_1(uint32_t akEventID, uintptr_t gameObject, uintptr_t sampleDelegate, uintptr_t formatDelegate) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A2311C))(0, akEventID, gameObject, sampleDelegate, formatDelegate);
	}
	template <typename T = uint32_t> static T PostAudioInputEvent_2(Il2CppString* akEventName, uintptr_t gameObject, uintptr_t sampleDelegate, uintptr_t formatDelegate) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23334))(0, akEventName, gameObject, sampleDelegate, formatDelegate);
	}
	template <typename T = bool> static T InternalAudioSamplesDelegate(uint32_t playingID, Il2CppArray<uintptr_t>* samples, uint32_t channelIndex, uint32_t frames) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x4A2288C))(0, playingID, samples, channelIndex, frames);
	}
	template <typename T = void> static T InternalAudioFormatDelegate(uint32_t playingID, uintptr_t format) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x4A22A7C))(0, playingID, format);
	}
	template <typename T = void> static T TryInitialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A22E3C))(0);
	}
	template <typename T = void> static T AddPlayingID(uint32_t playingID, uintptr_t sampleDelegate, uintptr_t formatDelegate) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A22F90))(0, playingID, sampleDelegate, formatDelegate);
	}
	template <typename T = void> static T EventCallback(uintptr_t cookie, uintptr_t type, uintptr_t callbackInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A23688))(0, cookie, type, callbackInfo);
	}

};

}
