#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSuccessFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnSuccessFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback) {
		return ((T (*)(OnSuccessFunc*, uintptr_t))(Il2CppBase() + 0x4991084))(this, callback);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnSuccessFunc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x49910F4))(this, callback, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnSuccessFunc*, uintptr_t))(Il2CppBase() + 0x49911B0))(this, result);
	}

};

}
