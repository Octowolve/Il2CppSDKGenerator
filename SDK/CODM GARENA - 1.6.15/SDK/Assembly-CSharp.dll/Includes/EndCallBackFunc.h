#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndCallBackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndCallBackFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(EndCallBackFunc*))(Il2CppBase() + 0x4192AE4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(EndCallBackFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4192FDC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EndCallBackFunc*, uintptr_t))(Il2CppBase() + 0x4193008))(this, result);
	}

};

}
