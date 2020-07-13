#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RichStateChangeDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RichStateChangeDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t rstate) {
		return ((T (*)(RichStateChangeDelegate*, uintptr_t))(Il2CppBase() + 0x49FD4A8))(this, rstate);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t rstate, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RichStateChangeDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49FD518))(this, rstate, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RichStateChangeDelegate*, uintptr_t))(Il2CppBase() + 0x49FD5D4))(this, result);
	}

};

}
