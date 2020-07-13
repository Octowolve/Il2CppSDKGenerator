#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t inState) {
		return ((T (*)(FucCallback*, uintptr_t))(Il2CppBase() + 0x2B541F4))(this, inState);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t inState, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B54264))(this, inState, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t inState, uintptr_t result) {
		return ((T (*)(FucCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B54294))(this, inState, result);
	}

};

}
