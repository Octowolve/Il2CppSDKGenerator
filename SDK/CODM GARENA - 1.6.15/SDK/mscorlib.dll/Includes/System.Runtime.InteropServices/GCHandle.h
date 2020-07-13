#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class GCHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "GCHandle"));
	}

	template <typename T = int32_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T get_IsAllocated() {
		return ((T (*)(GCHandle*))(Il2CppBase() + 0x4FDFD14))(this);
	}
	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(GCHandle*))(Il2CppBase() + 0x4FDFDFC))(this);
	}
	template <typename T = uintptr_t> T AddrOfPinnedObject() {
		return ((T (*)(GCHandle*))(Il2CppBase() + 0x4FDFF64))(this);
	}
	template <typename T = uintptr_t> static T Alloc(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FDFF6C))(0, value);
	}
	template <typename T = uintptr_t> static T Alloc_1(uintptr_t value, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDFF7C))(0, value, type);
	}
	template <typename T = void> T Free() {
		return ((T (*)(GCHandle*))(Il2CppBase() + 0x4FDFFB8))(this);
	}
	template <typename T = bool> static T CheckCurrentDomain(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FDFFD8))(0, handle);
	}
	template <typename T = uintptr_t> static T GetTarget(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FDFDF4))(0, handle);
	}
	template <typename T = int32_t> static T GetTargetHandle(uintptr_t obj, int32_t handle, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4FDFCCC))(0, obj, handle, type);
	}
	template <typename T = void> static T FreeHandle(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FDFFB0))(0, handle);
	}
	template <typename T = uintptr_t> static T GetAddrOfPinnedObject(int32_t handle) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4FDFF5C))(0, handle);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(GCHandle*, uintptr_t))(Il2CppBase() + 0x4FE0094))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GCHandle*))(Il2CppBase() + 0x4FE009C))(this);
	}
	template <typename T = uintptr_t> static T FromIntPtr(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE00A8))(0, value);
	}
	template <typename T = uintptr_t> static T ToIntPtr(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE01F0))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE01FC))(0, value);
	}
	template <typename T = uintptr_t> static T op_Explicit_1(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FE00AC))(0, value);
	}

};

}
