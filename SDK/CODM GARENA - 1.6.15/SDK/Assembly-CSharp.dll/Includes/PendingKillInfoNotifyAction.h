#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PendingKillInfoNotifyAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PendingKillInfoNotifyAction"));
	}


	template <typename T = void> T Invoke(uintptr_t msg) {
		return ((T (*)(PendingKillInfoNotifyAction*, uintptr_t))(Il2CppBase() + 0x2B088DC))(this, msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PendingKillInfoNotifyAction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B08974))(this, msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PendingKillInfoNotifyAction*, uintptr_t))(Il2CppBase() + 0x2B089A0))(this, result);
	}

};

}
