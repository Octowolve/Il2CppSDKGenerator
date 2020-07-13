#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchRoleCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchRoleCallBack"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(SwitchRoleCallBack*))(Il2CppBase() + 0x1AD1F2C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(SwitchRoleCallBack*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B0BBB0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SwitchRoleCallBack*, uintptr_t))(Il2CppBase() + 0x1B0BBDC))(this, result);
	}

};

}
