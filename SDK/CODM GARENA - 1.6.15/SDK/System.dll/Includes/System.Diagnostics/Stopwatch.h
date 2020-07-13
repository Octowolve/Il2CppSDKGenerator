#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class Stopwatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "Stopwatch"));
	}

	template <typename T = int64_t> static T& Frequency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsHighResolution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int64_t> T& elapsed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& started() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& is_running() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int64_t> static T GetTimestamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x42AFB18))(0);
	}
	template <typename T = uintptr_t> T get_Elapsed() {
		return ((T (*)(Stopwatch*))(Il2CppBase() + 0x42AFB1C))(this);
	}
	template <typename T = int64_t> T get_ElapsedTicks() {
		return ((T (*)(Stopwatch*))(Il2CppBase() + 0x42AFD14))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Stopwatch*))(Il2CppBase() + 0x42AFDE0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Stopwatch*))(Il2CppBase() + 0x42AFDF4))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(Stopwatch*))(Il2CppBase() + 0x42AFEA8))(this);
	}

};

}
