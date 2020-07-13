#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongTapStartHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LongTapStartHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t gesture) {
		return ((T (*)(LongTapStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBBA14))(this, gesture);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t gesture, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LongTapStartHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BBEA94))(this, gesture, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LongTapStartHandler*, uintptr_t))(Il2CppBase() + 0x4BBEAC0))(this, result);
	}

};

}
