#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryArrayGet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TryArrayGet"));
	}


	template <typename T = bool> T Invoke(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t index) {
		return ((T (*)(TryArrayGet*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF3B948))(this, type, L, translator, obj, index);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t index, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TryArrayGet*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3BA3C))(this, type, L, translator, obj, index, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(TryArrayGet*, uintptr_t))(Il2CppBase() + 0xF3BB38))(this, result);
	}

};

}
