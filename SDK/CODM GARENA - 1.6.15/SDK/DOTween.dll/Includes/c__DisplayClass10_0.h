#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass100
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass10_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOShakePositionb__0() {
		return ((T (*)(cDisplayClass100*))(Il2CppBase() + 0x44CEA74))(this);
	}
	template <typename T = void> T DOShakePositionb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass100*, Il2CppVector3))(Il2CppBase() + 0x44CEABC))(this, x);
	}

};

}
