#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDragFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDragFinished"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnDragFinished*))(Il2CppBase() + 0x2F92F14))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDragFinished*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F93930))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDragFinished*, uintptr_t))(Il2CppBase() + 0x2F9395C))(this, result);
	}

};

}
