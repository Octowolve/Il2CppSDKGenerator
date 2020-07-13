#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompareByPriority
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompareByPriority"));
	}


	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(CompareByPriority*, uintptr_t, uintptr_t))(Il2CppBase() + 0x491F05C))(this, a, b);
	}

};

}
