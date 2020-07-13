#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass430
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass43_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveYb__0() {
		return ((T (*)(cDisplayClass430*))(Il2CppBase() + 0x51D341C))(this);
	}
	template <typename T = void> T DOMoveYb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass430*, Il2CppVector3))(Il2CppBase() + 0x51D3448))(this, x);
	}

};

}
