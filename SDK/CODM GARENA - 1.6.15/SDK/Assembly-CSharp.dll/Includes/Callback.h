#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Callback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Callback"));
	}


	template <typename T = void> T Invoke(uintptr_t param) {
		return ((T (*)(Callback*, uintptr_t))(Il2CppBase() + 0x3CA001C))(this, param);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t param, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Callback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CA0180))(this, param, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Callback*, uintptr_t))(Il2CppBase() + 0x3CA01AC))(this, result);
	}

};

}
