#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnResponse"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnResponse*))(Il2CppBase() + 0x3BBB040))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnResponse*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3BBB0D0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnResponse*, uintptr_t))(Il2CppBase() + 0x3BBB0FC))(this, result);
	}

};

}
