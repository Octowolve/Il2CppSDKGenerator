#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class RelationInviteAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "RelationInviteAssist"));
	}

	template <typename T = int32_t> static T& QuickInviteParam_Length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& Invite_RoomId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& Invite_RoomSvrAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint32_t> static T& Invite_RoomModeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint32_t> static T& Invite_RoomType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uint32_t> static T& Invite_PlayListId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Invite_RoomPassword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& Invite_Valid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteFacebookFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteGarenaFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteFacebookTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteGarenaTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteEnterRoomParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendMessageSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendInviteUrlFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGarenaInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckGarenaShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFacebookMessengerInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMessengerShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLineShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SendInviteMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteTeamURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetURLInviteTeamParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckURLInviteTeamParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetURLInviteTeamParamSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleURLLocalSuffix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoQuickTeamInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncryptStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecryptStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> static T InviteFacebookFriend() {
		return ((T (*)(void *))(Il2CppBase() + 0x32B7E18))(0);
	}
	template <typename T = void> static T InviteGarenaFriend() {
		return ((T (*)(void *))(Il2CppBase() + 0x32B8180))(0);
	}
	template <typename T = void> static T InviteFacebookTeam() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C3EDC))(0);
	}
	template <typename T = void> static T InviteGarenaTeam() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C2FCC))(0);
	}
	template <typename T = Il2CppString*> static T GetInviteEnterRoomParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C4170))(0);
	}
	template <typename T = void> static T SendInviteMessage(uintptr_t target, Il2CppString* str_invite_type, Il2CppString* invite_param) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x32C3860))(0, target, str_invite_type, invite_param);
	}
	template <typename T = void> static T OnSendMessageSuccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C428C))(0);
	}
	template <typename T = void> static T OnSendInviteUrlSuccess(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C4538))(0, target);
	}
	template <typename T = void> static T OnSendInviteUrlFail(uintptr_t target, int32_t retCode) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x32C490C))(0, target, retCode);
	}
	template <typename T = bool> static T CheckGarenaInvite() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C3B90))(0);
	}
	template <typename T = bool> static T CheckGarenaShouldShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32B7B3C))(0);
	}
	template <typename T = bool> static T CheckFacebookMessengerInvite() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C4B98))(0);
	}
	template <typename T = bool> static T CheckMessengerShouldShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C2984))(0);
	}
	template <typename T = bool> static T CheckLineShouldShow() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C2790))(0);
	}
	template <typename T = void> static T SendInviteMessage_1(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C2BFC))(0, target);
	}
	template <typename T = Il2CppString*> static T GetInviteTeamURL(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32C4EE4))(0, target);
	}
	template <typename T = Il2CppString*> static T GetURLInviteTeamParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C5480))(0);
	}
	template <typename T = void> static T CheckURLInviteTeamParam() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C5AC0))(0);
	}
	template <typename T = bool> static T GetURLInviteTeamParamSwitch() {
		return ((T (*)(void *))(Il2CppBase() + 0x32C5DE0))(0);
	}
	template <typename T = bool> static T CheckAppInstalled(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32A4B3C))(0, target);
	}
	template <typename T = Il2CppString*> static T HandleURLLocalSuffix(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32C51F8))(0, url);
	}
	template <typename T = void> static T DoQuickTeamInvite(Il2CppString* InviteParam) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32C6188))(0, InviteParam);
	}
	template <typename T = Il2CppString*> static T EncryptStr(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32C57F4))(0, str);
	}
	template <typename T = Il2CppString*> static T DecryptStr(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x32C5EA8))(0, str);
	}

};

}
