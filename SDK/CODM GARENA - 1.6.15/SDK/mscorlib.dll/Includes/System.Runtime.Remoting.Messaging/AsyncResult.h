#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class AsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "AsyncResult"));
	}

	template <typename T = uintptr_t> T& async_state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& async_delegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& object_data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& sync_completed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& completed() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& endinvoke_called() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> T& async_callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& current() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& original() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& gchandle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& call_message() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& message_ctrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& reply_message() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32B24))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32B2C))(this);
	}
	template <typename T = bool> T get_CompletedSynchronously() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32C40))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32C48))(this);
	}
	template <typename T = bool> T get_EndInvokeCalled() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32C50))(this);
	}
	template <typename T = void> T set_EndInvokeCalled(bool value) {
		return ((T (*)(AsyncResult*, bool))(Il2CppBase() + 0x4B32C58))(this, value);
	}
	template <typename T = uintptr_t> T get_AsyncDelegate() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32C60))(this);
	}
	template <typename T = uintptr_t> T get_NextSink() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32C68))(this);
	}
	template <typename T = uintptr_t> T AsyncProcessMessage(uintptr_t msg, uintptr_t replySink) {
		return ((T (*)(AsyncResult*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B32C70))(this, msg, replySink);
	}
	template <typename T = uintptr_t> T GetReplyMessage() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32D04))(this);
	}
	template <typename T = void> T SetMessageCtrl(uintptr_t mc) {
		return ((T (*)(AsyncResult*, uintptr_t))(Il2CppBase() + 0x4B32D0C))(this, mc);
	}
	template <typename T = void> T SetCompletedSynchronously(bool completed) {
		return ((T (*)(AsyncResult*, bool))(Il2CppBase() + 0x4B32D14))(this, completed);
	}
	template <typename T = uintptr_t> T EndInvoke() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B32D1C))(this);
	}
	template <typename T = uintptr_t> T SyncProcessMessage(uintptr_t msg) {
		return ((T (*)(AsyncResult*, uintptr_t))(Il2CppBase() + 0x4B32DB0))(this, msg);
	}
	template <typename T = uintptr_t> T get_CallMessage() {
		return ((T (*)(AsyncResult*))(Il2CppBase() + 0x4B331C4))(this);
	}
	template <typename T = void> T set_CallMessage(uintptr_t value) {
		return ((T (*)(AsyncResult*, uintptr_t))(Il2CppBase() + 0x4B331CC))(this, value);
	}

};

}
