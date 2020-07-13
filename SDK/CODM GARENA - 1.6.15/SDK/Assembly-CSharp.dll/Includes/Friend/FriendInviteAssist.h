#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendInviteAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendInviteAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteFriendURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleURLLocalSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T InviteGarena() {
		return ((T (*)(void *))(Il2CppBase() + 0x32A3F38))(0);
	}
	template <typename T = void> static T SendInviteMessage(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32A4340))(0, target);
	}
	template <typename T = Il2CppString*> static T GetInviteFriendURL(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32A4684))(0, target);
	}
	template <typename T = bool> static T CheckAppInstalled(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32A45A8))(0, target);
	}
	template <typename T = Il2CppString*> static T HandleURLLocalSuffix(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32A48E4))(0, url);
	}
	template <typename T = void> static T OnSendInviteUrlSuccess(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32A5224))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlFail(uintptr_t target, int32_t retCode) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x32A55C8))(0, target, retCode);
	}

};

}
