#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInitReturnFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnInitReturnFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t callback, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(OnInitReturnFunc*, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x49939E0))(this, callback, isSuccess, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, bool isSuccess, uint32_t errorCode, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnInitReturnFunc*, uintptr_t, bool, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4993A88))(this, callback, isSuccess, errorCode, _callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnInitReturnFunc*, uintptr_t))(Il2CppBase() + 0x4993B84))(this, result);
	}

};

}
