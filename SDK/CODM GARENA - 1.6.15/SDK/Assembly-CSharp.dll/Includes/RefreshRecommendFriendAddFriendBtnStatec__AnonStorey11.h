#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshRecommendFriendAddFriendBtnStatecAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshRecommendFriendAddFriendBtnState>c__AnonStorey11"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshRecommendFriendAddFriendBtnStatecAnonStorey11*, uintptr_t))(Il2CppBase() + 0x329B180))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(RefreshRecommendFriendAddFriendBtnStatecAnonStorey11*, uintptr_t))(Il2CppBase() + 0x329B1F0))(this, it);
	}

};

}
