#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IteratorDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "IteratorDelegate"));
	}


	template <typename T = bool> T Invoke(uintptr_t ps) {
		return ((T (*)(IteratorDelegate*, uintptr_t))(Il2CppBase() + 0x4AC015C))(this, ps);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t ps, uintptr_t callback, uintptr_t object) {
		return ((T (*)(IteratorDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AC05C8))(this, ps, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(IteratorDelegate*, uintptr_t))(Il2CppBase() + 0x4AC05F4))(this, result);
	}

};

}
