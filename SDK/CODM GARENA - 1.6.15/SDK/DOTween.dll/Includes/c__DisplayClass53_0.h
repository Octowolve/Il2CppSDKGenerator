#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass530
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass53_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOScaleb__0() {
		return ((T (*)(cDisplayClass530*))(Il2CppBase() + 0x51D38C4))(this);
	}
	template <typename T = void> T DOScaleb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass530*, Il2CppVector3))(Il2CppBase() + 0x51D38F0))(this, x);
	}

};

}
