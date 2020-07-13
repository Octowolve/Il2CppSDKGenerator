#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongTapEndHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongTapEndHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(LongTapEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBBB44))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LongTapEndHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE9B0))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LongTapEndHandler*, uintptr_t))(Il2CppBase() + 0x4BBE9DC))(this, result);
	}

};

}
