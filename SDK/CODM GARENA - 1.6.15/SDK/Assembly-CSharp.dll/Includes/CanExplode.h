#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanExplode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanExplode"));
	}


	template <typename T = bool> T Invoke(uintptr_t impactInfo) {
		return ((T (*)(CanExplode*, uintptr_t))(Il2CppBase() + 0x33A113C))(this, impactInfo);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t impactInfo, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CanExplode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A359C))(this, impactInfo, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t impactInfo, uintptr_t result) {
		return ((T (*)(CanExplode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A35CC))(this, impactInfo, result);
	}

};

}
