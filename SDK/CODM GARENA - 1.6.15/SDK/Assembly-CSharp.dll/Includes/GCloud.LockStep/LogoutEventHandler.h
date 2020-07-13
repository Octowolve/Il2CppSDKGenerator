#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LogoutEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LogoutEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(LogoutEventHandler*, uintptr_t))(Il2CppBase() + 0x46B00AC))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogoutEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B1E64))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogoutEventHandler*, uintptr_t))(Il2CppBase() + 0x46B1E90))(this, result);
	}

};

}
