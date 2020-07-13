#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AbortHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "AbortHelper"));
	}

	template <typename T = uintptr_t> T& Connection() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Abort(uintptr_t sender, uintptr_t args) {
		return ((T (*)(AbortHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6D8BC))(this, sender, args);
	}

};

}
