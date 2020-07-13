#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucActionRun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucActionRun"));
	}


	template <typename T = bool> T Invoke(float delta, uintptr_t inActor) {
		return ((T (*)(FucActionRun*, float, uintptr_t))(Il2CppBase() + 0x3708270))(this, delta, inActor);
	}
	template <typename T = uintptr_t> T BeginInvoke(float delta, uintptr_t inActor, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucActionRun*, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37082FC))(this, delta, inActor, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucActionRun*, uintptr_t))(Il2CppBase() + 0x37083C0))(this, result);
	}

};

}
