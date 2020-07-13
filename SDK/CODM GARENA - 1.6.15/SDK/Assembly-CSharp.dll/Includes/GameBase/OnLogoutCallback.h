#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnLogoutCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnLogoutCallback"));
	}


	template <typename T = void> T Invoke(bool success) {
		return ((T (*)(OnLogoutCallback*, bool))(Il2CppBase() + 0x16233A4))(this, success);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLogoutCallback*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1623414))(this, success, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLogoutCallback*, uintptr_t))(Il2CppBase() + 0x16234D0))(this, result);
	}

};

}
