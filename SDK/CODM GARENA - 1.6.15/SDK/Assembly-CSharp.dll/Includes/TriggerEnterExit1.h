#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerEnterExit1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerEnterExit1"));
	}


	template <typename T = void> T Invoke(uintptr_t p, bool enter, int32_t index) {
		return ((T (*)(TriggerEnterExit1*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x2E6DC50))(this, p, enter, index);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t p, bool enter, int32_t index, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TriggerEnterExit1*, uintptr_t, bool, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E6DD2C))(this, p, enter, index, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TriggerEnterExit1*, uintptr_t))(Il2CppBase() + 0x2E6DE10))(this, result);
	}

};

}
