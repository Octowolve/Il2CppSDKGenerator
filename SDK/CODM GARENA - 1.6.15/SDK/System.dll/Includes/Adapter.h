#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Adapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Adapter"));
	}

	template <typename T = uintptr_t> T& ev() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Evaluate(uintptr_t m, uintptr_t sb) {
		return ((T (*)(Adapter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADED94))(this, m, sb);
	}

};

}
