#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LegacyEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LegacyEvent"));
	}


	template <typename T = void> T Invoke(Il2CppString* val) {
		return ((T (*)(LegacyEvent*, Il2CppString*))(Il2CppBase() + 0x2F81EE4))(this, val);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* val, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LegacyEvent*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2F87A6C))(this, val, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LegacyEvent*, uintptr_t))(Il2CppBase() + 0x2F87A98))(this, result);
	}

};

}
