#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnLoginWithConfirmCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnLoginWithConfirmCallback"));
	}


	template <typename T = void> T Invoke(bool success, int32_t retCode) {
		return ((T (*)(OnLoginWithConfirmCallback*, bool, int32_t))(Il2CppBase() + 0x1623200))(this, success, retCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, int32_t retCode, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLoginWithConfirmCallback*, bool, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1623294))(this, success, retCode, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLoginWithConfirmCallback*, uintptr_t))(Il2CppBase() + 0x1623374))(this, result);
	}

};

}
