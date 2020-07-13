#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class WaitCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "WaitCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t state) {
		return ((T (*)(WaitCallback*, uintptr_t))(Il2CppBase() + 0x4D8C798))(this, state);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WaitCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D8A7BC))(this, state, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WaitCallback*, uintptr_t))(Il2CppBase() + 0x4D8C830))(this, result);
	}

};

}
