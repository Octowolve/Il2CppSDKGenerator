#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoolDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoolDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go, bool state) {
		return ((T (*)(BoolDelegate*, uintptr_t, bool))(Il2CppBase() + 0x39B3170))(this, go, state);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, bool state, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BoolDelegate*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C3DA0))(this, go, state, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BoolDelegate*, uintptr_t))(Il2CppBase() + 0x39C3E68))(this, result);
	}

};

}
