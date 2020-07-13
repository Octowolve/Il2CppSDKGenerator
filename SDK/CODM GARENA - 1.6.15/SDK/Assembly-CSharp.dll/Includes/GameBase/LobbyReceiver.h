#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LobbyReceiver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LobbyReceiver"));
	}

	template <typename T = uintptr_t> T& m_ProtocalHandler() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_CheckLostTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& DEPOSIT_ERR_PROP_NOT_ENOUGH_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterProtocolHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendZoneRequestFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendZoneResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWorldChatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendChatSrvResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLobbyResponseProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResLiveOpsDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActivityGetDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActivityGetDy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActivityReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfActivityUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvSelectQuestionnaire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGerActvBindAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActvSelectStoreRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActvMatchJumpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvTssAnitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResAnnouncement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecvEigenInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveServerRewardNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountGetBalanceRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqOTOProductInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResMatchConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBrMatchConfigResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeartBeatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSDscIPGroupNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountUpdateSimpleInfoNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatchResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IData_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndPVEModeMatchRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndChallegeGameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPassChallengeSectionResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetFacePicRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvExpBuffRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddExpBuffNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetElectronicSportsConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetWorkShopConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetBoardCastAnnouncementResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetNameCardResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLimitOfferInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveDownLoadMapRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveAskDownloadMapNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifySafeBoxUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResSafeBoxGMTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResMatchParamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSafeBoxResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSafeBoxBuyCheckResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecommendFriendsResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetBlackListResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetFriendListResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClanMemberInviteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateFriendStateChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendGuildInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAddFriendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseFriendInfoMsgNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseFriendAuthorityGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecentGamePlayersResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendDeleteNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendShieldConfNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginZoneSvrResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLogoutZoneSvrResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoginResultSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEventLoginZoneSvrFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerOfflineKick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAASNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPveModeFriendRankListRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPVEModeMatchRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetGameStatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyNewChatMessageResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeamChatMessageResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetWorldChatMsgRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendWorldChatMsgRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlaylistRedDotResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlaylistRedDotSetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetSundryConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetLoadingBackGroundConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPayFailResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetClanMemeberListResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshTreasure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActvUpdateNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateRoomResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRoomSearchRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomChangeSettingResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomChangeSettingNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSetGvoiceIdNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomRecruitResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomPlayerEnterNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomChangeLeaderNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomLeaderChangeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyPlayerQuitMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSeasonInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomReadyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSwitchSeatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSwitchSeatNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberLoadoutChangeNotifty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomMatchJoinNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRoomMicStatNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogRoomFriendInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBalanceUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetMailListRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPushNewMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReadMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetMailDelFlagRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResDel_MailDelFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDeleteMails() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMailDelFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAddResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponSkillRefreshRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponSkillSelectRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveRankAndActivityInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveFriendRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveModelAndGunList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveGuildRankList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshLadderOpenHours() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvConnectNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvReconnectResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatSrvHearBeatResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWarZoneIDStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerIconResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerAchievementResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfHigherAchievements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerGameRecordResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadOutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadOutItemAttributeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBRLoadOutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangePVELoadOutItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSInvnetoryUpdatePVELoadoutNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBRWeaponSkinResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeLoadoutNameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCopyLoadoutResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectDefaultLoadoutResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewChangeScoreStreakResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSellItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildConfResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildApplyMsgList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGuildBeOp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGuildMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetGuildMemberList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildQuitResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildDismissResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildGetAutoJoinReponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildWeeklyPrizeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildSeasonalPrizeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildApplyJoinResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModifyGuildResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTakeGuildDailyPrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildFireMember() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseAppointViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseDeposeViceCaptain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseSwitchCaptainn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildEventList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildApproveJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildDeleteAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildMission() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildMissionAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGuildMissionCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGuildNewApply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildWelfareInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseGuildWelfareDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseClaimGuildWelfare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGuildNewWelfare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankUpNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetInventoryInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGetNewInventoryItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseCardCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseBattlePassConsumeCardCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInventoryDeleteItemsNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyItemTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponUpgradeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInventoryWeaponUpgradeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResInventoryGetUnequipItemConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInventoryCompoundResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNameCardResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChooseRefreshResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSignInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSignResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSignResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveChapterInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveMultiLevelInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPveEndlessInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRewardLimitationRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopStateResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetShopRedDotResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxColorSummaryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxOpenResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopLuckyBoxQueryGroupPropResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoardRewardResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSShopShopBuyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopBuyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopQueryColorResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRechargeGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassGetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassResetDailyTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassGetConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassGetAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfBattlePassLevelUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfBattlePassUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResBattlePassGetComic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInviteFriendNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterRoomNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterRoomAnswerNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomAnswerInviteNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInfoNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomStateChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomAnswerInviteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterRoomAnswerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify_Reconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyPlayerJoinMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyPlayerMatchInfoNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyMatchFindTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameStartFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomQuitResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomPlayerQuitNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomKickNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomRecentPlayerRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetVoiceStateResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLikeResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBeLiked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetOtherPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetTutorialModeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyGetServerInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGMSetPlayerInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGMDelPlayerInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSPVPLadderInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSPVPLadderLevelUpNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfSpvpLadderPromitionResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLiveMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiverLiveRedDotMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResInGameChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGuildChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSquadChatRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSquadChatNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWorldChatNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResApplyEnterRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerPVPGameStatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerPVEGameStatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomBeforeJoinMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerBRGameStatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerGameHistoryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipMedalResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipAchievementResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenameResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGspNewGuidePrizeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSInventoryChagIndividuationItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x414);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSInventoryChgWincircleIndividuationItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSInventoryChgWinCircleSprayItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResGetReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDelReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x424);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfNewReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResAddReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x42C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObFriendResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSendGoldFriendsResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x434);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendGoldResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSubscribeInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x43C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetSubscribeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCustomSettingResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x444);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLogoutRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResShowADNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResShowADReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDeleteAccount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x454);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResClearClientLogReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSensitivityRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetSensitivityRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetPrivacySellRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x464);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameFriendAccountStateNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckBoxOpenTurnToMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTeamRoomMapDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRoomPlayerMapDownloadState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x474);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPlayerMapDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomTeamInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x47C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainCreateRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomJoinRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x484);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomExitRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomTeamNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomDestroyNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomStartNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x494);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayAgainRoomWillStartNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActvHpV5Ntf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseReportPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerUpdateBalanceNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRCustomSettingsOpenFirstTimeResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRSetCustomSettingFlagRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeShopBuyItemRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBuyRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeShopDataRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActvViewUIRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteNewbieGetInvitationInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteNewbieGetInvitationCodeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteNewbieBindInvitationResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteNewbieGetLevelAwardResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInviteNewbieHaveAawrd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPVEOpenTimeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetActvRankedMatchInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCSAccountPictureInfoChangeNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActvShareLuckyBagNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActvShareLuckyBagRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatClearTalkNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountSeasonResetNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerProfileResp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCSActvGetBackConfRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecallRewardRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecallFriendRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetFriendRecallInfoRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x504);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCommonSettingRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetCommonSettingRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyInviteNewbieConfResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x1968990))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x196D388))(this);
	}
	template <typename T = void> T RegisterProtocolHandler(uintptr_t lobbyType, void* handler) {
		return ((T (*)(LobbyReceiver*, uintptr_t, void*))(Il2CppBase() + 0x196D458))(this, lobbyType, handler);
	}
	template <typename T = void> T UnRegisterProtocolHandler(uintptr_t lobbyType) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196D53C))(this, lobbyType);
	}
	template <typename T = void> T OnLobbyResponse(Il2CppArray<uintptr_t>* content, int32_t size) {
		return ((T (*)(LobbyReceiver*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x196D604))(this, content, size);
	}
	template <typename T = void> T OnSendZoneRequestFail(int32_t recvCmd, int32_t sequenceId) {
		return ((T (*)(LobbyReceiver*, int32_t, int32_t))(Il2CppBase() + 0x196DADC))(this, recvCmd, sequenceId);
	}
	template <typename T = void> T SendZoneResponse(uintptr_t resp, int32_t registerCmd, int32_t len) {
		return ((T (*)(LobbyReceiver*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x196D7A8))(this, resp, registerCmd, len);
	}
	template <typename T = void> T OnWorldChatResponse(Il2CppArray<uintptr_t>* content, int32_t size) {
		return ((T (*)(LobbyReceiver*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x196DE8C))(this, content, size);
	}
	template <typename T = void> T SendChatSrvResponse(uintptr_t resp, int32_t registerCmd, int32_t len) {
		return ((T (*)(LobbyReceiver*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x196E028))(this, resp, registerCmd, len);
	}
	template <typename T = void> T InitLobbyResponseProtocal() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x1968A34))(this);
	}
	template <typename T = void> T OnResLiveOpsDesc(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196E3A4))(this, Msg);
	}
	template <typename T = void> T OnResActivityGetDesc(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196E524))(this, Msg);
	}
	template <typename T = void> T OnResActivityGetDy(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196E700))(this, Msg);
	}
	template <typename T = void> T OnResActivityReward(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196E8DC))(this, Msg);
	}
	template <typename T = void> T OnNtfActivityUpdate(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196EB3C))(this, Msg);
	}
	template <typename T = void> T OnGetActvSelectQuestionnaire(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196ECBC))(this, Msg);
	}
	template <typename T = void> T OnGerActvBindAccount(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196EF28))(this, Msg);
	}
	template <typename T = void> T OnResActvSelectStoreRate(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196F194))(this, Msg);
	}
	template <typename T = void> T OnResActvMatchJumpData(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196F400))(this, Msg);
	}
	template <typename T = void> T OnRecvTssAnitData(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196F518))(this, Msg);
	}
	template <typename T = void> T OnResAnnouncement(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196F980))(this, Msg);
	}
	template <typename T = void> T OnRecvEigenInfo(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196FA98))(this, Msg);
	}
	template <typename T = void> T OnReceiveServerRewardNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196FC64))(this, Msg);
	}
	template <typename T = void> T OnAccountGetBalanceRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x196FFA8))(this, Msg);
	}
	template <typename T = void> T ReqOTOProductInfo(uintptr_t res) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1970C58))(this, res);
	}
	template <typename T = void> T OnResMatchConfig(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1971408))(this, Msg);
	}
	template <typename T = void> T OnBrMatchConfigResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1971520))(this, message);
	}
	template <typename T = void> T OnHeartBeatResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19716A8))(this, Msg);
	}
	template <typename T = void> T OnCSDscIPGroupNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19718AC))(this, Msg);
	}
	template <typename T = void> T OnAccountUpdateSimpleInfoNtf(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1971ED8))(this, message);
	}
	template <typename T = void> T OnQuitMatch(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1973150))(this, Msg);
	}
	template <typename T = void> T EndMatchResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19731F0))(this, Msg);
	}
	template <typename T = void> T IData_EndMatch(uintptr_t data) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1973CB0))(this, data);
	}
	template <typename T = void> T EndPVEModeMatchRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1973DE4))(this, msg);
	}
	template <typename T = void> T OnEndChallegeGameResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197443C))(this, Msg);
	}
	template <typename T = void> T OnPassChallengeSectionResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1974994))(this, Msg);
	}
	template <typename T = void> T OnGetFacePicRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1974E7C))(this, msg);
	}
	template <typename T = void> T OnGetActvExpBuffRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1974F94))(this, msg);
	}
	template <typename T = void> T OnAddExpBuffNtf(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19750AC))(this, msg);
	}
	template <typename T = void> T OnGetElectronicSportsConfRes(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19751C4))(this, message);
	}
	template <typename T = void> T OnGetWorkShopConfRes(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197534C))(this, message);
	}
	template <typename T = void> T OnGetBoardCastAnnouncementResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19754D4))(this, Msg);
	}
	template <typename T = void> T OnOTOInfoRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197597C))(this, Msg);
	}
	template <typename T = void> T OnSetNameCardResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1975B78))(this, Msg);
	}
	template <typename T = void> T OnLimitOfferInfoRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1975FF0))(this, Msg);
	}
	template <typename T = void> T OnReceiveDownLoadMapRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19761E0))(this, Msg);
	}
	template <typename T = void> T OnReceiveAskDownloadMapNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976280))(this, Msg);
	}
	template <typename T = void> T OnNotifySafeBoxUpdated(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19764B0))(this, message);
	}
	template <typename T = void> T OnResSafeBoxGMTest(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976618))(this, message);
	}
	template <typename T = void> T OnResMatchParamInfo(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197678C))(this, message);
	}
	template <typename T = void> T OnGetSafeBoxResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976B58))(this, message);
	}
	template <typename T = void> T OnGetSafeBoxBuyCheckResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976CCC))(this, message);
	}
	template <typename T = void> T OnGetRecommendFriendsResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976E40))(this, message);
	}
	template <typename T = void> T OnGetBlackListResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1976FC4))(this, message);
	}
	template <typename T = void> T OnGetFriendListResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977148))(this, message);
	}
	template <typename T = void> T OnClanMemberInviteResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19772CC))(this, message);
	}
	template <typename T = void> T OnStateFriendStateChangeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19774EC))(this, Msg);
	}
	template <typename T = void> T OnFriendGuildInfoChangeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977670))(this, Msg);
	}
	template <typename T = void> T ResponseAddFriendMessage(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19777F4))(this, message);
	}
	template <typename T = void> T ResponseFriendInfoMsgNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977978))(this, Msg);
	}
	template <typename T = void> T ResponseFriendAuthorityGet(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977AFC))(this, Msg);
	}
	template <typename T = void> T OnGetRecentGamePlayersResp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977C80))(this, message);
	}
	template <typename T = void> T OnFriendDeleteNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977E04))(this, message);
	}
	template <typename T = void> T OnFriendShieldConfNotify(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1977F88))(this, msg);
	}
	template <typename T = void> T OnPlayerLoginZoneSvrResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197810C))(this, Msg);
	}
	template <typename T = void> T OnPlayerLogoutZoneSvrResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979024))(this, Msg);
	}
	template <typename T = bool> T IsLoginResultSuccess(int32_t ret) {
		return ((T (*)(LobbyReceiver*, int32_t))(Il2CppBase() + 0x1978DF8))(this, ret);
	}
	template <typename T = void> T SendEventLoginZoneSvrFinish(uintptr_t resp) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1978A48))(this, resp);
	}
	template <typename T = void> T OnPlayerOfflineKick(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19790F8))(this, Msg);
	}
	template <typename T = void> T OnAASNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19791E8))(this, Msg);
	}
	template <typename T = void> T GetPveModeFriendRankListRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19792D8))(this, Msg);
	}
	template <typename T = void> T StartPVEModeMatchRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979604))(this, Msg);
	}
	template <typename T = void> T OnGetGameStatResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979998))(this, Msg);
	}
	template <typename T = void> T OnNotifyNewChatMessageResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979AA8))(this, Msg);
	}
	template <typename T = void> T OnNotifyTeamChatMessageResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979BC0))(this, Msg);
	}
	template <typename T = void> T OnGetWorldChatMsgRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979E48))(this, Msg);
	}
	template <typename T = void> T OnSendWorldChatMsgRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979EE8))(this, Msg);
	}
	template <typename T = void> T OnGetPlaylistRedDotResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1979F88))(this, message);
	}
	template <typename T = void> T OnGetPlaylistRedDotSetResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197A2D4))(this, message);
	}
	template <typename T = void> T OnResGetSundryConf(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197A374))(this, message);
	}
	template <typename T = void> T OnResGetLoadingBackGroundConfig(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197A56C))(this, message);
	}
	template <typename T = void> T OnNotifyPayFailResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197A764))(this, Msg);
	}
	template <typename T = void> T OnGetClanMemeberListResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197AA24))(this, Msg);
	}
	template <typename T = void> T OnRefreshTreasure(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197AAC4))(this, msg);
	}
	template <typename T = void> T ActvUpdateNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197AC00))(this, Msg);
	}
	template <typename T = void> T OnRoomInfoResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197ACF0))(this, message);
	}
	template <typename T = void> T OnCreateRoomResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197B140))(this, message);
	}
	template <typename T = void> T OnResRoomSearchRoom(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197B53C))(this, message);
	}
	template <typename T = void> T OnRoomGameStartResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197B790))(this, message);
	}
	template <typename T = void> T OnRoomChangeSettingResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197BC10))(this, message);
	}
	template <typename T = void> T OnRoomChangeSettingNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C038))(this, message);
	}
	template <typename T = void> T OnRoomSetGvoiceIdNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C1DC))(this, message);
	}
	template <typename T = void> T OnRoomRecruitResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C4AC))(this, message);
	}
	template <typename T = void> T OnRoomPlayerEnterNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C5E0))(this, message);
	}
	template <typename T = void> T OnRoomChangeLeaderNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C834))(this, message);
	}
	template <typename T = void> T OnRoomLeaderChangeResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197C9D8))(this, message);
	}
	template <typename T = void> T OnLobbyPlayerQuitMatchNtf(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197CBD8))(this, message);
	}
	template <typename T = void> T OnGetSeasonInfoRes(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197CE24))(this, message);
	}
	template <typename T = void> T OnRoomReadyResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D000))(this, Msg);
	}
	template <typename T = void> T OnRoomSwitchSeatResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D210))(this, message);
	}
	template <typename T = void> T OnRoomSwitchSeatNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D3B4))(this, Msg);
	}
	template <typename T = void> T OnRoomMemberLoadoutChangeNotifty(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D4CC))(this, Msg);
	}
	template <typename T = void> T OnRoomMemberInfoChangeNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D6DC))(this, message);
	}
	template <typename T = void> T RoomMatchJoinNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197D7F4))(this, Msg);
	}
	template <typename T = void> T OnGroupRoomMicStatNtf(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197DC3C))(this, msg);
	}
	template <typename T = void> T TLogRoomFriendInvite() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x197DD54))(this);
	}
	template <typename T = void> T OnBalanceUpdated(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197DF04))(this, msg);
	}
	template <typename T = void> T OnGetMailListRes(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197E008))(this, msg1);
	}
	template <typename T = void> T OnNotifyPushNewMail(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197E4E0))(this, msg1);
	}
	template <typename T = void> T OnReadMailResponse(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197E804))(this, msg1);
	}
	template <typename T = void> T OnGetMailDelFlagRes(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197EB28))(this, msg1);
	}
	template <typename T = void> T ResDel_MailDelFlag(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197EE14))(this, msg1);
	}
	template <typename T = void> T OnNotifyDeleteMails(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197F024))(this, msg1);
	}
	template <typename T = void> T OnNotifyMailDelFlag(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197F310))(this, msg1);
	}
	template <typename T = void> T OnDeleteMailResponse(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197F520))(this, msg1);
	}
	template <typename T = void> T OnFriendAddResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197F920))(this, message);
	}
	template <typename T = void> T OnWeaponSkillRefreshRes(uintptr_t msg1) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x197FE3C))(this, msg1);
	}
	template <typename T = void> T OnWeaponSkillSelectRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19806B4))(this, msg);
	}
	template <typename T = void> T OnReceiveRankList(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1980D44))(this, message);
	}
	template <typename T = void> T OnReceiveRankAndActivityInfoList(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1980EBC))(this, message);
	}
	template <typename T = void> T OnReceiveFriendRankList(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1981034))(this, message);
	}
	template <typename T = void> T OnReceiveModelAndGunList(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19811AC))(this, message);
	}
	template <typename T = void> T OnReceiveGuildRankList(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1981324))(this, message);
	}
	template <typename T = void> T OnRefreshLadderOpenHours(uintptr_t eventmsg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1981514))(this, eventmsg);
	}
	template <typename T = void> T OnChatSrvConnectNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1981800))(this, Msg);
	}
	template <typename T = void> T OnChatSrvReconnectResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1982024))(this, Msg);
	}
	template <typename T = void> T OnChatSrvHearBeatResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1982540))(this, Msg);
	}
	template <typename T = Il2CppString*> T GetWarZoneIDStr(uint32_t warZoneID) {
		return ((T (*)(LobbyReceiver*, uint32_t))(Il2CppBase() + 0x1981C64))(this, warZoneID);
	}
	template <typename T = void> T GetPlayerIconResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198274C))(this, Msg);
	}
	template <typename T = void> T GetPlayerAchievementResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198299C))(this, Msg);
	}
	template <typename T = void> T OnNtfHigherAchievements(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1982C3C))(this, Msg);
	}
	template <typename T = void> T GetPlayerGameRecordResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1982E74))(this, Msg);
	}
	template <typename T = void> T OnChangeLoadOutItemResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1983158))(this, Msg);
	}
	template <typename T = void> T OnChangeLoadOutItemAttributeResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1983688))(this, Msg);
	}
	template <typename T = void> T OnChangeBRLoadOutItemResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1983C8C))(this, Msg);
	}
	template <typename T = void> T OnChangePVELoadOutItemResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19841BC))(this, Msg);
	}
	template <typename T = void> T OnCSInvnetoryUpdatePVELoadoutNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19846EC))(this, Msg);
	}
	template <typename T = void> T OnChangeBRWeaponSkinResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19848F8))(this, Msg);
	}
	template <typename T = void> T OnChangeLoadoutNameResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1984E3C))(this, Msg);
	}
	template <typename T = void> T OnCopyLoadoutResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198536C))(this, Msg);
	}
	template <typename T = void> T OnSelectDefaultLoadoutResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198589C))(this, Msg);
	}
	template <typename T = void> T OnNewChangeScoreStreakResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1985DE0))(this, Msg);
	}
	template <typename T = void> T OnSellItemResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1986400))(this, Msg);
	}
	template <typename T = void> T OnGuildInfoChangeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198670C))(this, Msg);
	}
	template <typename T = void> T OnGuildInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1986B60))(this, Msg);
	}
	template <typename T = void> T OnGuildConfResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1986D50))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildApplyMsgList(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1986F40))(this, Msg);
	}
	template <typename T = void> T OnNotifyGuildBeOp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1987130))(this, Msg);
	}
	template <typename T = void> T OnNotifyGuildMessage(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19875EC))(this, Msg);
	}
	template <typename T = void> T OnGetGuildMemberList(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1987704))(this, Msg);
	}
	template <typename T = void> T OnGuildQuitResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19878FC))(this, Msg);
	}
	template <typename T = void> T OnGuildDismissResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1987AEC))(this, Msg);
	}
	template <typename T = void> T OnGuildGetAutoJoinReponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1987CDC))(this, Msg);
	}
	template <typename T = void> T OnGuildWeeklyPrizeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1987ECC))(this, Msg);
	}
	template <typename T = void> T OnGuildSeasonalPrizeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19880BC))(this, Msg);
	}
	template <typename T = void> T OnGuildApplyJoinResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19882AC))(this, Msg);
	}
	template <typename T = void> T OnModifyGuildResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198849C))(this, Msg);
	}
	template <typename T = void> T OnTakeGuildDailyPrize(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198868C))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildFireMember(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198887C))(this, Msg);
	}
	template <typename T = void> T OnResponseAppointViceCaptain(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1988A6C))(this, Msg);
	}
	template <typename T = void> T OnResponseDeposeViceCaptain(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1988C5C))(this, Msg);
	}
	template <typename T = void> T OnResponseSwitchCaptainn(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1988E4C))(this, Msg);
	}
	template <typename T = void> T OnResponseImpeachment(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198903C))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildEventList(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198922C))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildApproveJoin(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198941C))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildDeleteAll(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198960C))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildMission(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19897FC))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildMissionAward(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19899EC))(this, Msg);
	}
	template <typename T = void> T OnNotifyGuildMissionCompleted(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1989BDC))(this, Msg);
	}
	template <typename T = void> T OnNotifyGuildNewApply(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1989DCC))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildWelfareInfo(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198A040))(this, Msg);
	}
	template <typename T = void> T OnResponseGuildWelfareDetail(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198A230))(this, Msg);
	}
	template <typename T = void> T OnResponseClaimGuildWelfare(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198A420))(this, Msg);
	}
	template <typename T = void> T OnNotifyGuildNewWelfare(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198A610))(this, Msg);
	}
	template <typename T = void> T OnRankUpNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198A800))(this, Msg);
	}
	template <typename T = void> T OnGetInventoryInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198AA10))(this, Msg);
	}
	template <typename T = void> T OnNotifyGetNewInventoryItems(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198AC34))(this, Msg);
	}
	template <typename T = void> T OnUseCardCallback(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198AF28))(this, Msg);
	}
	template <typename T = void> T OnUseBattlePassConsumeCardCallback(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198BCA4))(this, Msg);
	}
	template <typename T = void> T ShowCommonTips(Il2CppString* tipsContent, float visibleTime, bool repeatable, bool bForce, void* from, void* to) {
		return ((T (*)(LobbyReceiver*, Il2CppString*, float, bool, bool, void*, void*))(Il2CppBase() + 0x197FB8C))(this, tipsContent, visibleTime, repeatable, bForce, from, to);
	}
	template <typename T = void> T OnInventoryDeleteItemsNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198C2B0))(this, Msg);
	}
	template <typename T = void> T OnNotifyItemTimeout(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198C684))(this, Msg);
	}
	template <typename T = void> T OnWeaponUpgradeNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198C8A8))(this, Msg);
	}
	template <typename T = void> T OnInventoryWeaponUpgradeRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198C9C0))(this, Msg);
	}
	template <typename T = void> T OnResInventoryGetUnequipItemConfRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198CAD8))(this, Msg);
	}
	template <typename T = void> T OnInventoryCompoundResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198CCE8))(this, Msg);
	}
	template <typename T = void> T OnNameCardResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198CEF8))(this, Msg);
	}
	template <typename T = void> T OnChooseRefreshResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198D2A0))(this, Msg);
	}
	template <typename T = void> T OnGetSignInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198D534))(this, Msg);
	}
	template <typename T = void> T OnSignResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198D84C))(this, Msg);
	}
	template <typename T = void> T OnReSignResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198DB64))(this, Msg);
	}
	template <typename T = void> T OnGetPveChapterInfoResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198DF58))(this, message);
	}
	template <typename T = void> T OnGetPveMultiLevelInfoResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198DFF8))(this, message);
	}
	template <typename T = void> T OnGetPveEndlessInfoResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198E128))(this, message);
	}
	template <typename T = void> T OnGetRewardLimitationRes(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198E258))(this, message);
	}
	template <typename T = void> T OnShopStateResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198E388))(this, message);
	}
	template <typename T = void> T OnGetShopRedDotResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198E4A0))(this, message);
	}
	template <typename T = void> T OnLuckyBoxColorSummaryResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198E8D4))(this, message);
	}
	template <typename T = void> T OnLuckyBoxOpenResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198EAD4))(this, message);
	}
	template <typename T = void> T OnShopLuckyBoxQueryGroupPropResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198ED20))(this, message);
	}
	template <typename T = void> T OnLuckyBoardRewardResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198EE54))(this, message);
	}
	template <typename T = void> T OnSShopShopBuyResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198F0A0))(this, message);
	}
	template <typename T = void> T OnBoxShopGetResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198F298))(this, message);
	}
	template <typename T = void> T OnBoxShopBuyResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198F474))(this, message);
	}
	template <typename T = void> T OnBoxShopQueryColorResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198F6C8))(this, message);
	}
	template <typename T = void> T OnRechargeGetResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198F91C))(this, message);
	}
	template <typename T = void> T OnResBattlePassGetData(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198FB28))(this, message);
	}
	template <typename T = void> T OnResBattlePassResetDailyTask(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198FCA0))(this, message);
	}
	template <typename T = void> T OnResBattlePassGetConf(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198FE18))(this, message);
	}
	template <typename T = void> T OnResBattlePassGetAward(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x198FF90))(this, message);
	}
	template <typename T = void> T OnResBattlePassCharge(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990108))(this, message);
	}
	template <typename T = void> T OnNtfBattlePassLevelUp(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990280))(this, message);
	}
	template <typename T = void> T OnNtfBattlePassUpdateData(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19903F8))(this, message);
	}
	template <typename T = void> T OnResBattlePassGetComic(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990570))(this, message);
	}
	template <typename T = void> T OnRoomInviteFriendNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19906E8))(this, Msg);
	}
	template <typename T = void> T OnApplyEnterRoomNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990844))(this, Msg);
	}
	template <typename T = void> T OnApplyEnterRoomAnswerNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19909A0))(this, Msg);
	}
	template <typename T = void> T OnRoomAnswerInviteNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990C84))(this, Msg);
	}
	template <typename T = void> T OnRoomInfoNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990E74))(this, Msg);
	}
	template <typename T = void> T OnRoomStateChangeNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1990F8C))(this, Msg);
	}
	template <typename T = void> T OnRoomAnswerInviteResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19910A4))(this, message);
	}
	template <typename T = void> T OnApplyEnterRoomAnswerResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19917B0))(this, message);
	}
	template <typename T = void> T OnRoomGameStartNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1991A04))(this, message);
	}
	template <typename T = void> T OnRoomGameStartNotify_Reconnect(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1991B8C))(this, message);
	}
	template <typename T = void> T OnLobbyPlayerJoinMatchNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1991D14))(this, Msg);
	}
	template <typename T = void> T OnLobbyPlayerMatchInfoNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1992188))(this, Msg);
	}
	template <typename T = void> T OnNotifyMatchFindTeamMate(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199238C))(this, Msg);
	}
	template <typename T = void> T OnNotifyGameStartFail(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19926B0))(this, message);
	}
	template <typename T = void> T OnRoomQuitResponse(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1992CAC))(this, message);
	}
	template <typename T = void> T OnRoomPlayerQuitNotify(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1993690))(this, message);
	}
	template <typename T = void> T OnRoomKickNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19937A8))(this, Msg);
	}
	template <typename T = void> T OnRoomRecentPlayerRes(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19938C0))(this, message);
	}
	template <typename T = void> T OnGetVoiceStateResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1993AD4))(this, Msg);
	}
	template <typename T = void> T OnNotifyLikeResult(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1993D9C))(this, Msg);
	}
	template <typename T = void> T OnNotifyBeLiked(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1993FAC))(this, Msg);
	}
	template <typename T = void> T OnGetOtherPlayerInfo(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19941BC))(this, Msg);
	}
	template <typename T = void> T OnSetTutorialModeResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1994974))(this, Msg);
	}
	template <typename T = void> T OnLobbyGetServerInfoRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1994C08))(this, msg);
	}
	template <typename T = void> T OnGMSetPlayerInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1994E30))(this, Msg);
	}
	template <typename T = void> T OnGMDelPlayerInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1994ED0))(this, Msg);
	}
	template <typename T = void> T OnGetSPVPLadderInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1994F70))(this, Msg);
	}
	template <typename T = void> T OnSPVPLadderLevelUpNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19951C8))(this, Msg);
	}
	template <typename T = void> T OnNtfSpvpLadderPromitionResult(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1995434))(this, msg);
	}
	template <typename T = void> T OnNotifyLiveMessage(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199566C))(this, msg);
	}
	template <typename T = void> T OnReceiverLiveRedDotMsg(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19958CC))(this, msg);
	}
	template <typename T = void> T OnResInGameChat(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1995A20))(this, msg);
	}
	template <typename T = void> T OnResGuildChat(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1995EE4))(this, msg);
	}
	template <typename T = void> T OnSquadChatRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996018))(this, msg);
	}
	template <typename T = void> T OnSquadChatNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996130))(this, Msg);
	}
	template <typename T = void> T OnWorldChatNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996248))(this, Msg);
	}
	template <typename T = void> T OnResApplyEnterRoom(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199637C))(this, Msg);
	}
	template <typename T = void> T OnGetPlayerPVPGameStatResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996494))(this, Msg);
	}
	template <typename T = void> T OnGetPlayerPVEGameStatResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19967BC))(this, Msg);
	}
	template <typename T = void> T OnRoomBeforeJoinMatchNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996AE4))(this, Msg);
	}
	template <typename T = void> T OnGetPlayerBRGameStatResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996BFC))(this, Msg);
	}
	template <typename T = void> T OnGetPlayerGameHistoryResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1996F24))(this, Msg);
	}
	template <typename T = void> T OnEquipMedalResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199724C))(this, Msg);
	}
	template <typename T = void> T OnEquipAchievementResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19977DC))(this, Msg);
	}
	template <typename T = void> T OnRenameResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1997CC8))(this, Msg);
	}
	template <typename T = void> T OnGspNewGuidePrizeRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19985E8))(this, Msg);
	}
	template <typename T = void> T OnCSInventoryChagIndividuationItemRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1998BF4))(this, Msg);
	}
	template <typename T = void> T OnCSInventoryChgWincircleIndividuationItemRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1998F00))(this, Msg);
	}
	template <typename T = void> T OnCSInventoryChgWinCircleSprayItemRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19991AC))(this, Msg);
	}
	template <typename T = void> T OnResGetReddot(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1999624))(this, message);
	}
	template <typename T = void> T OnResDelReddot(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199973C))(this, message);
	}
	template <typename T = void> T OnNtfNewReddot(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1999854))(this, message);
	}
	template <typename T = void> T OnResAddReddot(uintptr_t message) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199996C))(this, message);
	}
	template <typename T = void> T OnObFriendResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1999A84))(this, Msg);
	}
	template <typename T = void> T OnGetSendGoldFriendsResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x1999D54))(this, Msg);
	}
	template <typename T = void> T OnSendGoldResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199A174))(this, Msg);
	}
	template <typename T = void> T OnGetSubscribeInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199ADEC))(this, Msg);
	}
	template <typename T = void> T OnSetSubscribeResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199B1C0))(this, Msg);
	}
	template <typename T = void> T OnGetCustomSettingResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199B544))(this, Msg);
	}
	template <typename T = void> T OnLogoutRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199B858))(this, msg);
	}
	template <typename T = void> T OnResShowADNotify(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199B93C))(this, Msg);
	}
	template <typename T = void> T OnResShowADReward(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199BE48))(this, Msg);
	}
	template <typename T = void> T OnResDeleteAccount(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199C268))(this, Msg);
	}
	template <typename T = void> T OnResClearClientLogReport(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199C47C))(this, Msg);
	}
	template <typename T = void> T OnGetSensitivityRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199C63C))(this, Msg);
	}
	template <typename T = void> T OnSetSensitivityRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199C924))(this, Msg);
	}
	template <typename T = void> T OnSetPrivacySellRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199CB78))(this, Msg);
	}
	template <typename T = void> T OnGameFriendAccountStateNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199CDCC))(this, Msg);
	}
	template <typename T = void> T OnLuckBoxOpenTurnToMain(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199CFD0))(this, Msg);
	}
	template <typename T = void> T OnNotifyTeamRoomMapDownload(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199D158))(this, Msg);
	}
	template <typename T = void> T OnNotifyRoomPlayerMapDownloadState(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199D408))(this, Msg);
	}
	template <typename T = void> T OnNotifyPlayerMapDownload(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199D694))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomTeamInfoRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199D734))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainCreateRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199D8BC))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomJoinRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199DA44))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomExitRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199DBCC))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomTeamNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199DD54))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomDestroyNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199DEDC))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomStartNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199DF7C))(this, Msg);
	}
	template <typename T = void> T OnPlayAgainRoomWillStartNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199E104))(this, Msg);
	}
	template <typename T = void> T OnActvHpV5Ntf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199E28C))(this, Msg);
	}
	template <typename T = void> T OnResponseReportPlayer(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199E4AC))(this, Msg);
	}
	template <typename T = void> T OnPlayerUpdateBalanceNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199E904))(this, Msg);
	}
	template <typename T = void> T OnGetConfRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199E9EC))(this, Msg);
	}
	template <typename T = void> T OnBRCustomSettingsOpenFirstTimeResp(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199ECA4))(this, msg);
	}
	template <typename T = void> T OnBRSetCustomSettingFlagRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199EEC8))(this, msg);
	}
	template <typename T = void> T OnExchangeShopBuyItemRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199F100))(this, msg);
	}
	template <typename T = void> T OnShopBuyRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199F30C))(this, msg);
	}
	template <typename T = void> T OnExchangeShopDataRes(uintptr_t msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199F6D0))(this, msg);
	}
	template <typename T = void> T ActvViewUIRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199F8FC))(this, Msg);
	}
	template <typename T = void> T OnInviteNewbieGetInvitationInfoResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199FA9C))(this, Msg);
	}
	template <typename T = void> T OnInviteNewbieGetInvitationCodeResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199FC8C))(this, Msg);
	}
	template <typename T = void> T OnInviteNewbieBindInvitationResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x199FE7C))(this, Msg);
	}
	template <typename T = void> T OnInviteNewbieGetLevelAwardResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A006C))(this, Msg);
	}
	template <typename T = void> T OnNotifyInviteNewbieHaveAawrd(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A025C))(this, Msg);
	}
	template <typename T = void> T OnGetPVEOpenTimeRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A04C4))(this, Msg);
	}
	template <typename T = void> T OnGetActvRankedMatchInfoRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A06EC))(this, Msg);
	}
	template <typename T = void> T OnGetCSAccountPictureInfoChangeNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A09F0))(this, Msg);
	}
	template <typename T = void> T OnActvShareLuckyBagNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A0BFC))(this, Msg);
	}
	template <typename T = void> T OnActvShareLuckyBagRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A0E4C))(this, Msg);
	}
	template <typename T = void> T OnChatClearTalkNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A11C0))(this, Msg);
	}
	template <typename T = void> T OnAccountSeasonResetNtf(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1410))(this, Msg);
	}
	template <typename T = void> T OnGetPlayerProfileResp(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1698))(this, Msg);
	}
	template <typename T = void> T OnCSActvGetBackConfRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1938))(this, Msg);
	}
	template <typename T = void> T OnGetRecallRewardRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1B24))(this, Msg);
	}
	template <typename T = void> T OnRecallFriendRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1D10))(this, Msg);
	}
	template <typename T = void> T OnGetFriendRecallInfoRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A1EFC))(this, Msg);
	}
	template <typename T = void> T OnGetCommonSettingRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A20E8))(this, Msg);
	}
	template <typename T = void> T OnSetCommonSettingRes(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A23F8))(this, Msg);
	}
	template <typename T = void> T OnNotifyInviteNewbieConfResponse(uintptr_t Msg) {
		return ((T (*)(LobbyReceiver*, uintptr_t))(Il2CppBase() + 0x19A2708))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x19A2A88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(LobbyReceiver*))(Il2CppBase() + 0x19A2A90))(this);
	}

};

}
