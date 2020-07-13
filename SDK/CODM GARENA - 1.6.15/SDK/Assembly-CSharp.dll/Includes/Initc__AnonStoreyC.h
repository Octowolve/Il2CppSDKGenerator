#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitcAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Init>c__AnonStoreyC"));
	}

	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(InitcAnonStoreyC*))(Il2CppBase() + 0x2B76838))(this);
	}

};

}
