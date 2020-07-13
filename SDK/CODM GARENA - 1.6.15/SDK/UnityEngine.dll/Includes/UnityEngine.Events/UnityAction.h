#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityAction"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(UnityAction*))(Il2CppBase() + 0x4DAA7F4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnityAction*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAC078))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnityAction*, uintptr_t))(Il2CppBase() + 0x4DAC0A4))(this, result);
	}

};

}
