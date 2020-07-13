#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChildHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChildHandler"));
	}


	template <typename T = bool> T Invoke(uintptr_t child) {
		return ((T (*)(ChildHandler*, uintptr_t))(Il2CppBase() + 0x4222784))(this, child);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t child, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ChildHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x422B7D4))(this, child, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(ChildHandler*, uintptr_t))(Il2CppBase() + 0x422B800))(this, result);
	}

};

}
