#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WindowFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "WindowFunction"));
	}


	template <typename T = void> T Invoke(int32_t id) {
		return ((T (*)(WindowFunction*, int32_t))(Il2CppBase() + 0x47898C8))(this, id);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t id, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WindowFunction*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x478AA28))(this, id, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WindowFunction*, uintptr_t))(Il2CppBase() + 0x478AAE4))(this, result);
	}

};

}
