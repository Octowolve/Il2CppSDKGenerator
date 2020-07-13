#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass640
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "<>c__DisplayClass64_0"));
	}

	template <typename T = void*> T& shouldSerializeCall() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T CreateShouldSerializeTestb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass640*, uintptr_t))(Il2CppBase() + 0x39870A0))(this, o);
	}

};

}
