#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "InternalAsyncResult"));
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
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _bytesRead() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _fromWrite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _proceedAfterHandshake() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _offset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_ProceedAfterHandshake() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF4514))(this);
	}
	template <typename T = bool> T get_FromWrite() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF451C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5FFC))(this);
	}
	template <typename T = int32_t> T get_Offset() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF6004))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5F80))(this);
	}
	template <typename T = int32_t> T get_BytesRead() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF72C4))(this);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF8BD8))(this);
	}
	template <typename T = uintptr_t> T get_AsyncException() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5C44))(this);
	}
	template <typename T = bool> T get_CompletedWithError() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5BF0))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5ADC))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF5AA0))(this);
	}
	template <typename T = void> T SetComplete(uintptr_t ex, int32_t bytesRead) {
		return ((T (*)(InternalAsyncResult*, uintptr_t, int32_t))(Il2CppBase() + 0x4BF8BE0))(this, ex, bytesRead);
	}
	template <typename T = void> T SetComplete_1(uintptr_t ex) {
		return ((T (*)(InternalAsyncResult*, uintptr_t))(Il2CppBase() + 0x4BF4E74))(this, ex);
	}
	template <typename T = void> T SetComplete_2(int32_t bytesRead) {
		return ((T (*)(InternalAsyncResult*, int32_t))(Il2CppBase() + 0x4BF600C))(this, bytesRead);
	}
	template <typename T = void> T SetComplete_3() {
		return ((T (*)(InternalAsyncResult*))(Il2CppBase() + 0x4BF4E68))(this);
	}

};

}
