#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class MethodBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "MethodBase"));
	}


	template <typename T = uintptr_t> static T GetMethodFromHandleNoGenericCheck(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD1B48))(0, handle);
	}
	template <typename T = uintptr_t> static T GetMethodFromIntPtr(uintptr_t handle, uintptr_t declaringType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD1BE8))(0, handle, declaringType);
	}
	template <typename T = uintptr_t> static T GetMethodFromHandle(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FD1D08))(0, handle);
	}
	template <typename T = uintptr_t> static T GetMethodFromHandleInternalType(uintptr_t method_handle, uintptr_t type_handle) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD1CFC))(0, method_handle, type_handle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParameters() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetParameterCount() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1E68))(this);
	}
	template <typename T = uintptr_t> T Invoke(uintptr_t obj, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(MethodBase*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FD1E94))(this, obj, parameters);
	}
	template <typename T = uintptr_t> T Invoke_1(uintptr_t obj, uintptr_t invokeAttr, uintptr_t binder, Il2CppArray<uintptr_t>* parameters, uintptr_t culture) {
		return ((T (*)(MethodBase*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, obj, invokeAttr, binder, parameters, culture);
	}
	template <typename T = uintptr_t> T get_MethodHandle() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Attributes() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_CallingConvention() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1ECC))(this);
	}
	template <typename T = bool> T get_IsPublic() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1ED4))(this);
	}
	template <typename T = bool> T get_IsStatic() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1F00))(this);
	}
	template <typename T = bool> T get_IsVirtual() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1F24))(this);
	}
	template <typename T = bool> T get_IsAbstract() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1F48))(this);
	}
	template <typename T = bool> T get_IsSpecialName() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1F6C))(this);
	}
	template <typename T = bool> T get_IsConstructor() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD1F90))(this);
	}
	template <typename T = int32_t> T get_next_table_index(uintptr_t obj, int32_t table, bool inc) {
		return ((T (*)(MethodBase*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4FD2090))(this, obj, table, inc);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetGenericArguments() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD21E4))(this);
	}
	template <typename T = bool> T get_ContainsGenericParameters() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD2278))(this);
	}
	template <typename T = bool> T get_IsGenericMethodDefinition() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD2280))(this);
	}
	template <typename T = bool> T get_IsGenericMethod() {
		return ((T (*)(MethodBase*))(Il2CppBase() + 0x4FD2288))(this);
	}

};

}
