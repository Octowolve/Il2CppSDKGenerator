#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass820
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass82_0"));
	}

	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppVector3> T DOBlendableScaleByb__0() {
		return ((T (*)(cDisplayClass820*))(Il2CppBase() + 0x51D5018))(this);
	}
	template <typename T = void> T DOBlendableScaleByb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass820*, Il2CppVector3))(Il2CppBase() + 0x51D502C))(this, x);
	}

};

}
