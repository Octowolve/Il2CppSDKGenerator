#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryArraySet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TryArraySet"));
	}


	template <typename T = bool> T Invoke(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t array_idx, int32_t obj_idx) {
		return ((T (*)(TryArraySet*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF3BB6C))(this, type, L, translator, obj, array_idx, obj_idx);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t obj, int32_t array_idx, int32_t obj_idx, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TryArraySet*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3BC7C))(this, type, L, translator, obj, array_idx, obj_idx, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(TryArraySet*, uintptr_t))(Il2CppBase() + 0xF3BD8C))(this, result);
	}

};

}
