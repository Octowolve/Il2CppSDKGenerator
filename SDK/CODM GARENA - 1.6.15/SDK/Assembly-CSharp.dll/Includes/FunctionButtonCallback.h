#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FunctionButtonCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunctionButtonCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t data) {
		return ((T (*)(FunctionButtonCallback*, uintptr_t))(Il2CppBase() + 0x22DEC30))(this, data);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t data, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FunctionButtonCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22DECC8))(this, data, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FunctionButtonCallback*, uintptr_t))(Il2CppBase() + 0x22DECF4))(this, result);
	}

};

}
