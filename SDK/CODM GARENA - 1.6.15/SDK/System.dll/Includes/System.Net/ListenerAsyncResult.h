#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class ListenerAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "ListenerAsyncResult"));
	}

	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& synch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& cb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& forward() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Complete(Il2CppString* error) {
		return ((T (*)(ListenerAsyncResult*, Il2CppString*))(Il2CppBase() + 0x3E49C90))(this, error);
	}
	template <typename T = void> static T InvokeCallback(uintptr_t o) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3E49E28))(0, o);
	}
	template <typename T = void> T Complete_1(uintptr_t context) {
		return ((T (*)(ListenerAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E49EEC))(this, context);
	}
	template <typename T = void> T Complete_2(uintptr_t context, bool synch) {
		return ((T (*)(ListenerAsyncResult*, uintptr_t, bool))(Il2CppBase() + 0x3E49EF4))(this, context, synch);
	}
	template <typename T = uintptr_t> T GetContext() {
		return ((T (*)(ListenerAsyncResult*))(Il2CppBase() + 0x3E4A644))(this);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(ListenerAsyncResult*))(Il2CppBase() + 0x3E4A678))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(ListenerAsyncResult*))(Il2CppBase() + 0x3E4A690))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(ListenerAsyncResult*))(Il2CppBase() + 0x3E4A7B8))(this);
	}

};

}
