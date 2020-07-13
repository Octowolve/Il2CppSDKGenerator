#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info) {
		return ((T (*)(EventCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48F5EFC))(this, in_cookie, in_type, in_info);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48F5FD8))(this, in_cookie, in_type, in_info, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventCallback*, uintptr_t))(Il2CppBase() + 0x48F60A0))(this, result);
	}

};

}
