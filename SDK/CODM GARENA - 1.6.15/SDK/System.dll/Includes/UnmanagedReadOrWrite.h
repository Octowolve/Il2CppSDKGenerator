#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnmanagedReadOrWrite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "UnmanagedReadOrWrite"));
	}


	template <typename T = int32_t> T Invoke(uintptr_t buffer, int32_t length, uintptr_t data) {
		return ((T (*)(UnmanagedReadOrWrite*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42B46F8))(this, buffer, length, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t buffer, int32_t length, uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnmanagedReadOrWrite*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B47A0))(this, buffer, length, data, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnmanagedReadOrWrite*, uintptr_t))(Il2CppBase() + 0x42B4890))(this, result);
	}

};

}
