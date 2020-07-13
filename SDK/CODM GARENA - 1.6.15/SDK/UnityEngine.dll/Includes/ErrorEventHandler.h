#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "ErrorEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t source, Il2CppString* message) {
		return ((T (*)(ErrorEventHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4D3DBB4))(this, source, message);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t source, Il2CppString* message, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ErrorEventHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D3DCC0))(this, source, message, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ErrorEventHandler*, uintptr_t))(Il2CppBase() + 0x4D3DCF8))(this, result);
	}

};

}
