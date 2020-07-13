#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class NetworkStateChangedNotify
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "NetworkStateChangedNotify"));
	}


	template <typename T = void> T Invoke(uintptr_t state) {
		return ((T (*)(NetworkStateChangedNotify*, uintptr_t))(Il2CppBase() + 0x44300CC))(this, state);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NetworkStateChangedNotify*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x443013C))(this, state, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NetworkStateChangedNotify*, uintptr_t))(Il2CppBase() + 0x44301F8))(this, result);
	}

};

}
