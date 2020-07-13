#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyGeneratedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "KeyGeneratedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47D3C4C))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47D5C14))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t))(Il2CppBase() + 0x47D5C4C))(this, result);
	}

};

}
