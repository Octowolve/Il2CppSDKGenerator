#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeSpectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SafeSpectInfo"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatchOBAndFreeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T get_IsSpectating() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D4EE4))(0);
	}
	template <typename T = bool> static T get_IsMatchObserver() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D0E54))(0);
	}
	template <typename T = bool> static T get_IsFriendObserver() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E2B84))(0);
	}
	template <typename T = bool> static T get_IsObserver() {
		return ((T (*)(void *))(Il2CppBase() + 0x36D7D68))(0);
	}
	template <typename T = bool> static T get_IsTeamSpectating() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E2C74))(0);
	}
	template <typename T = uintptr_t> static T get_SpectMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E2E18))(0);
	}
	template <typename T = uintptr_t> static T get_ViewTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E2F3C))(0);
	}
	template <typename T = uint32_t> static T get_ViewTargetID() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E3068))(0);
	}
	template <typename T = bool> static T IsViewTarget(uint32_t playerID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x36D6958))(0, playerID);
	}
	template <typename T = bool> static T IsMatchOBAndFreeView() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E314C))(0);
	}

};

}
