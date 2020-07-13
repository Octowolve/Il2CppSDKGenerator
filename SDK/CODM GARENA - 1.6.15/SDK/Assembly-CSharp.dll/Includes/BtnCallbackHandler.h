#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BtnCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BtnCallbackHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(BtnCallbackHandler*))(Il2CppBase() + 0x39D22D8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(BtnCallbackHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39D2374))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BtnCallbackHandler*, uintptr_t))(Il2CppBase() + 0x39D23A0))(this, result);
	}

};

}
