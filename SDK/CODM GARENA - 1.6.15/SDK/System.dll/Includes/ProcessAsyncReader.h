#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcessAsyncReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ProcessAsyncReader"));
	}

	template <typename T = uintptr_t> T& Sock() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& wait_handle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& delayedException() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& EndPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Size() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SockFlags() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AcceptSocket() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Addresses() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& port() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Buffers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ReuseSocket() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& acc_socket() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& completed_sync() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& err_out() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = int32_t> T& error() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ares() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& EndCalled() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& process() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& ReadHandler() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(ProcessAsyncReader*))(Il2CppBase() + 0x42AF2B8))(this);
	}
	template <typename T = uintptr_t> T get_WaitHandle() {
		return ((T (*)(ProcessAsyncReader*))(Il2CppBase() + 0x42AF2C0))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ProcessAsyncReader*))(Il2CppBase() + 0x42AF60C))(this);
	}

};

}
