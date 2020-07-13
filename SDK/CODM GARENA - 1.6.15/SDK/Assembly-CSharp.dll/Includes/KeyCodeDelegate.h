#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyCodeDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyCodeDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go, uintptr_t key) {
		return ((T (*)(KeyCodeDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39BF00C))(this, go, key);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, uintptr_t key, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KeyCodeDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C43C4))(this, go, key, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KeyCodeDelegate*, uintptr_t))(Il2CppBase() + 0x39C448C))(this, result);
	}

};

}
