#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateSimulationDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "UpdateSimulationDelegate"));
	}


	template <typename T = bool> T Invoke(float dt) {
		return ((T (*)(UpdateSimulationDelegate*, float))(Il2CppBase() + 0x4D408F8))(this, dt);
	}
	template <typename T = uintptr_t> T BeginInvoke(float dt, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdateSimulationDelegate*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D40968))(this, dt, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdateSimulationDelegate*, uintptr_t))(Il2CppBase() + 0x4D40A24))(this, result);
	}

};

}
