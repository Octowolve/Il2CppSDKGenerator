#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class ThreadPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "ThreadPool"));
	}


	template <typename T = bool> static T QueueUserWorkItem(uintptr_t callBack, uintptr_t state) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D892EC))(0, callBack, state);
	}
	template <typename T = uintptr_t> static T RegisterWaitForSingleObject(uintptr_t waitObject, uintptr_t callBack, uintptr_t state, int64_t millisecondsTimeOutInterval, bool executeOnlyOnce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int64_t, bool))(Il2CppBase() + 0x4D8A7E8))(0, waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce);
	}
	template <typename T = uintptr_t> static T RegisterWaitForSingleObject_1(uintptr_t waitObject, uintptr_t callBack, uintptr_t state, uintptr_t timeout, bool executeOnlyOnce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4D8AAD0))(0, waitObject, callBack, state, timeout, executeOnlyOnce);
	}

};

}
