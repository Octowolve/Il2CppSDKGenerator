#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class MonoIO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.IO", "MonoIO"));
	}


	template <typename T = bool> static T Close_1(uintptr_t handle, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x42AE9E8))(0, handle, error);
	}
	template <typename T = uintptr_t> static T get_ConsoleOutput_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AE9F8))(0);
	}
	template <typename T = uintptr_t> static T get_ConsoleInput_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AE9F4))(0);
	}
	template <typename T = uintptr_t> static T get_ConsoleError_1() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AE9FC))(0);
	}
	template <typename T = bool> static T CreatePipe(uintptr_t* read_handle, uintptr_t* write_handle) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x42AE99C))(0, read_handle, write_handle);
	}
	template <typename T = bool> static T DuplicateHandle(uintptr_t source_process_handle, uintptr_t source_handle, uintptr_t target_process_handle, uintptr_t* target_handle, int32_t access, int32_t inherit, int32_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x42AE9A8))(0, source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options);
	}

};

}
