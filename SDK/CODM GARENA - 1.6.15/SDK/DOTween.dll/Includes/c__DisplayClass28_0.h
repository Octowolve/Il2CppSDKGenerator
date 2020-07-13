#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass280
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass28_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveb__0() {
		return ((T (*)(cDisplayClass280*))(Il2CppBase() + 0x51D2A0C))(this);
	}

};

}
