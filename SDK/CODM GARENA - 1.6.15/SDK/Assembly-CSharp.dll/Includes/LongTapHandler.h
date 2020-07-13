#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongTapHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongTapHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(LongTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBBAAC))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LongTapHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBE9FC))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LongTapHandler*, uintptr_t))(Il2CppBase() + 0x4BBEA28))(this, result);
	}

};

}
