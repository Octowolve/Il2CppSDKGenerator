#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayActioncAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayAction>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T m__0(uintptr_t inA) {
		return ((T (*)(PlayActioncAnonStorey0*, uintptr_t))(Il2CppBase() + 0x48D6E6C))(this, inA);
	}

};

}
