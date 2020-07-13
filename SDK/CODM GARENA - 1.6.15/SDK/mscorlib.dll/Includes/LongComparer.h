#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LongComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "LongComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(LongComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4551984))(this, x, y);
	}
	template <typename T = int32_t> T Compare_1(int64_t ix, int64_t iy) {
		return ((T (*)(LongComparer*, int64_t, int64_t))(Il2CppBase() + 0x4551A64))(this, ix, iy);
	}

};

}
