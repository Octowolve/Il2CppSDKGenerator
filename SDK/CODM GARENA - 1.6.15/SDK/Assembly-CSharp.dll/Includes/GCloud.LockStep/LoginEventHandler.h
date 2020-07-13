#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LoginEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LoginEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(LoginEventHandler*, uintptr_t))(Il2CppBase() + 0x46AFEF8))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LoginEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B1E18))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LoginEventHandler*, uintptr_t))(Il2CppBase() + 0x46B1E44))(this, result);
	}

};

}
