#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotifyClickHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(NotifyClickHandler*))(Il2CppBase() + 0x3710FDC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(NotifyClickHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x371108C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NotifyClickHandler*, uintptr_t))(Il2CppBase() + 0x37110B8))(this, result);
	}

};

}
