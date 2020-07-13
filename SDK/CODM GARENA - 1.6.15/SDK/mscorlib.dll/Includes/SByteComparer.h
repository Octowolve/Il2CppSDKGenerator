#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SByteComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "SByteComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(SByteComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4551AB0))(this, x, y);
	}
	template <typename T = int32_t> T Compare_1(signed char ix, signed char iy) {
		return ((T (*)(SByteComparer*, signed char, signed char))(Il2CppBase() + 0x4551B50))(this, ix, iy);
	}

};

}
