#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectCleared
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ObjectCleared"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ObjectCleared*))(Il2CppBase() + 0x4693B08))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ObjectCleared*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4697410))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ObjectCleared*, uintptr_t))(Il2CppBase() + 0x469743C))(this, result);
	}

};

}
