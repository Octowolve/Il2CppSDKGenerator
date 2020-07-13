#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GENDELEGATE0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "__GEN_DELEGATE0"));
	}


	template <typename T = bool> T Invoke(uintptr_t o) {
		return ((T (*)(GENDELEGATE0*, uintptr_t))(Il2CppBase() + 0xF3B758))(this, o);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GENDELEGATE0*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3B7F0))(this, o, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GENDELEGATE0*, uintptr_t))(Il2CppBase() + 0xF3B81C))(this, result);
	}

};

}
