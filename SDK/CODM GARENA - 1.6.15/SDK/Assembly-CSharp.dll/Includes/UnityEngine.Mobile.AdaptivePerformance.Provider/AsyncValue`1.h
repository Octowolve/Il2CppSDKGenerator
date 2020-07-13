#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Mobile.AdaptivePerformance.Provider {

class AsyncValue1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine.Mobile.AdaptivePerformance.Provider", "AsyncValue`1"));
	}

	template <typename T = uintptr_t> T& updater() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& updateHandle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& pendingUpdate() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& updateFunc() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& newValue() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& updateTimeDeltaSeconds() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& updateTimestamp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& changeTimestamp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Update(float timestamp) {
		return ((T (*)(AsyncValue1*, float))(Il2CppBase() + 0x518B9A0))(this, timestamp);
	}
	template <typename T = void> T SyncUpdate(float timestamp) {
		return ((T (*)(AsyncValue1*, float))(Il2CppBase() + 0x518BBC8))(this, timestamp);
	}
	template <typename T = uintptr_t> T get_value() {
		return ((T (*)(AsyncValue1*))(Il2CppBase() + 0x518BDA4))(this);
	}
	template <typename T = void> T set_value(uintptr_t value) {
		return ((T (*)(AsyncValue1*, uintptr_t))(Il2CppBase() + 0x518BDAC))(this, value);
	}
	template <typename T = float> T get_changeTimestamp() {
		return ((T (*)(AsyncValue1*))(Il2CppBase() + 0x518BDB4))(this);
	}
	template <typename T = void> T set_changeTimestamp(float value) {
		return ((T (*)(AsyncValue1*, float))(Il2CppBase() + 0x518BDBC))(this, value);
	}

};

}
