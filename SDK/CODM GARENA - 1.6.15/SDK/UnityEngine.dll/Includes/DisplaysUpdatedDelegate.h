#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisplaysUpdatedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "DisplaysUpdatedDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(DisplaysUpdatedDelegate*))(Il2CppBase() + 0x4DA6BFC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(DisplaysUpdatedDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA6E5C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DisplaysUpdatedDelegate*, uintptr_t))(Il2CppBase() + 0x4DA6E88))(this, result);
	}

};

}
