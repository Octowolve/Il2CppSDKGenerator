#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReadDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ReadDelegate"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(ReadDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x42CC7A4))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReadDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CB8C0))(this, buffer, offset, size, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReadDelegate*, uintptr_t))(Il2CppBase() + 0x42CBB40))(this, result);
	}

};

}
