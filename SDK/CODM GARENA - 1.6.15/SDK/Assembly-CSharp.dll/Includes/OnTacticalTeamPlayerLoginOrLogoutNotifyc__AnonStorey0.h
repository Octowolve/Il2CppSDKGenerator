#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnTacticalTeamPlayerLoginOrLogoutNotifycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnTacticalTeamPlayerLoginOrLogoutNotify>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& logInOutInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(OnTacticalTeamPlayerLoginOrLogoutNotifycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x194065C))(this, e);
	}
	template <typename T = bool> T m__1(uintptr_t e) {
		return ((T (*)(OnTacticalTeamPlayerLoginOrLogoutNotifycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1940698))(this, e);
	}

};

}
