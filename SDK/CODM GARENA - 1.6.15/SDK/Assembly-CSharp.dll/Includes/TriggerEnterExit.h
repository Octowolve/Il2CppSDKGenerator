#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerEnterExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerEnterExit"));
	}


	template <typename T = void> T Invoke(uintptr_t p, bool enter) {
		return ((T (*)(TriggerEnterExit*, uintptr_t, bool))(Il2CppBase() + 0x2E6DAAC))(this, p, enter);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t p, bool enter, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TriggerEnterExit*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E6DB70))(this, p, enter, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TriggerEnterExit*, uintptr_t))(Il2CppBase() + 0x2E6DC30))(this, result);
	}

};

}
