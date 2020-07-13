#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopDrivingHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopDrivingHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(StopDrivingHandler*))(Il2CppBase() + 0x16612E4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(StopDrivingHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x16A1984))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(StopDrivingHandler*, uintptr_t))(Il2CppBase() + 0x16A19B0))(this, result);
	}

};

}
