#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass130
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass13_0"));
	}

	template <typename T = void*> T& ctor() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T Createb__0(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(cDisplayClass130*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DF4C08))(this, args);
	}

};

}
