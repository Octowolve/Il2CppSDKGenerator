#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LowMemoryCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "LowMemoryCallback"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(LowMemoryCallback*))(Il2CppBase() + 0x4698A48))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(LowMemoryCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x469AD3C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LowMemoryCallback*, uintptr_t))(Il2CppBase() + 0x469AD68))(this, result);
	}

};

}
