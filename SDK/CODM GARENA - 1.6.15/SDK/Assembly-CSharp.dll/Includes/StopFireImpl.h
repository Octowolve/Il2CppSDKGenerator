#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopFireImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopFireImpl"));
	}


	template <typename T = void> T Invoke(uintptr_t Msg) {
		return ((T (*)(StopFireImpl*, uintptr_t))(Il2CppBase() + 0x2DBB950))(this, Msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t Msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(StopFireImpl*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DBB9E8))(this, Msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StopFireImpl*, uintptr_t))(Il2CppBase() + 0x2DBBA14))(this, result);
	}

};

}
