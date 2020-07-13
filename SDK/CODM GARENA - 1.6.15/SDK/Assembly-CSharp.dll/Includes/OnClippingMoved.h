#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnClippingMoved
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnClippingMoved"));
	}


	template <typename T = void> T Invoke(uintptr_t panel) {
		return ((T (*)(OnClippingMoved*, uintptr_t))(Il2CppBase() + 0x2F6BC38))(this, panel);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t panel, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnClippingMoved*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F7B000))(this, panel, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnClippingMoved*, uintptr_t))(Il2CppBase() + 0x2F7B02C))(this, result);
	}

};

}
