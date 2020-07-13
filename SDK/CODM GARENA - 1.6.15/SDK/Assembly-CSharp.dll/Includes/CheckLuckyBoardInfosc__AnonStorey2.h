#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckLuckyBoardInfoscAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckLuckyBoardInfos>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& boxId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CheckLuckyBoardInfoscAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23239B8))(this, x);
	}

};

}
