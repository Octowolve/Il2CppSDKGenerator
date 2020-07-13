#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WillRenderCanvases
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "WillRenderCanvases"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(WillRenderCanvases*))(Il2CppBase() + 0x46A5CF8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(WillRenderCanvases*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A5DAC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WillRenderCanvases*, uintptr_t))(Il2CppBase() + 0x46A5DD8))(this, result);
	}

};

}
