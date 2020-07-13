#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WriteMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "WriteMethod"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(WriteMethod*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B48E4))(this, array, offset, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WriteMethod*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B3DE4))(this, array, offset, count, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WriteMethod*, uintptr_t))(Il2CppBase() + 0x42B4244))(this, result);
	}

};

}
