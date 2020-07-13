#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyGeneratedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "KeyGeneratedEventHandler"));
	}


	template <typename T = void> T Invoke_1(uintptr_t sender, uintptr_t e) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FAD880))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke_1(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FAF86C))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke_1(uintptr_t result) {
		return ((T (*)(KeyGeneratedEventHandler*, uintptr_t))(Il2CppBase() + 0x3FAF8A4))(this, result);
	}

};

}
