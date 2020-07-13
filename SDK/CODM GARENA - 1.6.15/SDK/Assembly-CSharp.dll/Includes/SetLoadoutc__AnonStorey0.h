#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLoadoutcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetLoadout>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetLoadoutcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3743104))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetLoadoutcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3743178))(this, it);
	}

};

}
