#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CountdownCompletedHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CountdownCompletedHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(CountdownCompletedHandler*))(Il2CppBase() + 0x1ED8F34))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(CountdownCompletedHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1ED90C0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CountdownCompletedHandler*, uintptr_t))(Il2CppBase() + 0x1ED90EC))(this, result);
	}

};

}
