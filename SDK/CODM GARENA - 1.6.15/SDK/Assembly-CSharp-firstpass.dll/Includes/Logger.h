#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Logger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "Logger"));
	}


	template <typename T = void> T Invoke(Il2CppString* message) {
		return ((T (*)(Logger*, Il2CppString*))(Il2CppBase() + 0x4F81ADC))(this, message);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* message, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Logger*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4F81CD0))(this, message, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Logger*, uintptr_t))(Il2CppBase() + 0x4F81CFC))(this, result);
	}

};

}
