#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateChangeCallBackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateChangeCallBackFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(StateChangeCallBackFunc*))(Il2CppBase() + 0x4C4CA64))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(StateChangeCallBackFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C4CC6C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StateChangeCallBackFunc*, uintptr_t))(Il2CppBase() + 0x4C4CC98))(this, result);
	}

};

}
