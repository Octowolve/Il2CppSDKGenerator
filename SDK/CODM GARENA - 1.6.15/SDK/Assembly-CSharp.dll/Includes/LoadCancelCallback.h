#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadCancelCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadCancelCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t inv) {
		return ((T (*)(LoadCancelCallback*, uintptr_t))(Il2CppBase() + 0x246594C))(this, inv);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inv, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LoadCancelCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24659E4))(this, inv, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LoadCancelCallback*, uintptr_t))(Il2CppBase() + 0x2465A10))(this, result);
	}

};

}
