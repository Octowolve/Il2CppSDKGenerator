#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsFriendcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsFriend>c__AnonStorey7"));
	}

	template <typename T = uint64_t> T& playerid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsFriendcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x329A8CC))(this, it);
	}

};

}
