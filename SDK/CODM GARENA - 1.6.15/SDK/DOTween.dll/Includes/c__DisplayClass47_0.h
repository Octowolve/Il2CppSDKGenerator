#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass470
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass47_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOLocalMoveYb__0() {
		return ((T (*)(cDisplayClass470*))(Il2CppBase() + 0x51D35CC))(this);
	}
	template <typename T = void> T DOLocalMoveYb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass470*, Il2CppVector3))(Il2CppBase() + 0x51D35F8))(this, x);
	}

};

}
