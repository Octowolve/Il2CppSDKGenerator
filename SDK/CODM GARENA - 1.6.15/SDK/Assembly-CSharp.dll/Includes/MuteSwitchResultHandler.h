#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MuteSwitchResultHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuteSwitchResultHandler"));
	}


	template <typename T = void> T Invoke(int32_t result) {
		return ((T (*)(MuteSwitchResultHandler*, int32_t))(Il2CppBase() + 0x4542FCC))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MuteSwitchResultHandler*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x454BE0C))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MuteSwitchResultHandler*, uintptr_t))(Il2CppBase() + 0x454BEC8))(this, result);
	}

};

}
