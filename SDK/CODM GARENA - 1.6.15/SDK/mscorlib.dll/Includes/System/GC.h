#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class GC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "GC"));
	}


	template <typename T = int32_t> static T get_MaxGeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD0F7C))(0);
	}
	template <typename T = void> static T InternalCollect(int32_t generation) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD0F80))(0, generation);
	}
	template <typename T = void> static T Collect() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD0F88))(0);
	}
	template <typename T = void> static T Collect_1(int32_t generation) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD0F9C))(0, generation);
	}
	template <typename T = void> static T Collect_2(int32_t generation, uintptr_t mode) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3FD105C))(0, generation, mode);
	}
	template <typename T = void> static T SuppressFinalize(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD1060))(0, obj);
	}
	template <typename T = void> static T WaitForPendingFinalizers() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD1068))(0);
	}

};

}
