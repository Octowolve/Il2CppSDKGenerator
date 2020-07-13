#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VoidDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VoidDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go) {
		return ((T (*)(VoidDelegate*, uintptr_t))(Il2CppBase() + 0x39C1130))(this, go);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, uintptr_t callback, uintptr_t object) {
		return ((T (*)(VoidDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C4968))(this, go, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(VoidDelegate*, uintptr_t))(Il2CppBase() + 0x39C4994))(this, result);
	}

};

}
