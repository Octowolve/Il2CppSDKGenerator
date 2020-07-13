#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__AnonStorey6"));
	}

	template <typename T = Il2CppString*> T& label() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t p) {
		return ((T (*)(cAnonStorey6*, uintptr_t))(Il2CppBase() + 0x480A6A4))(this, p);
	}

};

}
