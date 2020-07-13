#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass55_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOScaleXb__0() {
		return ((T (*)(cDisplayClass550*))(Il2CppBase() + 0x51D399C))(this);
	}
	template <typename T = void> T DOScaleXb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass550*, Il2CppVector3))(Il2CppBase() + 0x51D39C8))(this, x);
	}

};

}
