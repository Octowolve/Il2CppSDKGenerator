#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompareFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompareFunc"));
	}


	template <typename T = int32_t> T Invoke(uintptr_t left, uintptr_t right) {
		return ((T (*)(CompareFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4721F58))(this, left, right);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t left, uintptr_t right, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CompareFunc*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x472201C))(this, left, right, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(CompareFunc*, uintptr_t))(Il2CppBase() + 0x4722054))(this, result);
	}

};

}
