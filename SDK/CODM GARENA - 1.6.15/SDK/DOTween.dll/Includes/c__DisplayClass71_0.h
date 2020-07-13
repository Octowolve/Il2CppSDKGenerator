#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass710
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass71_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOLocalPathb__0() {
		return ((T (*)(cDisplayClass710*))(Il2CppBase() + 0x51D44F4))(this);
	}
	template <typename T = void> T DOLocalPathb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass710*, Il2CppVector3))(Il2CppBase() + 0x51D4520))(this, x);
	}

};

}
