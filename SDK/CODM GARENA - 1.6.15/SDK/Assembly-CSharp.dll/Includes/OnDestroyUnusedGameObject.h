#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDestroyUnusedGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDestroyUnusedGameObject"));
	}


	template <typename T = void> T Invoke(Il2CppString* assetIDStr) {
		return ((T (*)(OnDestroyUnusedGameObject*, Il2CppString*))(Il2CppBase() + 0x422C18C))(this, assetIDStr);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* assetIDStr, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDestroyUnusedGameObject*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x422C264))(this, assetIDStr, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDestroyUnusedGameObject*, uintptr_t))(Il2CppBase() + 0x422C290))(this, result);
	}

};

}
