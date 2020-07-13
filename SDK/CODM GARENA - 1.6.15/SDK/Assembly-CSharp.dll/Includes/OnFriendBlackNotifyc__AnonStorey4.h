#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnFriendBlackNotifycAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnFriendBlackNotify>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnFriendBlackNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x329A9B0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnFriendBlackNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x329A9FC))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(OnFriendBlackNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x329AA48))(this, it);
	}

};

}
