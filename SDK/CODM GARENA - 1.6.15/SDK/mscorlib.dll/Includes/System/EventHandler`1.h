#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class EventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "EventHandler`1"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(EventHandler1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5156F84))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventHandler1*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5157048))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventHandler1*, uintptr_t))(Il2CppBase() + 0x5157080))(this, result);
	}

};

}
