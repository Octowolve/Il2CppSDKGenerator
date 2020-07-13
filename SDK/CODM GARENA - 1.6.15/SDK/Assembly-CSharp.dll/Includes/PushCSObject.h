#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushCSObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushCSObject"));
	}


	template <typename T = void> T Invoke(uintptr_t L, uintptr_t obj) {
		return ((T (*)(PushCSObject*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF59338))(this, L, obj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t L, uintptr_t obj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PushCSObject*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF5B0AC))(this, L, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PushCSObject*, uintptr_t))(Il2CppBase() + 0xF5B170))(this, result);
	}

};

}
