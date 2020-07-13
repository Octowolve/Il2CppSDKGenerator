#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ErrorLoggerInteropDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorLoggerInteropDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppString* message) {
		return ((T (*)(ErrorLoggerInteropDelegate*, Il2CppString*))(Il2CppBase() + 0x49069C8))(this, message);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* message, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ErrorLoggerInteropDelegate*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4906A60))(this, message, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ErrorLoggerInteropDelegate*, uintptr_t))(Il2CppBase() + 0x4906A8C))(this, result);
	}

};

}
