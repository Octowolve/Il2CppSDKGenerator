#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRoomPlayerEnterNotifycAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnRoomPlayerEnterNotify>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& ntf() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnRoomPlayerEnterNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x2D2407C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnRoomPlayerEnterNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x2D240F0))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(OnRoomPlayerEnterNotifycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x2D24164))(this, it);
	}

};

}
