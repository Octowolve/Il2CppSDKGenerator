#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TouchStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(TouchStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBB71C))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TouchStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEF18))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TouchStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBEF44))(this, result);
	}

};

}
