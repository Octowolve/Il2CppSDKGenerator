#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FloatDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t go, float delta) {
		return ((T (*)(FloatDelegate*, uintptr_t, float))(Il2CppBase() + 0x39BE100))(this, go, delta);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t go, float delta, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FloatDelegate*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C3EEC))(this, go, delta, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FloatDelegate*, uintptr_t))(Il2CppBase() + 0x39C3FB4))(this, result);
	}

};

}
