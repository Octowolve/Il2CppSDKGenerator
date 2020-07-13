#pragma once
#include <Il2Cpp/Il2Cpp.h>

class THasExpCardcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_HasExpCard>c__AnonStorey0"));
	}

	template <typename T = uint32_t> T& ExpCardID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(THasExpCardcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2323B04))(this, it);
	}

};

}
