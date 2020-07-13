#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.InteropServices {

class SafeHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.InteropServices", "SafeHandle"));
	}

	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& invalid_handle_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& refcount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& owns_handle() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Close() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x4B19DDC))(this);
	}
	template <typename T = void> T DangerousAddRef(uintptr_t success) {
		return ((T (*)(SafeHandle*, uintptr_t))(Il2CppBase() + 0x4B19F44))(this, success);
	}
	template <typename T = uintptr_t> T DangerousGetHandle() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x4B1A0A8))(this);
	}
	template <typename T = void> T DangerousRelease() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x4B1A188))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x4B1A2F0))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(SafeHandle*, bool))(Il2CppBase() + 0x4B1A328))(this, disposing);
	}
	template <typename T = bool> T ReleaseHandle() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetHandle(uintptr_t handle) {
		return ((T (*)(SafeHandle*, uintptr_t))(Il2CppBase() + 0x4B1A334))(this, handle);
	}
	template <typename T = bool> T get_IsInvalid() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(SafeHandle*))(Il2CppBase() + 0x4B1A33C))(this);
	}

};

}
