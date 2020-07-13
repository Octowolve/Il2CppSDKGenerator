#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpAsyncResult"));
	}

	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& waitHandle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& synch() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CA9D4))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CA9DC))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAAE4))(this);
	}
	template <typename T = bool> T get_GotException() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAB20))(this);
	}
	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAB30))(this);
	}
	template <typename T = uintptr_t> T get_Response() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAB38))(this);
	}
	template <typename T = uintptr_t> T get_Stream() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAB40))(this);
	}
	template <typename T = void> T set_Stream(uintptr_t value) {
		return ((T (*)(FtpAsyncResult*, uintptr_t))(Il2CppBase() + 0x42CAB48))(this, value);
	}
	template <typename T = bool> T WaitUntilComplete(int32_t timeout, bool exitContext) {
		return ((T (*)(FtpAsyncResult*, int32_t, bool))(Il2CppBase() + 0x42CAB50))(this, timeout, exitContext);
	}
	template <typename T = void> T SetCompleted(bool synch, uintptr_t exc, uintptr_t response) {
		return ((T (*)(FtpAsyncResult*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x42CABD0))(this, synch, exc, response);
	}
	template <typename T = void> T SetCompleted_1(bool synch, uintptr_t response) {
		return ((T (*)(FtpAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x42CAD84))(this, synch, response);
	}
	template <typename T = void> T SetCompleted_2(bool synch, uintptr_t exc) {
		return ((T (*)(FtpAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x42CADA4))(this, synch, exc);
	}
	template <typename T = void> T DoCallback() {
		return ((T (*)(FtpAsyncResult*))(Il2CppBase() + 0x42CAC70))(this);
	}

};

}
