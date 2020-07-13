#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateCheck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "StateCheck"));
	}


	template <typename T = bool> T Invoke(float sequencerTime, uintptr_t clipData) {
		return ((T (*)(StateCheck*, float, uintptr_t))(Il2CppBase() + 0x4853EE8))(this, sequencerTime, clipData);
	}
	template <typename T = uintptr_t> T BeginInvoke(float sequencerTime, uintptr_t clipData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StateCheck*, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4853F74))(this, sequencerTime, clipData, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(StateCheck*, uintptr_t))(Il2CppBase() + 0x4854038))(this, result);
	}

};

}
