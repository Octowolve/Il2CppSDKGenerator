#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITileSceneLoadCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITileSceneLoadCallback"));
	}


	template <typename T = void> T OnSceneWasLoaded(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(ITileSceneLoadCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, scene, mode);
	}
	template <typename T = void> T OnSceneWasUnloaded(uintptr_t scene) {
		return ((T (*)(ITileSceneLoadCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, scene);
	}

};

}
