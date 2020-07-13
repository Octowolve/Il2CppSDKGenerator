#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTween"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ApplyTween*))(Il2CppBase() + 0x31AF7EC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ApplyTween*, uintptr_t, uintptr_t))(Il2CppBase() + 0x31C911C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ApplyTween*, uintptr_t))(Il2CppBase() + 0x31C9148))(this, result);
	}

};

}
