#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshNtfFriendStateListcAnonStorey1C
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshNtfFriendStateList>c__AnonStorey1C"));
	}

	template <typename T = int64_t> T& milluSecond() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshNtfFriendStateListcAnonStorey1C*, uintptr_t))(Il2CppBase() + 0x329B138))(this, it);
	}

};

}
