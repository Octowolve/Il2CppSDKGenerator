#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnClickUrlFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnClickUrlFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnClickUrlFunc*))(Il2CppBase() + 0x3302CCC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnClickUrlFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3302D7C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnClickUrlFunc*, uintptr_t))(Il2CppBase() + 0x3302DA8))(this, result);
	}

};

}
