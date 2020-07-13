#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class InviteAndShareSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "InviteAndShareSwitch"));
	}

	template <typename T = bool> static T& mInviteFriendShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& mInviteFriendShowWhenGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& mInviteTeamShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& mInviteTeamShowWhenGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = bool> static T& mShareShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& mShareShowWhenGuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& mMessengerSendShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSwitchData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInviteFriendEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInviteTeamEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShareVailidByPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> static T get_InviteFriendShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFC4C))(0);
	}
	template <typename T = bool> static T get_InviteFriendShowWhenGuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFCFC))(0);
	}
	template <typename T = bool> static T get_InviteTeamShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFDAC))(0);
	}
	template <typename T = bool> static T get_InviteTeamShowWhenGuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFE5C))(0);
	}
	template <typename T = bool> static T get_ShareShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFF0C))(0);
	}
	template <typename T = bool> static T get_ShareShowWhenGuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x32BFFBC))(0);
	}
	template <typename T = bool> static T get_MessengerSendShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C006C))(0);
	}
	template <typename T = void> static T InitSwitchData(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32BF6F8))(0, data);
	}
	template <typename T = bool> static T CheckInviteFriendEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A4138))(0);
	}
	template <typename T = bool> static T CheckInviteTeamEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C011C))(0);
	}
	template <typename T = bool> static T IsShareVailidByPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C0324))(0);
	}

};

}
