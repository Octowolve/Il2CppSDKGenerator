#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Timer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "Timer"));
	}

	template <typename T = uintptr_t> static T& scheduler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& due_time_ms() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& period_ms() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& next_run() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Init(uintptr_t callback, uintptr_t state, int64_t dueTime, int64_t period) {
		return ((T (*)(Timer*, uintptr_t, uintptr_t, int64_t, int64_t))(Il2CppBase() + 0x4D8AD98))(this, callback, state, dueTime, period);
	}
	template <typename T = bool> T Change(uintptr_t dueTime, uintptr_t period) {
		return ((T (*)(Timer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8B310))(this, dueTime, period);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Timer*))(Il2CppBase() + 0x4D8B3A0))(this);
	}
	template <typename T = bool> T Change_1(int64_t dueTime, int64_t period, bool first) {
		return ((T (*)(Timer*, int64_t, int64_t, bool))(Il2CppBase() + 0x4D8AFF8))(this, dueTime, period, first);
	}

};

}
