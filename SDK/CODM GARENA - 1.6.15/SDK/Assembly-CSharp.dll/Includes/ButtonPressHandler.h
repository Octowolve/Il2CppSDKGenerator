#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonPressHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonPressHandler"));
	}


	template <typename T = void> T Invoke(Il2CppString* buttonName) {
		return ((T (*)(ButtonPressHandler*, Il2CppString*))(Il2CppBase() + 0x4BA45A8))(this, buttonName);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* buttonName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ButtonPressHandler*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BA4C9C))(this, buttonName, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ButtonPressHandler*, uintptr_t))(Il2CppBase() + 0x4BA4CC8))(this, result);
	}

};

}
