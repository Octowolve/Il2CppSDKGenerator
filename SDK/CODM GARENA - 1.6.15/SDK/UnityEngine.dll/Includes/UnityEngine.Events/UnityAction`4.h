#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityAction4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityAction`4"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {
		return ((T (*)(UnityAction4*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5187008))(this, arg0, arg1, arg2, arg3);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnityAction4*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x51870F0))(this, arg0, arg1, arg2, arg3, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnityAction4*, uintptr_t))(Il2CppBase() + 0x5187134))(this, result);
	}

};

}
