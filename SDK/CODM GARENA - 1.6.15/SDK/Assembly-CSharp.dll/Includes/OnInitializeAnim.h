#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInitializeAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInitializeAnim"));
	}


	template <typename T = void> T Invoke(uintptr_t go, int32_t wrapIndex) {
		return ((T (*)(OnInitializeAnim*, uintptr_t, int32_t))(Il2CppBase() + 0x3B065E4))(this, go, wrapIndex);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, int32_t wrapIndex, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnInitializeAnim*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B073F4))(this, go, wrapIndex, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInitializeAnim*, uintptr_t))(Il2CppBase() + 0x3B074BC))(this, result);
	}

};

}
