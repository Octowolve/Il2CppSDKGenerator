#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaRunnable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaRunnable"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(AndroidJavaRunnable*))(Il2CppBase() + 0x4685BFC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(AndroidJavaRunnable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4685C8C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AndroidJavaRunnable*, uintptr_t))(Il2CppBase() + 0x4685CB8))(this, result);
	}

};

}
