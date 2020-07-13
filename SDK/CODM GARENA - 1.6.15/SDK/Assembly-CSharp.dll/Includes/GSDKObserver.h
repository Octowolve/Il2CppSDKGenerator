#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDKObserver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDKObserver"));
	}


	template <typename T = void> T Invoke(Il2CppString* ret) {
		return ((T (*)(GSDKObserver*, Il2CppString*))(Il2CppBase() + 0x2D2F294))(this, ret);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* ret, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GSDKObserver*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D325B4))(this, ret, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GSDKObserver*, uintptr_t))(Il2CppBase() + 0x2D325E0))(this, result);
	}

};

}
