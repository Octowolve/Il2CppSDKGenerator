#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogCallbackDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogCallbackDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(LogCallbackDelegate*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5302C10))(this, condition, stackTrace, type);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogCallbackDelegate*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5303E64))(this, condition, stackTrace, type, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogCallbackDelegate*, uintptr_t))(Il2CppBase() + 0x5303F2C))(this, result);
	}

};

}
