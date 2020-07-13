#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass520
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass52_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DOLocalRotateQuaternionb__0() {
		return ((T (*)(cDisplayClass520*))(Il2CppBase() + 0x51D3854))(this);
	}
	template <typename T = void> T DOLocalRotateQuaternionb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass520*, Il2CppQuaternion))(Il2CppBase() + 0x51D3880))(this, x);
	}

};

}
