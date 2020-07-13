#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExitCallBackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExitCallBackFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ExitCallBackFunc*))(Il2CppBase() + 0x1BF6B9C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ExitCallBackFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BF89C0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ExitCallBackFunc*, uintptr_t))(Il2CppBase() + 0x1BF89EC))(this, result);
	}

};

}
