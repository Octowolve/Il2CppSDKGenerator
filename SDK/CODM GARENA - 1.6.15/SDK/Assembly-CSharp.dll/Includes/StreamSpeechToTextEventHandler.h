#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StreamSpeechToTextEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StreamSpeechToTextEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, int32_t error, Il2CppString* result, Il2CppString* voicePath) {
		return ((T (*)(StreamSpeechToTextEventHandler*, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4542B88))(this, code, error, result, voicePath);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, int32_t error, Il2CppString* result, Il2CppString* voicePath, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StreamSpeechToTextEventHandler*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454CC64))(this, code, error, result, voicePath, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StreamSpeechToTextEventHandler*, uintptr_t))(Il2CppBase() + 0x454CD50))(this, result);
	}

};

}
