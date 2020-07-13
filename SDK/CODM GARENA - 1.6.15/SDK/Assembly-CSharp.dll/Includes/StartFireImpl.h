#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartFireImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartFireImpl"));
	}


	template <typename T = void> T Invoke(uintptr_t Msg) {
		return ((T (*)(StartFireImpl*, uintptr_t))(Il2CppBase() + 0x2DBB86C))(this, Msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t Msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StartFireImpl*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DBB904))(this, Msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StartFireImpl*, uintptr_t))(Il2CppBase() + 0x2DBB930))(this, result);
	}

};

}
