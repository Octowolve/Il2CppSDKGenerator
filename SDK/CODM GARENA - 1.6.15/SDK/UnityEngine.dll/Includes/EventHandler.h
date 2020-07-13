#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "EventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t source) {
		return ((T (*)(EventHandler*, uintptr_t))(Il2CppBase() + 0x4D3D924))(this, source);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t source, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3DD18))(this, source, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventHandler*, uintptr_t))(Il2CppBase() + 0x4D3DD44))(this, result);
	}

};

}
