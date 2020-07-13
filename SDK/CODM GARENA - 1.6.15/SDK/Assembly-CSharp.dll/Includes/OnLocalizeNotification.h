#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnLocalizeNotification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnLocalizeNotification"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnLocalizeNotification*))(Il2CppBase() + 0x434AC3C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLocalizeNotification*, uintptr_t, uintptr_t))(Il2CppBase() + 0x434D38C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLocalizeNotification*, uintptr_t))(Il2CppBase() + 0x434D3B8))(this, result);
	}

};

}
