#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class NetworkStateChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "NetworkStateChanged"));
	}


	template <typename T = void> T Invoke(uintptr_t state) {
		return ((T (*)(NetworkStateChanged*, uintptr_t))(Il2CppBase() + 0x442FED0))(this, state);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t state, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NetworkStateChanged*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x442FFF4))(this, state, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NetworkStateChanged*, uintptr_t))(Il2CppBase() + 0x44300B0))(this, result);
	}

};

}
