#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarmUpImplFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarmUpImplFunc"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t svc) {
		return ((T (*)(WarmUpImplFunc*, uintptr_t))(Il2CppBase() + 0x2B79B4C))(this, svc);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t svc, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WarmUpImplFunc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B79C9C))(this, svc, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(WarmUpImplFunc*, uintptr_t))(Il2CppBase() + 0x2B79CC8))(this, result);
	}

};

}
