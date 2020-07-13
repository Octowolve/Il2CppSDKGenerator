#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Trigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Trigger"));
	}


	template <typename T = void> T Invoke(uintptr_t in_gameObject) {
		return ((T (*)(Trigger*, uintptr_t))(Il2CppBase() + 0x22AF770))(this, in_gameObject);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t in_gameObject, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Trigger*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x22AF808))(this, in_gameObject, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Trigger*, uintptr_t))(Il2CppBase() + 0x22AF834))(this, result);
	}

};

}
