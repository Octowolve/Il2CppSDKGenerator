#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavigationCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NavigationCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t data) {
		return ((T (*)(NavigationCallback*, uintptr_t))(Il2CppBase() + 0x3690AB4))(this, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NavigationCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36914A4))(this, data, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NavigationCallback*, uintptr_t))(Il2CppBase() + 0x36914D0))(this, result);
	}

};

}
