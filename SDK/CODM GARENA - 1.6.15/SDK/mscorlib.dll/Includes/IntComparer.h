#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "IntComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(IntComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45518BC))(this, x, y);
	}
	template <typename T = int32_t> T Compare_1(int32_t ix, int32_t iy) {
		return ((T (*)(IntComparer*, int32_t, int32_t))(Il2CppBase() + 0x455196C))(this, ix, iy);
	}

};

}
