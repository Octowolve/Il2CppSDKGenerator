#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass9_0`1"));
	}

	template <typename T = uintptr_t> T& propertyInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T CreateSetb__0(uintptr_t o, uintptr_t v) {
		return ((T (*)(cDisplayClass901*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B67FE0))(this, o, v);
	}

};

}
