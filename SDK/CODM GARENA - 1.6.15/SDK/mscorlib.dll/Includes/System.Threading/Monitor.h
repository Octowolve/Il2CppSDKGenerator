#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Monitor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "Monitor"));
	}


	template <typename T = void> static T Enter(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88684))(0, obj);
	}
	template <typename T = void> static T Exit(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D8868C))(0, obj);
	}
	template <typename T = void> static T Monitor_pulse(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88694))(0, obj);
	}
	template <typename T = bool> static T Monitor_test_synchronised(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D8869C))(0, obj);
	}
	template <typename T = void> static T Pulse(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D886A4))(0, obj);
	}
	template <typename T = bool> static T Monitor_wait(uintptr_t obj, int32_t ms) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4D887C0))(0, obj, ms);
	}
	template <typename T = bool> static T Wait(uintptr_t obj, int32_t millisecondsTimeout) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4D887CC))(0, obj, millisecondsTimeout);
	}

};

}
