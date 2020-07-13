#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MuscleDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "MuscleDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t muscle) {
		return ((T (*)(MuscleDelegate*, uintptr_t))(Il2CppBase() + 0x38C6D04))(this, muscle);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t muscle, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MuscleDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x38D0078))(this, muscle, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MuscleDelegate*, uintptr_t))(Il2CppBase() + 0x38D00A4))(this, result);
	}

};

}
