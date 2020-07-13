#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucTraversing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucTraversing"));
	}


	template <typename T = bool> T Invoke(uintptr_t inObj) {
		return ((T (*)(FucTraversing*, uintptr_t))(Il2CppBase() + 0x48D3800))(this, inObj);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inObj, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucTraversing*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48D3898))(this, inObj, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucTraversing*, uintptr_t))(Il2CppBase() + 0x48D38C4))(this, result);
	}

};

}
