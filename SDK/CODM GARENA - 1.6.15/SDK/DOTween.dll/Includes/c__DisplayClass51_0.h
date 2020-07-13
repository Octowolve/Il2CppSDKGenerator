#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass510
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass51_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DOLocalRotateb__0() {
		return ((T (*)(cDisplayClass510*))(Il2CppBase() + 0x51D37E4))(this);
	}
	template <typename T = void> T DOLocalRotateb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass510*, Il2CppQuaternion))(Il2CppBase() + 0x51D3810))(this, x);
	}

};

}
