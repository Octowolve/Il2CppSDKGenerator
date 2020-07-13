#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class HttpStreamAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "HttpStreamAsyncResult"));
	}

	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Buffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SynchRead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Error() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Complete(uintptr_t e) {
		return ((T (*)(HttpStreamAsyncResult*, uintptr_t))(Il2CppBase() + 0x42B84DC))(this, e);
	}
	template <typename T = void> T Complete_1() {
		return ((T (*)(HttpStreamAsyncResult*))(Il2CppBase() + 0x42B7C74))(this);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(HttpStreamAsyncResult*))(Il2CppBase() + 0x42DC1A0))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(HttpStreamAsyncResult*))(Il2CppBase() + 0x42DC1A8))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(HttpStreamAsyncResult*))(Il2CppBase() + 0x42DC2BC))(this);
	}

};

}
