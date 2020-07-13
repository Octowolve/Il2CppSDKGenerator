#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateFriendAddMessageNotifycAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateFriendAddMessageNotify>c__AnonStorey9"));
	}

	template <typename T = uintptr_t> T& clientInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$8() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(UpdateFriendAddMessageNotifycAnonStorey9*, uintptr_t))(Il2CppBase() + 0x329B868))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(UpdateFriendAddMessageNotifycAnonStorey9*, uintptr_t))(Il2CppBase() + 0x329B904))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(UpdateFriendAddMessageNotifycAnonStorey9*, uintptr_t))(Il2CppBase() + 0x329B950))(this, it);
	}

};

}
