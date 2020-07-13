#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMatineecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayMatinee>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(PlayMatineecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x19C973C))(this, e);
	}

};

}
