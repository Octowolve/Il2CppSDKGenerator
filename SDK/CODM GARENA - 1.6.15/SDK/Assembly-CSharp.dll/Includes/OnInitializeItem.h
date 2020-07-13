#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInitializeItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInitializeItem"));
	}


	template <typename T = void> T Invoke(uintptr_t go, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(OnInitializeItem*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4209670))(this, go, wrapIndex, realIndex);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, int32_t wrapIndex, int32_t realIndex, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnInitializeItem*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4209760))(this, go, wrapIndex, realIndex, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInitializeItem*, uintptr_t))(Il2CppBase() + 0x4209838))(this, result);
	}

};

}
