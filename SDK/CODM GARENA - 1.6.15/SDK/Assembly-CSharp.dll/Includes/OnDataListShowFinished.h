#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDataListShowFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDataListShowFinished"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnDataListShowFinished*))(Il2CppBase() + 0x3AC78B4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDataListShowFinished*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ACB174))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDataListShowFinished*, uintptr_t))(Il2CppBase() + 0x3ACB1A0))(this, result);
	}

};

}
