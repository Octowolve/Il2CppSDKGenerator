#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class StreamAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "StreamAsyncResult"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& done() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& exc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& nbytes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& wh() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetComplete(uintptr_t e) {
		return ((T (*)(StreamAsyncResult*, uintptr_t))(Il2CppBase() + 0x4003140))(this, e);
	}
	template <typename T = void> T SetComplete_1(uintptr_t e, int32_t nbytes) {
		return ((T (*)(StreamAsyncResult*, uintptr_t, int32_t))(Il2CppBase() + 0x4003138))(this, e, nbytes);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x40031EC))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x40031F4))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x4003308))(this);
	}
	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x40031E4))(this);
	}
	template <typename T = int32_t> T get_NBytes() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x40031CC))(this);
	}
	template <typename T = bool> T get_Done() {
		return ((T (*)(StreamAsyncResult*))(Il2CppBase() + 0x40031D4))(this);
	}
	template <typename T = void> T set_Done(bool value) {
		return ((T (*)(StreamAsyncResult*, bool))(Il2CppBase() + 0x40031DC))(this, value);
	}

};

}
