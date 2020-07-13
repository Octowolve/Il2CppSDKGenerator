#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "SocketAsyncResult"));
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
	template <typename T = uintptr_t> T& waithandle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& delayedException() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& EndPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Buffer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Size() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SockFlags() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AcceptSocket() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Addresses() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Port() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& Buffers() {
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
	template <typename T = bool> T& blocking() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = int32_t> T& error() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& operation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ares() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& EndCalled() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T CheckIfThrowDelayedException() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E5E358))(this);
	}
	template <typename T = void> T CompleteAllOnDispose(uintptr_t queue) {
		return ((T (*)(SocketAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E615F0))(this, queue);
	}
	template <typename T = void> T CompleteDisposed(uintptr_t unused) {
		return ((T (*)(SocketAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E6185C))(this, unused);
	}
	template <typename T = void> T Complete() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E61860))(this);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t worker, uintptr_t op) {
		return ((T (*)(SocketAsyncResult*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E61F58))(this, worker, op);
	}
	template <typename T = void> T Complete_1(int32_t total) {
		return ((T (*)(SocketAsyncResult*, int32_t))(Il2CppBase() + 0x3E62080))(this, total);
	}
	template <typename T = void> T Complete_2(uintptr_t e) {
		return ((T (*)(SocketAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E62088))(this, e);
	}
	template <typename T = void> T Complete_3(uintptr_t s) {
		return ((T (*)(SocketAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E62090))(this, s);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E62098))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E620A0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E621B0))(this);
	}
	template <typename T = void> T set_IsCompleted(bool value) {
		return ((T (*)(SocketAsyncResult*, bool))(Il2CppBase() + 0x3E61C5C))(this, value);
	}
	template <typename T = uintptr_t> T get_Socket() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E5E45C))(this);
	}
	template <typename T = int32_t> T get_Total() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E5E454))(this);
	}
	template <typename T = void> T set_Total(int32_t value) {
		return ((T (*)(SocketAsyncResult*, int32_t))(Il2CppBase() + 0x3E621B8))(this, value);
	}
	template <typename T = uintptr_t> T get_ErrorCode() {
		return ((T (*)(SocketAsyncResult*))(Il2CppBase() + 0x3E5E7B0))(this);
	}

};

}
