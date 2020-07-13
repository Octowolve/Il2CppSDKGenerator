#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleComponentHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleComponentHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(VehicleComponentHandler*))(Il2CppBase() + 0x265029C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(VehicleComponentHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2650670))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(VehicleComponentHandler*, uintptr_t))(Il2CppBase() + 0x265069C))(this, result);
	}

};

}
