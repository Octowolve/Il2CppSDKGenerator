#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonDownHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ButtonDownHandler"));
	}


	template <typename T = void> T Invoke(Il2CppString* buttonName) {
		return ((T (*)(ButtonDownHandler*, Il2CppString*))(Il2CppBase() + 0x4BA4478))(this, buttonName);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* buttonName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ButtonDownHandler*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BA4C24))(this, buttonName, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ButtonDownHandler*, uintptr_t))(Il2CppBase() + 0x4BA4C50))(this, result);
	}

};

}
