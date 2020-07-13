#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnValueChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnValueChange"));
	}


	template <typename T = void> T Invoke(float value) {
		return ((T (*)(OnValueChange*, float))(Il2CppBase() + 0x2FA5020))(this, value);
	}
	template <typename T = uintptr_t> T BeginInvoke(float value, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnValueChange*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2FA523C))(this, value, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnValueChange*, uintptr_t))(Il2CppBase() + 0x2FA52F8))(this, result);
	}

};

}
