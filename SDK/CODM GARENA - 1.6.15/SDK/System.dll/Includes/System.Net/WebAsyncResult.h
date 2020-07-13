#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebAsyncResult"));
	}

	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& synch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isCompleted() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& cb() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& nbytes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& innerAsyncResult() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& callbackDone() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& exc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& writeStream() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& EndCalled() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& AsyncWriteAll() {
		return *(T*)((uintptr_t)this + 0x41);
	}

	template <typename T = void> T SetCompleted(bool synch, uintptr_t e) {
		return ((T (*)(WebAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x3E62C08))(this, synch, e);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E62C9C))(this);
	}
	template <typename T = void> T SetCompleted_1(bool synch, int32_t nbytes) {
		return ((T (*)(WebAsyncResult*, bool, int32_t))(Il2CppBase() + 0x3E62D38))(this, synch, nbytes);
	}
	template <typename T = void> T SetCompleted_2(bool synch, uintptr_t writeStream) {
		return ((T (*)(WebAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x3E62DD4))(this, synch, writeStream);
	}
	template <typename T = void> T SetCompleted_3(bool synch, uintptr_t response) {
		return ((T (*)(WebAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x3E62E70))(this, synch, response);
	}
	template <typename T = void> T DoCallback() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E62F0C))(this);
	}
	template <typename T = void> T WaitUntilComplete() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E62F3C))(this);
	}
	template <typename T = bool> T WaitUntilComplete_1(int32_t timeout, bool exitContext) {
		return ((T (*)(WebAsyncResult*, int32_t, bool))(Il2CppBase() + 0x3E630F8))(this, timeout, exitContext);
	}
	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E63178))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E62FE4))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E62FA8))(this);
	}
	template <typename T = bool> T get_GotException() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E63180))(this);
	}
	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E63190))(this);
	}
	template <typename T = int32_t> T get_NBytes() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E63198))(this);
	}
	template <typename T = void> T set_NBytes(int32_t value) {
		return ((T (*)(WebAsyncResult*, int32_t))(Il2CppBase() + 0x3E631A0))(this, value);
	}
	template <typename T = uintptr_t> T get_InnerAsyncResult() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631A8))(this);
	}
	template <typename T = void> T set_InnerAsyncResult(uintptr_t value) {
		return ((T (*)(WebAsyncResult*, uintptr_t))(Il2CppBase() + 0x3E631B0))(this, value);
	}
	template <typename T = uintptr_t> T get_WriteStream() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631B8))(this);
	}
	template <typename T = uintptr_t> T get_Response() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631C0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631C8))(this);
	}
	template <typename T = int32_t> T get_Offset() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631D0))(this);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(WebAsyncResult*))(Il2CppBase() + 0x3E631D8))(this);
	}

};

}
