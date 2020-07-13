#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveCallBack"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ActiveCallBack*))(Il2CppBase() + 0x2E9D6E8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ActiveCallBack*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EB2E24))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ActiveCallBack*, uintptr_t))(Il2CppBase() + 0x2EB2E50))(this, result);
	}

};

}
