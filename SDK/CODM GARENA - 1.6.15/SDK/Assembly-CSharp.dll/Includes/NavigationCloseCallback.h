#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavigationCloseCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NavigationCloseCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t lastData, uintptr_t controller) {
		return ((T (*)(NavigationCloseCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A56048))(this, lastData, controller);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t lastData, uintptr_t controller, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NavigationCloseCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A56A38))(this, lastData, controller, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NavigationCloseCallback*, uintptr_t))(Il2CppBase() + 0x4A56A70))(this, result);
	}

};

}
