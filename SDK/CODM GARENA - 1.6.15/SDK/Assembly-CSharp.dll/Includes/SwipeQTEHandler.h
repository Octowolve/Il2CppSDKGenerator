#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwipeQTEHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwipeQTEHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(SwipeQTEHandler*))(Il2CppBase() + 0x3DB5890))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwipeQTEHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DB59F8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwipeQTEHandler*, uintptr_t))(Il2CppBase() + 0x3DB5A24))(this, result);
	}

};

}
