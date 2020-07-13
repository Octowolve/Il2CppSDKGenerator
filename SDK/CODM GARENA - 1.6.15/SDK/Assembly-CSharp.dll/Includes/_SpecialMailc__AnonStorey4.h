#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpecialMailcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<_SpecialMail>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& mailData() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SpecialMailcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x3852D28))(this, it);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(SpecialMailcAnonStorey4*))(Il2CppBase() + 0x3852D74))(this);
	}

};

}
