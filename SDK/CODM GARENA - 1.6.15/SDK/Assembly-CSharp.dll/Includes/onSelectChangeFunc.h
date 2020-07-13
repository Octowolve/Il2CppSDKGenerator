#pragma once
#include <Il2Cpp/Il2Cpp.h>

class onSelectChangeFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "onSelectChangeFunc"));
	}


	template <typename T = void> T Invoke(int32_t index) {
		return ((T (*)(onSelectChangeFunc*, int32_t))(Il2CppBase() + 0x29B820C))(this, index);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t index, uintptr_t callback, uintptr_t object) {
		return ((T (*)(onSelectChangeFunc*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x29B8354))(this, index, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(onSelectChangeFunc*, uintptr_t))(Il2CppBase() + 0x29B8410))(this, result);
	}

};

}
