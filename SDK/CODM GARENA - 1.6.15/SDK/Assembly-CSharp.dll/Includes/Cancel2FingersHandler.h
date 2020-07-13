#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Cancel2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Cancel2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(Cancel2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBB684))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Cancel2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE680))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Cancel2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBE6AC))(this, result);
	}

};

}
