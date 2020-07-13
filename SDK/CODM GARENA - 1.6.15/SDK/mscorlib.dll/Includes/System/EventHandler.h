#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class EventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "EventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(EventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FCF5F4))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FCF6B8))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventHandler*, uintptr_t))(Il2CppBase() + 0x3FCF6F0))(this, result);
	}

};

}
