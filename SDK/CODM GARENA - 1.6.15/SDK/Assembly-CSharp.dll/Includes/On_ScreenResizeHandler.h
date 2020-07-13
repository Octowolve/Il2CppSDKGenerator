#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnScreenResizeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "On_ScreenResizeHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnScreenResizeHandler*))(Il2CppBase() + 0x488FADC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnScreenResizeHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48901B0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnScreenResizeHandler*, uintptr_t))(Il2CppBase() + 0x48901DC))(this, result);
	}

};

}
