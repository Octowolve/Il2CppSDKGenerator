#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongTap2FingersHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongTap2FingersHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(LongTap2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBC2FC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LongTap2FingersHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE918))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LongTap2FingersHandler*, uintptr_t))(Il2CppBase() + 0x4BBE944))(this, result);
	}

};

}
