#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsRecentPlayercAnonStorey16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsRecentPlayer>c__AnonStorey16"));
	}

	template <typename T = uint64_t> T& playerid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsRecentPlayercAnonStorey16*, uintptr_t))(Il2CppBase() + 0x329A964))(this, it);
	}

};

}
