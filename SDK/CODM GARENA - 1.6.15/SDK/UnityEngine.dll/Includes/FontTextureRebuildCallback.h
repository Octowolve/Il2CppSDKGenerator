#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontTextureRebuildCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "FontTextureRebuildCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(FontTextureRebuildCallback*))(Il2CppBase() + 0x476E2D0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(FontTextureRebuildCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x476E560))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FontTextureRebuildCallback*, uintptr_t))(Il2CppBase() + 0x476E58C))(this, result);
	}

};

}
