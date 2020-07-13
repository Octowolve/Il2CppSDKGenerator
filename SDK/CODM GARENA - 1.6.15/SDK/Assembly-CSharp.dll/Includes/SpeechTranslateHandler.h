#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpeechTranslateHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeechTranslateHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t nCode, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration) {
		return ((T (*)(SpeechTranslateHandler*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x454322C))(this, nCode, srcText, targetText, targetFileID, srcFileDuration);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t nCode, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SpeechTranslateHandler*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C9B4))(this, nCode, srcText, targetText, targetFileID, srcFileDuration, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SpeechTranslateHandler*, uintptr_t))(Il2CppBase() + 0x454CAAC))(this, result);
	}

};

}
