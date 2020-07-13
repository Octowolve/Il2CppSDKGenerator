#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class ThreadStart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "ThreadStart"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ThreadStart*))(Il2CppBase() + 0x4D8AB80))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ThreadStart*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8AC10))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ThreadStart*, uintptr_t))(Il2CppBase() + 0x4D8AC3C))(this, result);
	}

};

}
