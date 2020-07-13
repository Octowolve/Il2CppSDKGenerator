#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Transform1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Transform`1"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t key, uintptr_t value) {
		return ((T (*)(Transform1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x509CE20))(this, key, value);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t key, uintptr_t value, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Transform1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x509CEE4))(this, key, value, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Transform1*, uintptr_t))(Il2CppBase() + 0x509CF1C))(this, result);
	}

};

}
