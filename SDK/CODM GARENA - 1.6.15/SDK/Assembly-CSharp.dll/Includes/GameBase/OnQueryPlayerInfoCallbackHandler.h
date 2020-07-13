#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnQueryPlayerInfoCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnQueryPlayerInfoCallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(OnQueryPlayerInfoCallbackHandler*, uintptr_t))(Il2CppBase() + 0x16234F0))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnQueryPlayerInfoCallbackHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1623588))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnQueryPlayerInfoCallbackHandler*, uintptr_t))(Il2CppBase() + 0x16235B4))(this, result);
	}

};

}
