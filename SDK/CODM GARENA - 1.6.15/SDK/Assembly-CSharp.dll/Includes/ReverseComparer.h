#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReverseComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReverseComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(ReverseComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4075FAC))(this, x, y);
	}

};

}
