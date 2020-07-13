#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DownloadTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DownloadTask"));
	}

	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Cache() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Changeable() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Timeout() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& AttemptLimit() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsHighPriority() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Request() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& m_CallbackList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& DownloadFailCounter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Abort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFailCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Request() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DA44C))(this);
	}
	template <typename T = void> T set_Request(uintptr_t value) {
		return ((T (*)(DownloadTask*, uintptr_t))(Il2CppBase() + 0x48DA454))(this, value);
	}
	template <typename T = bool> T SendRequest() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DA45C))(this);
	}
	template <typename T = bool> T ResendRequest() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DA770))(this);
	}
	template <typename T = void> T Abort() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DA89C))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DA9BC))(this);
	}
	template <typename T = void> T AddCallback(void* callback) {
		return ((T (*)(DownloadTask*, void*))(Il2CppBase() + 0x48DAAB4))(this, callback);
	}
	template <typename T = void> T RemoveCallback(void* callback) {
		return ((T (*)(DownloadTask*, void*))(Il2CppBase() + 0x48DABB0))(this, callback);
	}
	template <typename T = bool> T HasCallback() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DAC80))(this);
	}
	template <typename T = void> T DoCallback(bool isSuccess, uintptr_t delivery) {
		return ((T (*)(DownloadTask*, bool, uintptr_t))(Il2CppBase() + 0x48DADA4))(this, isSuccess, delivery);
	}
	template <typename T = void> T AddFailCounter() {
		return ((T (*)(DownloadTask*))(Il2CppBase() + 0x48DAF64))(this);
	}

};

}
