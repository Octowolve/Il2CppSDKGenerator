#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass130
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass13_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOShakeRotationb__0() {
		return ((T (*)(cDisplayClass130*))(Il2CppBase() + 0x44CEC8C))(this);
	}
	template <typename T = void> T DOShakeRotationb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass130*, Il2CppVector3))(Il2CppBase() + 0x44CECD4))(this, x);
	}

};

}
