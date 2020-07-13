#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "UpdateDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t sequencer, float newRunningTime) {
		return ((T (*)(UpdateDelegate*, uintptr_t, float))(Il2CppBase() + 0x4871220))(this, sequencer, newRunningTime);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sequencer, float newRunningTime, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdateDelegate*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x487178C))(this, sequencer, newRunningTime, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdateDelegate*, uintptr_t))(Il2CppBase() + 0x4871854))(this, result);
	}

};

}
