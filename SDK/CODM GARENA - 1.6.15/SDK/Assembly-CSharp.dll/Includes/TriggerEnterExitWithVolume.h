#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerEnterExitWithVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerEnterExitWithVolume"));
	}


	template <typename T = void> T Invoke(uintptr_t p, bool enter, uintptr_t volume) {
		return ((T (*)(TriggerEnterExitWithVolume*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2E6DE30))(this, p, enter, volume);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t p, bool enter, uintptr_t volume, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TriggerEnterExitWithVolume*, uintptr_t, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E6DF0C))(this, p, enter, volume, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TriggerEnterExitWithVolume*, uintptr_t))(Il2CppBase() + 0x2E6DFD4))(this, result);
	}

};

}
