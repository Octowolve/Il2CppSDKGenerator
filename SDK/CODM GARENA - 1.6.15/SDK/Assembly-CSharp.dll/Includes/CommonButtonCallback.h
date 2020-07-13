#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommonButtonCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonButtonCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t data) {
		return ((T (*)(CommonButtonCallback*, uintptr_t))(Il2CppBase() + 0x22DEB4C))(this, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CommonButtonCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22DEBE4))(this, data, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CommonButtonCallback*, uintptr_t))(Il2CppBase() + 0x22DEC10))(this, result);
	}

};

}
