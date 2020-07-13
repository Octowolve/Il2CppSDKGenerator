#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateGameframeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGameframeHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t frameWork) {
		return ((T (*)(CreateGameframeHandler*, uintptr_t))(Il2CppBase() + 0x3217484))(this, frameWork);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t frameWork, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CreateGameframeHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x321ADDC))(this, frameWork, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CreateGameframeHandler*, uintptr_t))(Il2CppBase() + 0x321AE08))(this, result);
	}

};

}
