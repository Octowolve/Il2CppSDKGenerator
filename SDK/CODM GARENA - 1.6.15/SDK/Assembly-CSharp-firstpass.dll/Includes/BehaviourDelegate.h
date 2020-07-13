#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BehaviourDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "BehaviourDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(BehaviourDelegate*))(Il2CppBase() + 0x38A5B68))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(BehaviourDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x38A8804))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(BehaviourDelegate*, uintptr_t))(Il2CppBase() + 0x38A8830))(this, result);
	}

};

}
