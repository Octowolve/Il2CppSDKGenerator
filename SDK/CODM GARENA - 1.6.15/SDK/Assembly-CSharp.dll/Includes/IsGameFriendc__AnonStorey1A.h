#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsGameFriendcAnonStorey1A
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsGameFriend>c__AnonStorey1A"));
	}

	template <typename T = uint64_t> T& friendId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsGameFriendcAnonStorey1A*, uintptr_t))(Il2CppBase() + 0x329A918))(this, it);
	}

};

}
