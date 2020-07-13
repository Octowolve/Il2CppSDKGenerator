#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Raycast2DCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "Raycast2DCallback"));
	}


	template <typename T = uintptr_t> T Invoke(Il2CppVector2 p1, Il2CppVector2 p2, float f, int32_t i) {
		return ((T (*)(Raycast2DCallback*, Il2CppVector2, Il2CppVector2, float, int32_t))(Il2CppBase() + 0x4E2D46C))(this, p1, p2, f, i);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppVector2 p1, Il2CppVector2 p2, float f, int32_t i, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Raycast2DCallback*, Il2CppVector2, Il2CppVector2, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2D554))(this, p1, p2, f, i, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Raycast2DCallback*, uintptr_t))(Il2CppBase() + 0x4E2D680))(this, result);
	}

};

}
