#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ForceEndSkydivingCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ForceEndSkydivingCallbackFunc"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ForceEndSkydivingCallbackFunc*))(Il2CppBase() + 0x357F200))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ForceEndSkydivingCallbackFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35A457C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ForceEndSkydivingCallbackFunc*, uintptr_t))(Il2CppBase() + 0x35A45A8))(this, result);
	}

};

}
