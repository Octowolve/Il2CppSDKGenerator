#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UsabilityDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UsabilityDelegate"));
	}


	template <typename T = void> T Invoke(bool available) {
		return ((T (*)(UsabilityDelegate*, bool))(Il2CppBase() + 0x2495ECC))(this, available);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool available, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UsabilityDelegate*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x24963A0))(this, available, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UsabilityDelegate*, uintptr_t))(Il2CppBase() + 0x249645C))(this, result);
	}

};

}
