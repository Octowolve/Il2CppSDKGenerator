#pragma once
#include <Il2Cpp/Il2Cpp.h>

class clickCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "clickCallbackHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(clickCallbackHandler*))(Il2CppBase() + 0x1AAC47C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(clickCallbackHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1AAC50C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(clickCallbackHandler*, uintptr_t))(Il2CppBase() + 0x1AAC538))(this, result);
	}

};

}
