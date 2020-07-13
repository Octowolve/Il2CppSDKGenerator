#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass290
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass29_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOMoveXb__0() {
		return ((T (*)(cDisplayClass290*))(Il2CppBase() + 0x51D2A40))(this);
	}

};

}
