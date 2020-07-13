#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNavMeshPreUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "OnNavMeshPreUpdate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnNavMeshPreUpdate*))(Il2CppBase() + 0x4681588))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnNavMeshPreUpdate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4681E54))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnNavMeshPreUpdate*, uintptr_t))(Il2CppBase() + 0x4681E80))(this, result);
	}

};

}
