#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucCheckChangeCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucCheckChangeCamera"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t inCamera, uintptr_t inPlayerController) {
		return ((T (*)(FucCheckChangeCamera*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DA30B8))(this, inCamera, inPlayerController);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inCamera, uintptr_t inPlayerController, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucCheckChangeCamera*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB1EC0))(this, inCamera, inPlayerController, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucCheckChangeCamera*, uintptr_t))(Il2CppBase() + 0x1DB1EF8))(this, result);
	}

};

}
