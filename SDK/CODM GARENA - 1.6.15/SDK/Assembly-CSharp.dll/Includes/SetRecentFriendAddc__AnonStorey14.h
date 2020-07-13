#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetRecentFriendAddcAnonStorey14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetRecentFriendAdd>c__AnonStorey14"));
	}

	template <typename T = uint64_t> T& playerid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint64_t it) {
		return ((T (*)(SetRecentFriendAddcAnonStorey14*, uint64_t))(Il2CppBase() + 0x329B83C))(this, it);
	}

};

}
