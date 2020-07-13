#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetKeyStateFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetKeyStateFunc"));
	}


	template <typename T = bool> T Invoke(uintptr_t key) {
		return ((T (*)(GetKeyStateFunc*, uintptr_t))(Il2CppBase() + 0x39B8884))(this, key);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t key, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetKeyStateFunc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C410C))(this, key, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetKeyStateFunc*, uintptr_t))(Il2CppBase() + 0x39C41C8))(this, result);
	}

};

}
