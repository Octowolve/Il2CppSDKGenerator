#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class NativeEventCalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "NativeEventCalls"));
	}


	template <typename T = uintptr_t> static T CreateEvent_internal(bool manual, bool initial, Il2CppString* name, uintptr_t* created) {
		return ((T (*)(void *, bool, bool, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4D87E2C))(0, manual, initial, name, created);
	}
	template <typename T = bool> static T SetEvent_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D87F8C))(0, handle);
	}
	template <typename T = bool> static T ResetEvent_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D87F58))(0, handle);
	}
	template <typename T = void> static T CloseEvent_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88BE4))(0, handle);
	}

};

}
