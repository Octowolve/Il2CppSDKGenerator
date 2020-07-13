#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnParticleFinish
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnParticleFinish"));
	}


	template <typename T = void> T Invoke(uintptr_t ob) {
		return ((T (*)(OnParticleFinish*, uintptr_t))(Il2CppBase() + 0x3F003E0))(this, ob);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t ob, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnParticleFinish*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F00708))(this, ob, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnParticleFinish*, uintptr_t))(Il2CppBase() + 0x3F00734))(this, result);
	}

};

}
