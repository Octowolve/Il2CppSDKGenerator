#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AsyncUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AsyncUpdater"));
	}

	template <typename T = uintptr_t> T& m_Thread() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Disposed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_Quit() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UpdateAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UpdateRequests() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RequestComplete() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_UpdateRequestReadIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_UpdateRequestWriteIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Mutex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Semaphore() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRequestComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThreadProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Dispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T Register(uintptr_t action) {
		return ((T (*)(AsyncUpdater*, uintptr_t))(Il2CppBase() + 0x4217B60))(this, action);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AsyncUpdater*))(Il2CppBase() + 0x4217C94))(this);
	}
	template <typename T = bool> T RequestUpdate(int32_t handle) {
		return ((T (*)(AsyncUpdater*, int32_t))(Il2CppBase() + 0x4217E10))(this, handle);
	}
	template <typename T = bool> T IsRequestComplete(int32_t handle) {
		return ((T (*)(AsyncUpdater*, int32_t))(Il2CppBase() + 0x4217FF4))(this, handle);
	}
	template <typename T = void> T ThreadProc() {
		return ((T (*)(AsyncUpdater*))(Il2CppBase() + 0x4218144))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(AsyncUpdater*, bool))(Il2CppBase() + 0x4218588))(this, disposing);
	}
	template <typename T = void> T Dispose_1() {
		return ((T (*)(AsyncUpdater*))(Il2CppBase() + 0x42186C4))(this);
	}

};

}
