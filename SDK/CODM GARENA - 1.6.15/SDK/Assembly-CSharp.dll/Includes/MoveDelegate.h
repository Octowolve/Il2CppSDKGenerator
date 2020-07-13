#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppVector2 delta) {
		return ((T (*)(MoveDelegate*, Il2CppVector2))(Il2CppBase() + 0x39BE1C4))(this, delta);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppVector2 delta, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MoveDelegate*, Il2CppVector2, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C44C0))(this, delta, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MoveDelegate*, uintptr_t))(Il2CppBase() + 0x39C4580))(this, result);
	}

};

}
