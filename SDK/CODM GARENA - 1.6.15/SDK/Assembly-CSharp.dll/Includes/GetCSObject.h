#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCSObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetCSObject"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t L, int32_t idx) {
		return ((T (*)(GetCSObject*, uintptr_t, int32_t))(Il2CppBase() + 0xF58990))(this, L, idx);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, int32_t idx, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetCSObject*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF5A5E0))(this, L, idx, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetCSObject*, uintptr_t))(Il2CppBase() + 0xF5A6C0))(this, result);
	}

};

}
