#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass570
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass57_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOScaleZb__0() {
		return ((T (*)(cDisplayClass570*))(Il2CppBase() + 0x51D3A74))(this);
	}
	template <typename T = void> T DOScaleZb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass570*, Il2CppVector3))(Il2CppBase() + 0x51D3AA0))(this, x);
	}

};

}
