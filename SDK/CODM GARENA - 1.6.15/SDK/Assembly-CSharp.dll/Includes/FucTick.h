#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucTick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucTick"));
	}


	template <typename T = void> T Invoke(float delta, uintptr_t inWeapon) {
		return ((T (*)(FucTick*, float, uintptr_t))(Il2CppBase() + 0x464A0DC))(this, delta, inWeapon);
	}
	template <typename T = uintptr_t> T BeginInvoke(float delta, uintptr_t inWeapon, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucTick*, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x464A170))(this, delta, inWeapon, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucTick*, uintptr_t))(Il2CppBase() + 0x464A22C))(this, result);
	}

};

}
