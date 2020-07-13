#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CultureInfoComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "CultureInfoComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t first, uintptr_t second) {
		return ((T (*)(CultureInfoComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA6AA8))(this, first, second);
	}

};

}
