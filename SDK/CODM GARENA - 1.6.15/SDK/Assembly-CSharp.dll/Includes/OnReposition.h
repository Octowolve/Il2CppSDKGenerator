#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnReposition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnReposition"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnReposition*))(Il2CppBase() + 0x2FB10C4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnReposition*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2FB1488))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnReposition*, uintptr_t))(Il2CppBase() + 0x2FB14B4))(this, result);
	}

};

}
