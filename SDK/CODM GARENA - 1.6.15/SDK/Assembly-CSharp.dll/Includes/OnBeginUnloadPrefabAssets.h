#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnBeginUnloadPrefabAssets
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnBeginUnloadPrefabAssets"));
	}


	template <typename T = void> T Invoke(uintptr_t prefab) {
		return ((T (*)(OnBeginUnloadPrefabAssets*, uintptr_t))(Il2CppBase() + 0x4803BF0))(this, prefab);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t prefab, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnBeginUnloadPrefabAssets*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48042D0))(this, prefab, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnBeginUnloadPrefabAssets*, uintptr_t))(Il2CppBase() + 0x48042FC))(this, result);
	}

};

}
