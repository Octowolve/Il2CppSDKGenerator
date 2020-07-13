#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FUpdate1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FUpdate`1"));
	}


	template <typename T = bool> T Invoke(float delta, uintptr_t inObj) {
		return ((T (*)(FUpdate1*, float, uintptr_t))(Il2CppBase() + 0x48D6CC0))(this, delta, inObj);
	}
	template <typename T = uintptr_t> T BeginInvoke(float delta, uintptr_t inObj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FUpdate1*, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D6D4C))(this, delta, inObj, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(FUpdate1*, uintptr_t))(Il2CppBase() + 0x48D6E10))(this, result);
	}

};

}
