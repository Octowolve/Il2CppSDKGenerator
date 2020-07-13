#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DefaultComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "DefaultComparer"));
	}


	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(DefaultComparer*, uintptr_t))(Il2CppBase() + 0x51F7C48))(this, obj);
	}
	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(DefaultComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x51F7C6C))(this, x, y);
	}

};

}
