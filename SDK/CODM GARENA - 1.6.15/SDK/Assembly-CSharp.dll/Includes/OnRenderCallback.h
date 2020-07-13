#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRenderCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnRenderCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t mat) {
		return ((T (*)(OnRenderCallback*, uintptr_t))(Il2CppBase() + 0x39E43A8))(this, mat);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t mat, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnRenderCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39E7898))(this, mat, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnRenderCallback*, uintptr_t))(Il2CppBase() + 0x39E78C4))(this, result);
	}

};

}
