#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass250
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass25_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector2> T DOTilingb__0() {
		return ((T (*)(cDisplayClass250*))(Il2CppBase() + 0x51D2894))(this);
	}
	template <typename T = void> T DOTilingb__1(Il2CppVector2 x) {
		return ((T (*)(cDisplayClass250*, Il2CppVector2))(Il2CppBase() + 0x51D28C0))(this, x);
	}

};

}
