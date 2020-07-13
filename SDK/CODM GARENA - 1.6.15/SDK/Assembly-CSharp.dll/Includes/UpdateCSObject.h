#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateCSObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateCSObject"));
	}


	template <typename T = void> T Invoke(uintptr_t L, int32_t idx, uintptr_t obj) {
		return ((T (*)(UpdateCSObject*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF59890))(this, L, idx, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, int32_t idx, uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdateCSObject*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF5B190))(this, L, idx, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdateCSObject*, uintptr_t))(Il2CppBase() + 0xF5B270))(this, result);
	}

};

}
