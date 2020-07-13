#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Scheduler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Scheduler"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D8AF48))(0);
	}
	template <typename T = void> T Remove(uintptr_t timer) {
		return ((T (*)(Scheduler*, uintptr_t))(Il2CppBase() + 0x4D8B484))(this, timer);
	}
	template <typename T = void> T Change(uintptr_t timer, int64_t new_next_run) {
		return ((T (*)(Scheduler*, uintptr_t, int64_t))(Il2CppBase() + 0x4D8B51C))(this, timer, new_next_run);
	}
	template <typename T = void> T Add(uintptr_t timer) {
		return ((T (*)(Scheduler*, uintptr_t))(Il2CppBase() + 0x4D8B874))(this, timer);
	}
	template <typename T = int32_t> T InternalRemove(uintptr_t timer) {
		return ((T (*)(Scheduler*, uintptr_t))(Il2CppBase() + 0x4D8B80C))(this, timer);
	}
	template <typename T = void> T SchedulerThread() {
		return ((T (*)(Scheduler*))(Il2CppBase() + 0x4D8BB0C))(this);
	}
	template <typename T = void> T ShrinkIfNeeded(uintptr_t list, int32_t initial) {
		return ((T (*)(Scheduler*, uintptr_t, int32_t))(Il2CppBase() + 0x4D8C518))(this, list, initial);
	}

};

}
