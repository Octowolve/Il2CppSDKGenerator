#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class Semaphore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Threading", "Semaphore"));
	}


	template <typename T = uintptr_t> static T CreateSemaphore_internal(int32_t initialCount, int32_t maximumCount, Il2CppString* name, uintptr_t* createdNew) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4AEA498))(0, initialCount, maximumCount, name, createdNew);
	}
	template <typename T = int32_t> static T ReleaseSemaphore_internal(uintptr_t handle, int32_t releaseCount, uintptr_t* fail) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4AEA4B0))(0, handle, releaseCount, fail);
	}
	template <typename T = int32_t> T Release() {
		return ((T (*)(Semaphore*))(Il2CppBase() + 0x4AEA4C0))(this);
	}
	template <typename T = int32_t> T Release_1(int32_t releaseCount) {
		return ((T (*)(Semaphore*, int32_t))(Il2CppBase() + 0x4AEA4C8))(this, releaseCount);
	}

};

}
