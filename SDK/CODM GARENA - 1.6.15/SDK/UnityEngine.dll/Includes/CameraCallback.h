#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "CameraCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t cam) {
		return ((T (*)(CameraCallback*, uintptr_t))(Il2CppBase() + 0x46A3840))(this, cam);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t cam, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CameraCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A4D10))(this, cam, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CameraCallback*, uintptr_t))(Il2CppBase() + 0x46A4D3C))(this, result);
	}

};

}
