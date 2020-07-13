#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventFunction1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "EventFunction`1"));
	}


	template <typename T = void> T Invoke(uintptr_t handler, uintptr_t eventData) {
		return ((T (*)(EventFunction1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x518A694))(this, handler, eventData);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t handler, uintptr_t eventData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventFunction1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x518A758))(this, handler, eventData, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventFunction1*, uintptr_t))(Il2CppBase() + 0x518A790))(this, result);
	}

};

}
