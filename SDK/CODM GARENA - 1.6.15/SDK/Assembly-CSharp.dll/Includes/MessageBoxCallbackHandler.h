#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageBoxCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageBoxCallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(MessageBoxCallbackHandler*, uintptr_t))(Il2CppBase() + 0x22DBE30))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MessageBoxCallbackHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22DBF6C))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MessageBoxCallbackHandler*, uintptr_t))(Il2CppBase() + 0x22DC028))(this, result);
	}

};

}
