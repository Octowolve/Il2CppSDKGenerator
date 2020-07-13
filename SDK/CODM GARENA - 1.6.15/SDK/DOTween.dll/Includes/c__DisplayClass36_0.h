#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass36_0"));
	}

	template <typename T = uintptr_t> T& trans() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppVector3> T DOLocalPathb__0() {
		return ((T (*)(cDisplayClass360*))(Il2CppBase() + 0x51D2E78))(this);
	}
	template <typename T = void> T DOLocalPathb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass360*, Il2CppVector3))(Il2CppBase() + 0x51D2EA4))(this, x);
	}

};

}
