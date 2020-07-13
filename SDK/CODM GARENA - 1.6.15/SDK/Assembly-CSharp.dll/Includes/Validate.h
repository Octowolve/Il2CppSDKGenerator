#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Validate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Validate"));
	}


	template <typename T = bool> T Invoke(bool choice) {
		return ((T (*)(Validate*, bool))(Il2CppBase() + 0x41F9F58))(this, choice);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool choice, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Validate*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F9FC8))(this, choice, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(Validate*, uintptr_t))(Il2CppBase() + 0x41FA07C))(this, result);
	}

};

}
