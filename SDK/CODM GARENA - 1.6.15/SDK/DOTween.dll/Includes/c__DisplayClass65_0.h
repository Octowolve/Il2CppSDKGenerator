#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass650
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass65_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOShakeRotationb__0() {
		return ((T (*)(cDisplayClass650*))(Il2CppBase() + 0x51D3E90))(this);
	}
	template <typename T = void> T DOShakeRotationb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass650*, Il2CppVector3))(Il2CppBase() + 0x51D3EBC))(this, x);
	}

};

}
