#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnFinished
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnFinished"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(OnFinished*))(Il2CppBase() + 0x42ED4FC))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnFinished*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42ED770))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnFinished*, uintptr_t))(Il2CppBase() + 0x42ED79C))(this, result);
	}

};

}
