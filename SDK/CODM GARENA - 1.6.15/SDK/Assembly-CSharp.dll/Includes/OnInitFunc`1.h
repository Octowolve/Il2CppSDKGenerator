#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInitFunc1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInitFunc`1"));
	}


	template <typename T = void> T Invoke(uintptr_t w) {
		return ((T (*)(OnInitFunc1*, uintptr_t))(Il2CppBase() + 0x4B68F1C))(this, w);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t w, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnInitFunc1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B68FB4))(this, w, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInitFunc1*, uintptr_t))(Il2CppBase() + 0x4B68FE0))(this, result);
	}

};

}
