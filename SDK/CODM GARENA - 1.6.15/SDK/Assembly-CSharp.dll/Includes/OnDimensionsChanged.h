#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDimensionsChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDimensionsChanged"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnDimensionsChanged*))(Il2CppBase() + 0x4204A6C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDimensionsChanged*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4205A44))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDimensionsChanged*, uintptr_t))(Il2CppBase() + 0x4205A70))(this, result);
	}

};

}
