#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDataListShowBackToBegin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnDataListShowBackToBegin"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnDataListShowBackToBegin*))(Il2CppBase() + 0x3AC79F4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDataListShowBackToBegin*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ACB11C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDataListShowBackToBegin*, uintptr_t))(Il2CppBase() + 0x3ACB148))(this, result);
	}

};

}
