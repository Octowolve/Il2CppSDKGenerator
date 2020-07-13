#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetClickedHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetClickedHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t target) {
		return ((T (*)(TargetClickedHandler*, uintptr_t))(Il2CppBase() + 0x464E74C))(this, target);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t target, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TargetClickedHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x464E7E4))(this, target, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TargetClickedHandler*, uintptr_t))(Il2CppBase() + 0x464E810))(this, result);
	}

};

}
