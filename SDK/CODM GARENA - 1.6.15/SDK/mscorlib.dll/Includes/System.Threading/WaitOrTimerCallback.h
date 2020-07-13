#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class WaitOrTimerCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "WaitOrTimerCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t state, bool timedOut) {
		return ((T (*)(WaitOrTimerCallback*, uintptr_t, bool))(Il2CppBase() + 0x4D8950C))(this, state, timedOut);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, bool timedOut, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WaitOrTimerCallback*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8D2EC))(this, state, timedOut, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WaitOrTimerCallback*, uintptr_t))(Il2CppBase() + 0x4D8D3B4))(this, result);
	}

};

}
