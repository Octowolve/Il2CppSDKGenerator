#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass660
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass66_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOShakeScaleb__0() {
		return ((T (*)(cDisplayClass660*))(Il2CppBase() + 0x51D3F28))(this);
	}
	template <typename T = void> T DOShakeScaleb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass660*, Il2CppVector3))(Il2CppBase() + 0x51D3F54))(this, x);
	}

};

}
