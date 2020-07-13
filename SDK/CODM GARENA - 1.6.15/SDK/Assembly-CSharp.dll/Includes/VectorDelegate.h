#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(VectorDelegate*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x39BF0D0))(this, go, delta);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, Il2CppVector2 delta, uintptr_t callback, uintptr_t object) {
		return ((T (*)(VectorDelegate*, uintptr_t, Il2CppVector2, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C487C))(this, go, delta, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(VectorDelegate*, uintptr_t))(Il2CppBase() + 0x39C4948))(this, result);
	}

};

}
