#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetRayIntersectionAllCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "GetRayIntersectionAllCallback"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T Invoke(uintptr_t r, float f, int32_t i) {
		return ((T (*)(GetRayIntersectionAllCallback*, uintptr_t, float, int32_t))(Il2CppBase() + 0x4E2D1FC))(this, r, f, i);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t r, float f, int32_t i, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetRayIntersectionAllCallback*, uintptr_t, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2D334))(this, r, f, i, callback, object);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetRayIntersectionAllCallback*, uintptr_t))(Il2CppBase() + 0x4E2D44C))(this, result);
	}

};

}
