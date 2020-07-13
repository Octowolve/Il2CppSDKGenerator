#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenewalDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "RenewalDelegate"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t lease) {
		return ((T (*)(RenewalDelegate*, uintptr_t))(Il2CppBase() + 0x4B31D2C))(this, lease);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t lease, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RenewalDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B31A64))(this, lease, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(RenewalDelegate*, uintptr_t))(Il2CppBase() + 0x4B31CF0))(this, result);
	}

};

}
