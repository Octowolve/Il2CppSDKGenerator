#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass132
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass13_2"));
	}

	template <typename T = void*> T& call() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Createb__2(uintptr_t target, uintptr_t arg) {
		return ((T (*)(cDisplayClass132*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF4D6C))(this, target, arg);
	}

};

}
