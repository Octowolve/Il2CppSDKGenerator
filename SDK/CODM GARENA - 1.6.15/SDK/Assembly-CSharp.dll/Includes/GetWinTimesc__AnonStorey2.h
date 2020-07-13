#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetWinTimescAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetWinTimes>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& mapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetWinTimescAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3B288C8))(this, it);
	}

};

}
