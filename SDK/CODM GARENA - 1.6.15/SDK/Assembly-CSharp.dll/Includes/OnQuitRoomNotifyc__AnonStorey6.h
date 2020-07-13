#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnQuitRoomNotifycAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnQuitRoomNotify>c__AnonStorey6"));
	}

	template <typename T = uintptr_t> T& ntf() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnQuitRoomNotifycAnonStorey6*, uintptr_t))(Il2CppBase() + 0x2D23F20))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnQuitRoomNotifycAnonStorey6*, uintptr_t))(Il2CppBase() + 0x2D23F94))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(OnQuitRoomNotifycAnonStorey6*, uintptr_t))(Il2CppBase() + 0x2D24008))(this, it);
	}

};

}
