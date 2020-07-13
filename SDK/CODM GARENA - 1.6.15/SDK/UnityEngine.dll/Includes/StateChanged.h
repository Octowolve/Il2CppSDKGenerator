#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "StateChanged"));
	}


	template <typename T = void> T Invoke(uintptr_t sphere) {
		return ((T (*)(StateChanged*, uintptr_t))(Il2CppBase() + 0x4DA4070))(this, sphere);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sphere, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StateChanged*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA412C))(this, sphere, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StateChanged*, uintptr_t))(Il2CppBase() + 0x4DA41EC))(this, result);
	}

};

}
