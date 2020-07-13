#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucCameraLerpTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucCameraLerpTime"));
	}


	template <typename T = float> T Invoke() {
		return ((T (*)(FucCameraLerpTime*))(Il2CppBase() + 0x1DB1DD0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucCameraLerpTime*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB1E60))(this, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucCameraLerpTime*, uintptr_t))(Il2CppBase() + 0x1DB1E8C))(this, result);
	}

};

}
