#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSchemeChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnSchemeChange"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnSchemeChange*))(Il2CppBase() + 0x39AF680))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnSchemeChange*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C465C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnSchemeChange*, uintptr_t))(Il2CppBase() + 0x39C4688))(this, result);
	}

};

}
