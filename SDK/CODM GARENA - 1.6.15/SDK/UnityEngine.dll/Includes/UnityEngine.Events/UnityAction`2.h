#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Events {

class UnityAction2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Events", "UnityAction`2"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(UnityAction2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x511AD4C))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnityAction2*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x511AE10))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnityAction2*, uintptr_t))(Il2CppBase() + 0x511AE48))(this, result);
	}

};

}
