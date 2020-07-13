#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "<>c__DisplayClass2"));
	}

	template <typename T = uintptr_t> T& namedVariable() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T UpdateOverridesb__0(uintptr_t o) {
		return ((T (*)(cDisplayClass2*, uintptr_t))(Il2CppBase() + 0x2F16D10))(this, o);
	}

};

}
