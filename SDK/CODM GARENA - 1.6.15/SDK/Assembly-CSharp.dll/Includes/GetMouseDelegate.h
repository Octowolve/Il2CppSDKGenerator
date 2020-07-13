#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMouseDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetMouseDelegate"));
	}


	template <typename T = uintptr_t> T Invoke(int32_t button) {
		return ((T (*)(GetMouseDelegate*, int32_t))(Il2CppBase() + 0x39C3AD4))(this, button);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t button, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetMouseDelegate*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C41FC))(this, button, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetMouseDelegate*, uintptr_t))(Il2CppBase() + 0x39C42B8))(this, result);
	}

};

}
