#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass630
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass63_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOShakePositionb__0() {
		return ((T (*)(cDisplayClass630*))(Il2CppBase() + 0x51D3D8C))(this);
	}
	template <typename T = void> T DOShakePositionb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass630*, Il2CppVector3))(Il2CppBase() + 0x51D3DB8))(this, x);
	}

};

}
