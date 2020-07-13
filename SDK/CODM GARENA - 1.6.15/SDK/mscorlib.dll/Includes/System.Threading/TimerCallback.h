#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class TimerCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "TimerCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t state) {
		return ((T (*)(TimerCallback*, uintptr_t))(Il2CppBase() + 0x4D8C6C8))(this, state);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TimerCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8C760))(this, state, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TimerCallback*, uintptr_t))(Il2CppBase() + 0x4D8C78C))(this, result);
	}

};

}
