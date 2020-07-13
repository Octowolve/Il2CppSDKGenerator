#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendRecordAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "SendRecordAsyncResult"));
	}

	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _userCallback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _userState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _asyncException() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_Message() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E8594))(this);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E9160))(this);
	}
	template <typename T = uintptr_t> T get_AsyncException() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E8858))(this);
	}
	template <typename T = bool> T get_CompletedWithError() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E8804))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E86F0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E86B4))(this);
	}
	template <typename T = void> T SetComplete(uintptr_t ex) {
		return ((T (*)(SendRecordAsyncResult*, uintptr_t))(Il2CppBase() + 0x47E85A4))(this, ex);
	}
	template <typename T = void> T SetComplete_1() {
		return ((T (*)(SendRecordAsyncResult*))(Il2CppBase() + 0x47E859C))(this);
	}

};

}
