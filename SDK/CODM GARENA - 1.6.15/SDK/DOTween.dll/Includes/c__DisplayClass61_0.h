#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass610
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass61_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOPunchRotationb__0() {
		return ((T (*)(cDisplayClass610*))(Il2CppBase() + 0x51D3C88))(this);
	}
	template <typename T = void> T DOPunchRotationb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass610*, Il2CppVector3))(Il2CppBase() + 0x51D3CB4))(this, x);
	}

};

}
