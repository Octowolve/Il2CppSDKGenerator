#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCustomInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCustomInput"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnCustomInput*))(Il2CppBase() + 0x39BC8A0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnCustomInput*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C4604))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnCustomInput*, uintptr_t))(Il2CppBase() + 0x39C4630))(this, result);
	}

};

}
