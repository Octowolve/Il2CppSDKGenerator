#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyMessageKeyCompleteEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyMessageKeyCompleteEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code) {
		return ((T (*)(ApplyMessageKeyCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454288C))(this, code);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApplyMessageKeyCompleteEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454B5E4))(this, code, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApplyMessageKeyCompleteEventHandler*, uintptr_t))(Il2CppBase() + 0x454B6A0))(this, result);
	}

};

}
