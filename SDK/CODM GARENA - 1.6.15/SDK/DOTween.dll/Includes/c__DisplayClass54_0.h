#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass540
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass54_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOScaleb__0() {
		return ((T (*)(cDisplayClass540*))(Il2CppBase() + 0x51D3930))(this);
	}
	template <typename T = void> T DOScaleb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass540*, Il2CppVector3))(Il2CppBase() + 0x51D395C))(this, x);
	}

};

}
