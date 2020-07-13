#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass450
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass45_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOLocalMoveb__0() {
		return ((T (*)(cDisplayClass450*))(Il2CppBase() + 0x51D34F4))(this);
	}
	template <typename T = void> T DOLocalMoveb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass450*, Il2CppVector3))(Il2CppBase() + 0x51D3520))(this, x);
	}

};

}
