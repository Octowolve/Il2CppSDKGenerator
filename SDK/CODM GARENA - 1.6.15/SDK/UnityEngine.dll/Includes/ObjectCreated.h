#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectCreated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ObjectCreated"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ObjectCreated*))(Il2CppBase() + 0x4693A64))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectCreated*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4697468))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectCreated*, uintptr_t))(Il2CppBase() + 0x4697494))(this, result);
	}

};

}
