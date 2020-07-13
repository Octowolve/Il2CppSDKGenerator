#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass420
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass42_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveXb__0() {
		return ((T (*)(cDisplayClass420*))(Il2CppBase() + 0x51D33B0))(this);
	}
	template <typename T = void> T DOMoveXb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass420*, Il2CppVector3))(Il2CppBase() + 0x51D33DC))(this, x);
	}

};

}
