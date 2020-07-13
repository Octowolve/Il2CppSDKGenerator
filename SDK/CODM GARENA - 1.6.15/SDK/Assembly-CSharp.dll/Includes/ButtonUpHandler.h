#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonUpHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonUpHandler"));
	}


	template <typename T = void> T Invoke(Il2CppString* buttonName) {
		return ((T (*)(ButtonUpHandler*, Il2CppString*))(Il2CppBase() + 0x4BA4510))(this, buttonName);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* buttonName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ButtonUpHandler*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BA4D14))(this, buttonName, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ButtonUpHandler*, uintptr_t))(Il2CppBase() + 0x4BA4D40))(this, result);
	}

};

}
