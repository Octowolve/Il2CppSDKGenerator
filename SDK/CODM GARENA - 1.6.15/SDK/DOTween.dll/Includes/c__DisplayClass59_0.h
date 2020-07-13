#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass59_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOPunchPositionb__0() {
		return ((T (*)(cDisplayClass590*))(Il2CppBase() + 0x51D3B50))(this);
	}
	template <typename T = void> T DOPunchPositionb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass590*, Il2CppVector3))(Il2CppBase() + 0x51D3B7C))(this, x);
	}

};

}
