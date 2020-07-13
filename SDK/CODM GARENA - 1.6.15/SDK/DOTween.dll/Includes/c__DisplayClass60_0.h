#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass60_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOPunchScaleb__0() {
		return ((T (*)(cDisplayClass600*))(Il2CppBase() + 0x51D3C1C))(this);
	}
	template <typename T = void> T DOPunchScaleb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass600*, Il2CppVector3))(Il2CppBase() + 0x51D3C48))(this, x);
	}

};

}
