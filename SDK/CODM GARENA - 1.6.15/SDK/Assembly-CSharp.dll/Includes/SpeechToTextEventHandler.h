#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpeechToTextEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeechToTextEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* fileID, Il2CppString* result) {
		return ((T (*)(SpeechToTextEventHandler*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4542AE0))(this, code, fileID, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* fileID, Il2CppString* result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SpeechToTextEventHandler*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C854))(this, code, fileID, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SpeechToTextEventHandler*, uintptr_t))(Il2CppBase() + 0x454C918))(this, result);
	}

};

}
