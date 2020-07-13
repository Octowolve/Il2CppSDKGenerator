#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass410
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass41_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveb__0() {
		return ((T (*)(cDisplayClass410*))(Il2CppBase() + 0x51D3344))(this);
	}
	template <typename T = void> T DOMoveb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass410*, Il2CppVector3))(Il2CppBase() + 0x51D3370))(this, x);
	}

};

}
