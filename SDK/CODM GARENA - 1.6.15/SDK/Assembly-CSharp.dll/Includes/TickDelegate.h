#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TickDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TickDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(TickDelegate*))(Il2CppBase() + 0x27A1314))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(TickDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27A5560))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TickDelegate*, uintptr_t))(Il2CppBase() + 0x27A558C))(this, result);
	}

};

}
