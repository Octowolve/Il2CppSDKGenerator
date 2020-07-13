#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass90
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass9_0"));
	}

	template <typename T = void*> T& call() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T CreateCastConverterb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass90*, uintptr_t))(Il2CppBase() + 0x4DE8224))(this, o);
	}

};

}
