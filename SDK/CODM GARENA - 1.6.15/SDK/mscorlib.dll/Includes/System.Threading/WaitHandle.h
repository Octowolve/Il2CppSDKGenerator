#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class WaitHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "WaitHandle"));
	}

	template <typename T = int32_t> static T& WaitTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& safe_wait_handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& InvalidHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(WaitHandle*))(Il2CppBase() + 0x4D8C8CC))(this);
	}
	template <typename T = void> static T CheckArray(Il2CppArray<uintptr_t>* handles, bool waitAll) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4D8C904))(0, handles, waitAll);
	}
	template <typename T = int32_t> static T WaitAny_internal(Il2CppArray<uintptr_t>* handles, int32_t ms, bool exitContext) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x4D8CAF4))(0, handles, ms, exitContext);
	}
	template <typename T = int32_t> static T WaitAny(Il2CppArray<uintptr_t>* waitHandles, uintptr_t timeout, bool exitContext) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4D890D0))(0, waitHandles, timeout, exitContext);
	}
	template <typename T = uintptr_t> T get_Handle() {
		return ((T (*)(WaitHandle*))(Il2CppBase() + 0x4D8CB04))(this);
	}
	template <typename T = void> T set_Handle(uintptr_t value) {
		return ((T (*)(WaitHandle*, uintptr_t))(Il2CppBase() + 0x4D8CB30))(this, value);
	}
	template <typename T = bool> T WaitOne_internal(uintptr_t handle, int32_t ms, bool exitContext) {
		return ((T (*)(WaitHandle*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4D8CCB0))(this, handle, ms, exitContext);
	}
	template <typename T = void> T Dispose(bool explicitDisposing) {
		return ((T (*)(WaitHandle*, bool))(Il2CppBase() + 0x4D8CCB4))(this, explicitDisposing);
	}
	template <typename T = bool> T WaitOne() {
		return ((T (*)(WaitHandle*))(Il2CppBase() + 0x4D8CD40))(this);
	}
	template <typename T = bool> T WaitOne_1(int32_t millisecondsTimeout, bool exitContext) {
		return ((T (*)(WaitHandle*, int32_t, bool))(Il2CppBase() + 0x4D8CE34))(this, millisecondsTimeout, exitContext);
	}
	template <typename T = bool> T WaitOne_2(int32_t millisecondsTimeout) {
		return ((T (*)(WaitHandle*, int32_t))(Il2CppBase() + 0x4D8D008))(this, millisecondsTimeout);
	}
	template <typename T = bool> T WaitOne_3(uintptr_t timeout) {
		return ((T (*)(WaitHandle*, uintptr_t))(Il2CppBase() + 0x4D8D01C))(this, timeout);
	}
	template <typename T = bool> T WaitOne_4(uintptr_t timeout, bool exitContext) {
		return ((T (*)(WaitHandle*, uintptr_t, bool))(Il2CppBase() + 0x4D8D048))(this, timeout, exitContext);
	}
	template <typename T = void> T CheckDisposed() {
		return ((T (*)(WaitHandle*))(Il2CppBase() + 0x4D87E70))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(WaitHandle*))(Il2CppBase() + 0x4D8D26C))(this);
	}

};

}
