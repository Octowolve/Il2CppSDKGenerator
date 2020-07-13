#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CostDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "CostDelegate"));
	}


	template <typename T = double> T Invoke(uintptr_t i) {
		return ((T (*)(CostDelegate*, uintptr_t))(Il2CppBase() + 0x4AD9128))(this, i);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t i, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CostDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AD9638))(this, i, callback, object);
	}
	template <typename T = double> T EndInvoke(uintptr_t result) {
		return ((T (*)(CostDelegate*, uintptr_t))(Il2CppBase() + 0x4AD96F8))(this, result);
	}

};

}
