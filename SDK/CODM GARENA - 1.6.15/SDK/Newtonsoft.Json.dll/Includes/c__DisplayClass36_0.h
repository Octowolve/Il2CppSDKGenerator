#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass36_0"));
	}

	template <typename T = uintptr_t> T& property() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T CreateObjectUsingCreatorWithParametersb__1(uintptr_t p) {
		return ((T (*)(cDisplayClass360*, uintptr_t))(Il2CppBase() + 0x399C5D4))(this, p);
	}

};

}
