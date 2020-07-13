#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class RuntimeHelpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "RuntimeHelpers"));
	}


	template <typename T = void> static T InitializeArray(uintptr_t array, uintptr_t fldHandle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDF4F0))(0, array, fldHandle);
	}
	template <typename T = void> static T InitializeArray_1(uintptr_t array, uintptr_t fldHandle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDF4FC))(0, array, fldHandle);
	}
	template <typename T = int32_t> static T get_OffsetToStringData() {
		return ((T (*)(void *))(Il2CppBase() + 0x4FDF60C))(0);
	}
	template <typename T = int32_t> static T GetHashCode(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FDF610))(0, o);
	}

};

}
