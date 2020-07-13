#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass460
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass46_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOLocalMoveXb__0() {
		return ((T (*)(cDisplayClass460*))(Il2CppBase() + 0x51D3560))(this);
	}
	template <typename T = void> T DOLocalMoveXb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass460*, Il2CppVector3))(Il2CppBase() + 0x51D358C))(this, x);
	}

};

}
