#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdatedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "UpdatedEventHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(UpdatedEventHandler*))(Il2CppBase() + 0x4ACFBC4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdatedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ACFC74))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdatedEventHandler*, uintptr_t))(Il2CppBase() + 0x4ACFCA0))(this, result);
	}

};

}
