#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAnyKeyFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetAnyKeyFunc"));
	}


	template <typename T = bool> T Invoke() {
		return ((T (*)(GetAnyKeyFunc*))(Il2CppBase() + 0x39BF1AC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetAnyKeyFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39C3FF4))(this, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetAnyKeyFunc*, uintptr_t))(Il2CppBase() + 0x39C4020))(this, result);
	}

};

}
