#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RSTSHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RSTSHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t nCode, uintptr_t srcLang, uintptr_t targetLang, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration) {
		return ((T (*)(RSTSHandler*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x45432F0))(this, nCode, srcLang, targetLang, srcText, targetText, targetFileID, srcFileDuration);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t nCode, uintptr_t srcLang, uintptr_t targetLang, Il2CppString* srcText, Il2CppString* targetText, Il2CppString* targetFileID, int32_t srcFileDuration, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RSTSHandler*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C580))(this, nCode, srcLang, targetLang, srcText, targetText, targetFileID, srcFileDuration, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RSTSHandler*, uintptr_t))(Il2CppBase() + 0x454C6A0))(this, result);
	}

};

}
