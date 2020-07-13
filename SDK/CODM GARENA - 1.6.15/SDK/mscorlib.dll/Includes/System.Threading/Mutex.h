#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Mutex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "Mutex"));
	}


	template <typename T = uintptr_t> static T CreateMutex_internal(bool initiallyOwned, Il2CppString* name, uintptr_t* created) {
		return ((T (*)(void *, bool, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4D88A20))(0, initiallyOwned, name, created);
	}
	template <typename T = bool> static T ReleaseMutex_internal(uintptr_t handle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D88B10))(0, handle);
	}
	template <typename T = void> T ReleaseMutex() {
		return ((T (*)(Mutex*))(Il2CppBase() + 0x4D88B18))(this);
	}

};

}
