#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomLoader"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T Invoke(uintptr_t filepath) {
		return ((T (*)(CustomLoader*, uintptr_t))(Il2CppBase() + 0xF46800))(this, filepath);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t filepath, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CustomLoader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF46870))(this, filepath, callback, object);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T EndInvoke(uintptr_t filepath, uintptr_t result) {
		return ((T (*)(CustomLoader*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF468A0))(this, filepath, result);
	}

};

}
