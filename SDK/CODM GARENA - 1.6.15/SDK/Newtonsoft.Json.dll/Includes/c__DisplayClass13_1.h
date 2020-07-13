#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass131
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass13_1"));
	}

	template <typename T = void*> T& call() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Createb__1(uintptr_t target) {
		return ((T (*)(cDisplayClass131*, uintptr_t))(Il2CppBase() + 0x4DF4CA0))(this, target);
	}

};

}
