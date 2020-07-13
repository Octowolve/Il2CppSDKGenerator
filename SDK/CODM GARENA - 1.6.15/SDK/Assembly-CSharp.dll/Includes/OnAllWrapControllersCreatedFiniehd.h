#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnAllWrapControllersCreatedFiniehd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnAllWrapControllersCreatedFiniehd"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnAllWrapControllersCreatedFiniehd*))(Il2CppBase() + 0x3ACADEC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnAllWrapControllersCreatedFiniehd*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ACB0C4))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnAllWrapControllersCreatedFiniehd*, uintptr_t))(Il2CppBase() + 0x3ACB0F0))(this, result);
	}

};

}
