#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventUpdateEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventUpdateEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* info) {
		return ((T (*)(EventUpdateEventHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4542F38))(this, code, info);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* info, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventUpdateEventHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454BAD4))(this, code, info, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventUpdateEventHandler*, uintptr_t))(Il2CppBase() + 0x454BB98))(this, result);
	}

};

}
