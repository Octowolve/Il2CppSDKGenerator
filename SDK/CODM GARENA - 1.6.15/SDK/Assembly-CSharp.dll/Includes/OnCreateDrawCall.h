#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCreateDrawCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCreateDrawCall"));
	}


	template <typename T = void> T Invoke(uintptr_t dc, uintptr_t filter, uintptr_t ren) {
		return ((T (*)(OnCreateDrawCall*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39E39AC))(this, dc, filter, ren);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t dc, uintptr_t filter, uintptr_t ren, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnCreateDrawCall*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39E783C))(this, dc, filter, ren, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnCreateDrawCall*, uintptr_t))(Il2CppBase() + 0x39E7878))(this, result);
	}

};

}
