#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsAddRecentFriendcAnonStorey15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsAddRecentFriend>c__AnonStorey15"));
	}

	template <typename T = uint64_t> T& playerid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint64_t it) {
		return ((T (*)(IsAddRecentFriendcAnonStorey15*, uint64_t))(Il2CppBase() + 0x329A8A8))(this, it);
	}

};

}
