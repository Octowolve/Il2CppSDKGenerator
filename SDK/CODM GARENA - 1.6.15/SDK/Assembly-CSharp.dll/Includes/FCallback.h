#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t inAction) {
		return ((T (*)(FCallback*, uintptr_t))(Il2CppBase() + 0x41ADC54))(this, inAction);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inAction, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41ADCEC))(this, inAction, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FCallback*, uintptr_t))(Il2CppBase() + 0x41ADD18))(this, result);
	}

};

}
