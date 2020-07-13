#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InstanceComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "InstanceComparer"));
	}


	template <typename T = int32_t> T System_Collections_IComparer_Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(InstanceComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302CE0C))(this, o1, o2);
	}
	template <typename T = int32_t> T System_Collections_IHashCodeProvider_GetHashCode(uintptr_t o) {
		return ((T (*)(InstanceComparer*, uintptr_t))(Il2CppBase() + 0x302CEC8))(this, o);
	}

};

}
