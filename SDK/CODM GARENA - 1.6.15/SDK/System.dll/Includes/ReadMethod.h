#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReadMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ReadMethod"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(ReadMethod*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42B4604))(this, array, offset, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReadMethod*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42B39FC))(this, array, offset, count, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReadMethod*, uintptr_t))(Il2CppBase() + 0x42B4064))(this, result);
	}

};

}
