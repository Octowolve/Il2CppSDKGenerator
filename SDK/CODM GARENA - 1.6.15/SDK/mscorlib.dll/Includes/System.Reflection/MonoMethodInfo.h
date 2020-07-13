#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MonoMethodInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MonoMethodInfo"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ret() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& attrs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& iattrs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& callconv() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> static T get_method_info(uintptr_t handle, uintptr_t* info) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4FD6960))(0, handle, info);
	}
	template <typename T = uintptr_t> static T GetMethodInfo(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD5F50))(0, handle);
	}
	template <typename T = uintptr_t> static T GetDeclaringType(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD39CC))(0, handle);
	}
	template <typename T = uintptr_t> static T GetReturnType(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD5484))(0, handle);
	}
	template <typename T = uintptr_t> static T GetAttributes(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD38EC))(0, handle);
	}
	template <typename T = uintptr_t> static T GetCallingConvention(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD3958))(0, handle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_parameter_info(uintptr_t handle, uintptr_t member) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD696C))(0, handle, member);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetParametersInfo(uintptr_t handle, uintptr_t member) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD31B8))(0, handle, member);
	}

};

}
