#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaycastAllCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "RaycastAllCallback"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T Invoke(uintptr_t r, float f, int32_t i) {
		return ((T (*)(RaycastAllCallback*, uintptr_t, float, int32_t))(Il2CppBase() + 0x4E2D9E8))(this, r, f, i);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t r, float f, int32_t i, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RaycastAllCallback*, uintptr_t, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2DB20))(this, r, f, i, callback, object);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EndInvoke(uintptr_t result) {
		return ((T (*)(RaycastAllCallback*, uintptr_t))(Il2CppBase() + 0x4E2DC38))(this, result);
	}

};

}
