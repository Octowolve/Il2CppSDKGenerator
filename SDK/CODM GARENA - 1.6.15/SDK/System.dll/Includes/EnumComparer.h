#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "EnumComparer"));
	}


	template <typename T = int32_t> T System_Collections_IComparer_Compare(uintptr_t compareObject1, uintptr_t compareObject2) {
		return ((T (*)(EnumComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CACA4C))(this, compareObject1, compareObject2);
	}

};

}
