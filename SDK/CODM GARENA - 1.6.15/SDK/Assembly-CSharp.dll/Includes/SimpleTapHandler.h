#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SimpleTapHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SimpleTapHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(SimpleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBB8E4))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SimpleTapHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEBFC))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SimpleTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBEC28))(this, result);
	}

};

}
