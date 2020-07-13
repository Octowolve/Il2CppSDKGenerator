#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass650
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass65_0"));
	}

	template <typename T = void*> T& specifiedPropertyGet() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T SetIsSpecifiedActionsb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass650*, uintptr_t))(Il2CppBase() + 0x3987184))(this, o);
	}

};

}
