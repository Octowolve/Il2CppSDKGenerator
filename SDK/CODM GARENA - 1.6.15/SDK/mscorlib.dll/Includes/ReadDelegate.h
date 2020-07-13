#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReadDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ReadDelegate"));
	}


	template <typename T = int32_t> T Invoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(ReadDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3FFC9F4))(this, buffer, offset, count);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReadDelegate*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFA5E8))(this, buffer, offset, count, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReadDelegate*, uintptr_t))(Il2CppBase() + 0x3FFAA58))(this, result);
	}

};

}
