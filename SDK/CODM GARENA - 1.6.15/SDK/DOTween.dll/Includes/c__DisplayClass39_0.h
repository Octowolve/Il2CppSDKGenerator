#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass390
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass39_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector2> T DOResizeb__0() {
		return ((T (*)(cDisplayClass390*))(Il2CppBase() + 0x51D31C4))(this);
	}
	template <typename T = void> T DOResizeb__1(Il2CppVector2 x) {
		return ((T (*)(cDisplayClass390*, Il2CppVector2))(Il2CppBase() + 0x51D3230))(this, x);
	}

};

}
