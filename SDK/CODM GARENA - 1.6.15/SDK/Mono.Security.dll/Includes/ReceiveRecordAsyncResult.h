#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReceiveRecordAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "ReceiveRecordAsyncResult"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& _resultingBuffer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _record() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _initialBuffer() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Record() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E6924))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ResultingBuffer() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E7260))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_InitialBuffer() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E63F0))(this);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E9078))(this);
	}
	template <typename T = uintptr_t> T get_AsyncException() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E7258))(this);
	}
	template <typename T = bool> T get_CompletedWithError() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E7204))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E70F0))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(ReceiveRecordAsyncResult*))(Il2CppBase() + 0x47E70B4))(this);
	}
	template <typename T = void> T SetComplete(uintptr_t ex, Il2CppArray<uintptr_t>* resultingBuffer) {
		return ((T (*)(ReceiveRecordAsyncResult*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E9080))(this, ex, resultingBuffer);
	}
	template <typename T = void> T SetComplete_1(uintptr_t ex) {
		return ((T (*)(ReceiveRecordAsyncResult*, uintptr_t))(Il2CppBase() + 0x47E6EC8))(this, ex);
	}
	template <typename T = void> T SetComplete_2(Il2CppArray<uintptr_t>* resultingBuffer) {
		return ((T (*)(ReceiveRecordAsyncResult*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47E692C))(this, resultingBuffer);
	}

};

}
