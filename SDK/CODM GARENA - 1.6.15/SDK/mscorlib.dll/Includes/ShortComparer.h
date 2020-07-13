#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShortComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ShortComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(ShortComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4551B60))(this, x, y);
	}
	template <typename T = int32_t> T Compare_1(int16_t ix, int16_t iy) {
		return ((T (*)(ShortComparer*, int16_t, int16_t))(Il2CppBase() + 0x4551C00))(this, ix, iy);
	}

};

}
