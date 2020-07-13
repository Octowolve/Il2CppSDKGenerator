#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnClickCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnClickCell"));
	}


	template <typename T = void> T Invoke(int32_t index) {
		return ((T (*)(OnClickCell*, int32_t))(Il2CppBase() + 0x3AD9AC4))(this, index);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t index, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnClickCell*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AD9B58))(this, index, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnClickCell*, uintptr_t))(Il2CppBase() + 0x3AD9C14))(this, result);
	}

};

}
