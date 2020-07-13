#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Swapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Swapper"));
	}


	template <typename T = void> T Invoke(int32_t i, int32_t j) {
		return ((T (*)(Swapper*, int32_t, int32_t))(Il2CppBase() + 0x3624B38))(this, i, j);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t i, int32_t j, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Swapper*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36267B8))(this, i, j, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Swapper*, uintptr_t))(Il2CppBase() + 0x362688C))(this, result);
	}

};

}
