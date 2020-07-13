#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass801
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass8_0`1"));
	}

	template <typename T = uintptr_t> T& fieldInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T CreateSetb__0(uintptr_t o, uintptr_t v) {
		return ((T (*)(cDisplayClass801*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B67F8C))(this, o, v);
	}

};

}
