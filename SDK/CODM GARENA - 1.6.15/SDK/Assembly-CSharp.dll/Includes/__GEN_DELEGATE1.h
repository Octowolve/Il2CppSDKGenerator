#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GENDELEGATE1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "__GEN_DELEGATE1"));
	}


	template <typename T = bool> T Invoke(uintptr_t o) {
		return ((T (*)(GENDELEGATE1*, uintptr_t))(Il2CppBase() + 0xF3B850))(this, o);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t o, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GENDELEGATE1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF3B8E8))(this, o, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GENDELEGATE1*, uintptr_t))(Il2CppBase() + 0xF3B914))(this, result);
	}

};

}
