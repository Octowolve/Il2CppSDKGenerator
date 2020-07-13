#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class RegisteredWaitHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "RegisteredWaitHandle"));
	}

	template <typename T = uintptr_t> T& _waitObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _timeout() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _executeOnlyOnce() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _finalEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _cancelEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _callsInProcess() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _unregistered() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Wait(uintptr_t state) {
		return ((T (*)(RegisteredWaitHandle*, uintptr_t))(Il2CppBase() + 0x4D88CDC))(this, state);
	}
	template <typename T = void> T DoCallBack(uintptr_t timedOut) {
		return ((T (*)(RegisteredWaitHandle*, uintptr_t))(Il2CppBase() + 0x4D893DC))(this, timedOut);
	}

};

}
