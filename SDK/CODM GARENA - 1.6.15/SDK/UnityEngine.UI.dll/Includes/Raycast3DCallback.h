#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Raycast3DCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "Raycast3DCallback"));
	}


	template <typename T = bool> T Invoke(uintptr_t r, uintptr_t* hit, float f, int32_t i) {
		return ((T (*)(Raycast3DCallback*, uintptr_t, uintptr_t*, float, int32_t))(Il2CppBase() + 0x4E2D704))(this, r, hit, f, i);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t r, uintptr_t* hit, float f, int32_t i, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Raycast3DCallback*, uintptr_t, uintptr_t*, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2D854))(this, r, hit, f, i, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t* hit, uintptr_t result) {
		return ((T (*)(Raycast3DCallback*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x4E2D994))(this, hit, result);
	}

};

}
