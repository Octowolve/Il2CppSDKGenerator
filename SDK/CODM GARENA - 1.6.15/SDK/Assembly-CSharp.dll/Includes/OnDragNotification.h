#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDragNotification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDragNotification"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnDragNotification*))(Il2CppBase() + 0x2F9F748))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDragNotification*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2FA3C4C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDragNotification*, uintptr_t))(Il2CppBase() + 0x2FA3C78))(this, result);
	}

};

}
