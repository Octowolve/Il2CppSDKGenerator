#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass601
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass6_0`1"));
	}

	template <typename T = uintptr_t> T& propertyInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T CreateGetb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass601*, uintptr_t))(Il2CppBase() + 0x4B67ED0))(this, o);
	}

};

}