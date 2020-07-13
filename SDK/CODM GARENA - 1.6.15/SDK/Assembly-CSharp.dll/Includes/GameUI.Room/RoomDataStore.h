#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomDataStore"));
	}

	template <typename T = int32_t> static T& SPECTATOR_MAX_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BR_MAX_PLAYER_IN_CREATE_ROOM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& QuitRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& MatchServiceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uint64_t>*>*> T& mapDownLoadingPlayer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppList<uint64_t>*>*> T& mapDownLoadedPlayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_ReadyFlag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bInPlayAgainFlow() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> T& OnQuitRoomResCallBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsOwner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_RoomUIType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsReady() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_SelfCamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_RoomName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_BRMaxPlayerCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& m_BRAiPlayerCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& m_RoomID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& PreRoomId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& FailList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_RoomSrvAddress() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_Passwrod() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_ModeID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_MapID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_InstanceId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_PlaylistId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_PlaylistList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_BrPlaylistId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_MapIds() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_PPMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_AutoFill() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_IfSpectating() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = bool> T& m_IfAllowToInvite() {
		return *(T*)((uintptr_t)this + 0x72);
	}
	template <typename T = int32_t> T& m_SettingParam1() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_SettingParam2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_MatchServiceModule() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_MaxObserverCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& m_RoomOwnerPlayerId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_RoomOwnerName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& m_RoomTimeStampForTlog() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int64_t> T& m_SendGameStartServerTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_RoomGameStarted() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_RoomInfoValid() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& m_RoomIsHangUp() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = bool> T& m_IsMatching() {
		return *(T*)((uintptr_t)this + 0xA3);
	}
	template <typename T = uintptr_t> T& m_RoomState() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& m_TicketFlag() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& m_DSCGroupId() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_MicNeedOpen() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_IsEmulatorRoom() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = int32_t> T& m_PlaylistSelectType() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_QuitReason() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint64_t> T& m_IsWarmServerTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_IsWarm() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RegularPlayerList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RebelPlayerList() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ObserverPlayerList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FireModeFlagList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& PasswordPopuped() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& PasswordCorrect() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = uint64_t> T& m_PendingObserveID() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& m_PendingObserveAddr() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& m_RoomShortCode() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint64_t> T& m_SelectBrRoomCreatePlayerId() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> static T& Room_Param_Length() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mCurrentInvitation() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mInvitations() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& kValidInvitationTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& mInvationShowed() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_BlockFriendsInvite() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_BlockFriendsApply() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uint32_t> T& m_ExpireTotalTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_bShowMatchingAfterReconnect() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& m_IsJoinedMatch() {
		return *(T*)((uintptr_t)this + 0x115);
	}
	template <typename T = Il2CppString*> T& MatchEncryptionKey() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& MatchMapID() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& MatchIp() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uint16_t> T& MatchPort() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uint32_t> T& MatchRoomId() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint64_t> T& MatchPlayerId() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint64_t> T& RoomGUID() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& PVELevelID() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppString*> T& m_SearchRoomId() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& m_IsSearchRoomIdValid() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& m_IsSearchRoomExisted() {
		return *(T*)((uintptr_t)this + 0x149);
	}
	template <typename T = uintptr_t> T& m_Res() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReadyFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerFromPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerCountInPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlayerInPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerNameFromPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNumOfPlayersNotDownloadMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfMapDownloadedByRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoomLiteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoomAllInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSettingChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatchServiceChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomBeforeJoinMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordRoomMapSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRoomUIType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SyncLocalRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__TraversPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomPlayerEnterNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessVoiceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberLoadoutChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuitReasonStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEnterBrRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSwitchSeatNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerStateChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdateMemberState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomLeaderChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSeatAvaliableForFFA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSelfObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentRoomLadderType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomTypeDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPendingObserveInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ObserveFriendIfExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerListLocalPlayerBelongTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreSaveInfoToPreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEmulatorPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEmulatorPlayersInList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InviteEnterRoomParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMapidByPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerDownloadMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreSendQuitRoomRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomHangUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLadderRankLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRLadderRankLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMpMinLadderLevelAllTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMpMinLevelAllTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEnoughToEnterRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMapIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSatisfiedPlayerLimit_SoloMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingStatisfyLadderLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingStatisfyLadderLimit_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingSatisfyLimit_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaylistList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumOfInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideEncourageTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRoomPlayerNumLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInviteSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapsMustDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopNextInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushApplyEnterRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInvitations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBlockFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfFriendBlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify_Reconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReceivedMatchJoinNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseDefaultHostFromData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseHostFromData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreSaveRoomId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRoomSearchRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}

	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A228))(this);
	}
	template <typename T = bool> T get_ReadyFlag() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE6D98))(this);
	}
	template <typename T = void> T SetReadyFlag(bool bFlag) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2CE6FAC))(this, bFlag);
	}
	template <typename T = bool> T get_IsOwner() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4D78))(this);
	}
	template <typename T = uintptr_t> T get_RoomUIType() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CCCC30))(this);
	}
	template <typename T = bool> T get_IsReady() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4D80))(this);
	}
	template <typename T = uintptr_t> T get_SelfCamp() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE6DA0))(this);
	}
	template <typename T = Il2CppString*> T get_RoomName() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A300))(this);
	}
	template <typename T = uint32_t> T get_BRMaxPlayerCount() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0ACA0))(this);
	}
	template <typename T = uint32_t> T get_BRAiPlayerCount() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0ACA8))(this);
	}
	template <typename T = uint32_t> T get_RoomID() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE5BE4))(this);
	}
	template <typename T = uint32_t> T get_PreRoomId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A308))(this);
	}
	template <typename T = void> T set_PreRoomId(uint32_t value) {
		return ((T (*)(RoomDataStore*, uint32_t))(Il2CppBase() + 0x2D1A310))(this, value);
	}
	template <typename T = uint32_t> T get_RoomSrvAddress() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D119BC))(this);
	}
	template <typename T = Il2CppString*> T get_Password() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A318))(this);
	}
	template <typename T = int32_t> T get_ModeID() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D04718))(this);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CCC534))(this);
	}
	template <typename T = int32_t> T get_InstanceId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CDF26C))(this);
	}
	template <typename T = int32_t> T get_PlaylistId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CD660C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_PlaylistList() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CDFF7C))(this);
	}
	template <typename T = int32_t> T get_BrPlaylistId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CCC52C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_mapIds() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CD6F88))(this);
	}
	template <typename T = int32_t> T get_MatchType() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CCCC38))(this);
	}
	template <typename T = uintptr_t> T get_PPMode() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CF2488))(this);
	}
	template <typename T = bool> T get_AutoFill() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CFA944))(this);
	}
	template <typename T = bool> T get_IfSpectating() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4B74))(this);
	}
	template <typename T = bool> T get_IfAllowToInvite() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0AC98))(this);
	}
	template <typename T = int32_t> T get_SettingParam1() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0AC88))(this);
	}
	template <typename T = int32_t> T get_SettingParam2() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0AC90))(this);
	}
	template <typename T = uintptr_t> T get_MatchServiceModule() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CCCC40))(this);
	}
	template <typename T = int32_t> T get_MaxObserverCount() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4B7C))(this);
	}
	template <typename T = uint64_t> T get_RoomOwnerPlayerId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CF6A4C))(this);
	}
	template <typename T = Il2CppString*> T get_RoomOwnerName() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A320))(this);
	}
	template <typename T = uint32_t> T get_RoomTimestamp() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A328))(this);
	}
	template <typename T = int64_t> T get_SendGameStartServerTime() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0BA14))(this);
	}
	template <typename T = void> T set_SendGameStartServerTime(int64_t value) {
		return ((T (*)(RoomDataStore*, int64_t))(Il2CppBase() + 0x2D0BA1C))(this, value);
	}
	template <typename T = bool> T get_RoomGameStarted() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A330))(this);
	}
	template <typename T = bool> T get_RoomInfoValid() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4A08))(this);
	}
	template <typename T = bool> T get_RoomIsHangUp() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE798C))(this);
	}
	template <typename T = bool> T get_IsMatching() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A338))(this);
	}
	template <typename T = uintptr_t> T get_RoomState() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A340))(this);
	}
	template <typename T = uint32_t> T get_TicketFlag() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CEA314))(this);
	}
	template <typename T = void> T set_TicketFlag(uint32_t value) {
		return ((T (*)(RoomDataStore*, uint32_t))(Il2CppBase() + 0x2D1A348))(this, value);
	}
	template <typename T = uint32_t> T get_DSCGroupId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A350))(this);
	}
	template <typename T = bool> T get_MicNeedOpen() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CEA31C))(this);
	}
	template <typename T = bool> T get_IsEmulatorRoom() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A358))(this);
	}
	template <typename T = void> T set_IsEmulatorRoom(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D1A360))(this, value);
	}
	template <typename T = int32_t> T get_PlaylistSelectType() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE0360))(this);
	}
	template <typename T = uintptr_t> T get_QuitReason() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4A10))(this);
	}
	template <typename T = void> T set_QuitReason(uintptr_t value) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D1A368))(this, value);
	}
	template <typename T = uint64_t> T get_IsWarmServerTime() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A370))(this);
	}
	template <typename T = void> T set_IsWarmServerTime(uint64_t value) {
		return ((T (*)(RoomDataStore*, uint64_t))(Il2CppBase() + 0x2D0FEF4))(this, value);
	}
	template <typename T = bool> T get_IsWarm() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A378))(this);
	}
	template <typename T = void> T set_IsWarm(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D0FEEC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RegularPlayerList() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE7418))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RebelPlayerList() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CF6A5C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ObserverPlayerList() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A380))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_FireModeFlagList() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1A388))(this);
	}
	template <typename T = void> T set_FireModeFlagList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(RoomDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D1A390))(this, value);
	}
	template <typename T = uintptr_t> T GetPlayerFromPlayerList(uintptr_t camp, int32_t seatIndex) {
		return ((T (*)(RoomDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x2D1A484))(this, camp, seatIndex);
	}
	template <typename T = int32_t> T GetPlayerCountInPlayerList(uintptr_t camp) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2CE8FF4))(this, camp);
	}
	template <typename T = bool> T IsPlayerInPlayerList(uintptr_t camp, uint64_t playerId) {
		return ((T (*)(RoomDataStore*, uintptr_t, uint64_t))(Il2CppBase() + 0x2D1A740))(this, camp, playerId);
	}
	template <typename T = Il2CppString*> T GetPlayerNameFromPlayerList(uint64_t playerId) {
		return ((T (*)(RoomDataStore*, uint64_t))(Il2CppBase() + 0x2D0C7E8))(this, playerId);
	}
	template <typename T = int32_t> T CheckNumOfPlayersNotDownloadMap(uintptr_t camp, uint32_t octMapId, bool needChcekMap) {
		return ((T (*)(RoomDataStore*, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x2D1AA08))(this, camp, octMapId, needChcekMap);
	}
	template <typename T = bool> T GetSelfMapDownloadedByRoomInfo(uint32_t octMapId) {
		return ((T (*)(RoomDataStore*, uint32_t))(Il2CppBase() + 0x2D1B12C))(this, octMapId);
	}
	template <typename T = void> T RefreshRoomLiteInfo(uintptr_t info) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D04B0C))(this, info);
	}
	template <typename T = void> T RefreshRoomAllInfo(uintptr_t info) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D01878))(this, info);
	}
	template <typename T = void> T OnRoomSettingChangeNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0B2C8))(this, ntf);
	}
	template <typename T = int32_t> T IsMatchServiceChange(int32_t lastMatchServiceModule) {
		return ((T (*)(RoomDataStore*, int32_t))(Il2CppBase() + 0x2D1B894))(this, lastMatchServiceModule);
	}
	template <typename T = void> T OnRoomBeforeJoinMatchNtf(uintptr_t res) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0D948))(this, res);
	}
	template <typename T = void> T RecordRoomMapSetting() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D0F76C))(this);
	}
	template <typename T = void> T _RefreshRoomUIType() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1B698))(this);
	}
	template <typename T = void> T _SyncLocalRoomInfo(uintptr_t info) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D1B4C8))(this, info);
	}
	template <typename T = void> T _TraversPlayerList(Il2CppList<uintptr_t>* serverList, Il2CppList<uintptr_t>* clientlist) {
		return ((T (*)(RoomDataStore*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D1B9C4))(this, serverList, clientlist);
	}
	template <typename T = void> T OnRoomPlayerEnterNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D06AD4))(this, ntf);
	}
	template <typename T = void> T ProcessVoiceInfo(uintptr_t playerInfo) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D1BF14))(this, playerInfo);
	}
	template <typename T = void> T OnRoomMemberLoadoutChangeNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0DCD0))(this, ntf);
	}
	template <typename T = void> T OnRoomMemberInfoChangeNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0E294))(this, ntf);
	}
	template <typename T = Il2CppString*> T GetQuitReasonStr() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CEA838))(this);
	}
	template <typename T = void> T ClearRoom(uintptr_t quitReason) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D015F8))(this, quitReason);
	}
	template <typename T = bool> T CanEnterBrRoom() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE611C))(this);
	}
	template <typename T = void> T OnRoomSwitchSeatNtf(uintptr_t res) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0A430))(this, res);
	}
	template <typename T = void> T OnPlayerStateChangeNotify(uintptr_t res) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D025E4))(this, res);
	}
	template <typename T = void> T _UpdateMemberState(Il2CppList<uintptr_t>* list, uint64_t playerID, uint32_t state) {
		return ((T (*)(RoomDataStore*, Il2CppList<uintptr_t>*, uint64_t, uint32_t))(Il2CppBase() + 0x2D1C390))(this, list, playerID, state);
	}
	template <typename T = void> T OnQuitRoomNotify(uintptr_t ntf, uintptr_t tip) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D04C80))(this, ntf, tip);
	}
	template <typename T = Il2CppString*> T OnRoomLeaderChangeNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D056F0))(this, ntf);
	}
	template <typename T = bool> T IsSeatAvaliableForFFA() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1C560))(this);
	}
	template <typename T = bool> T IsSelfObserver() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4D88))(this);
	}
	template <typename T = uintptr_t> T CurrentRoomLadderType() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE2434))(this);
	}
	template <typename T = void> T set_PasswordPopuped(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D1C768))(this, value);
	}
	template <typename T = bool> T get_PasswordPopuped() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1C770))(this);
	}
	template <typename T = void> T set_PasswordCorrect(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D1C778))(this, value);
	}
	template <typename T = bool> T get_PasswordCorrect() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1C780))(this);
	}
	template <typename T = Il2CppString*> static T GetRoomTypeDesc(uintptr_t roomType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C788))(0, roomType);
	}
	template <typename T = void> T SetPendingObserveInfo(uint64_t observeID, uint32_t observeAddr) {
		return ((T (*)(RoomDataStore*, uint64_t, uint32_t))(Il2CppBase() + 0x2D1C89C))(this, observeID, observeAddr);
	}
	template <typename T = void> T ObserveFriendIfExist() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1C998))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetPlayerListLocalPlayerBelongTo() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1CB0C))(this);
	}
	template <typename T = void> T PreSaveInfoToPreInit(int32_t modeId, int32_t mapId, int32_t instanceId, int32_t spvpPlaylistId, Il2CppList<uint32_t>* mapIds, uintptr_t roomType, bool bIsOwner, uintptr_t roomUIType, int32_t teamType, uint32_t brMaxPlayerNum, Il2CppString* roomName, Il2CppString* password, bool enableOtherInvite, uintptr_t ppMode, uint32_t maxObserverCount, bool bAutoFill, int32_t brPlaylistId) {
		return ((T (*)(RoomDataStore*, int32_t, int32_t, int32_t, int32_t, Il2CppList<uint32_t>*, uintptr_t, bool, uintptr_t, int32_t, uint32_t, Il2CppString*, Il2CppString*, bool, uintptr_t, uint32_t, bool, int32_t))(Il2CppBase() + 0x2CFF0A0))(this, modeId, mapId, instanceId, spvpPlaylistId, mapIds, roomType, bIsOwner, roomUIType, teamType, brMaxPlayerNum, roomName, password, enableOtherInvite, ppMode, maxObserverCount, bAutoFill, brPlaylistId);
	}
	template <typename T = int32_t> T get_RoomShortCode() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CE4A00))(this);
	}
	template <typename T = void> T set_RoomShortCode(int32_t value) {
		return ((T (*)(RoomDataStore*, int32_t))(Il2CppBase() + 0x2D1CED0))(this, value);
	}
	template <typename T = uint64_t> T get_SelectBrRoomCreatePlayerId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1CED8))(this);
	}
	template <typename T = void> T SetSelectPlayerId(uint64_t playerId) {
		return ((T (*)(RoomDataStore*, uint64_t))(Il2CppBase() + 0x2D1CEE0))(this, playerId);
	}
	template <typename T = void> T CheckEmulatorPlayers() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D022EC))(this);
	}
	template <typename T = bool> T HasEmulatorPlayersInList(Il2CppList<uintptr_t>* infos) {
		return ((T (*)(RoomDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D1D08C))(this, infos);
	}
	template <typename T = Il2CppString*> T InviteEnterRoomParam() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1D200))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1D64C))(this);
	}
	template <typename T = void> T UpdateMapidByPlayerId(uint64_t playerId, Il2CppList<uint32_t>* newMapIds) {
		return ((T (*)(RoomDataStore*, uint64_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D1D72C))(this, playerId, newMapIds);
	}
	template <typename T = void> T UpdatePlayerDownloadMapState(uint32_t mapId, uint64_t playerId, int32_t state) {
		return ((T (*)(RoomDataStore*, uint32_t, uint64_t, int32_t))(Il2CppBase() + 0x2D1E0CC))(this, mapId, playerId, state);
	}
	template <typename T = void> T PreSendQuitRoomRequest(uint32_t flag) {
		return ((T (*)(RoomDataStore*, uint32_t))(Il2CppBase() + 0x2D03D3C))(this, flag);
	}
	template <typename T = void> T SetRoomHangUp(bool bHangUp) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D1E3F0))(this, bHangUp);
	}
	template <typename T = void> T GetLadderRankLimit(uintptr_t lowerRank, uintptr_t upperRank) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0C598))(this, lowerRank, upperRank);
	}
	template <typename T = void> T GetBRLadderRankLimit(uintptr_t lowerRank, uintptr_t upperRank) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1E4C8))(this, lowerRank, upperRank);
	}
	template <typename T = int32_t> T GetMpMinLadderLevelAllTeam() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2CDD5D0))(this);
	}
	template <typename T = int32_t> T GetMpMinLevelAllTeam() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D1E718))(this);
	}
	template <typename T = bool> T CheckEnoughToEnterRoom(uint32_t modeID, uint32_t roomType, int32_t playlistID, bool isFeatureOnly) {
		return ((T (*)(RoomDataStore*, uint32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x2D1E8C4))(this, modeID, roomType, playlistID, isFeatureOnly);
	}
	template <typename T = void> T SetMapIDs(Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomDataStore*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D1FA64))(this, mapIds);
	}
	template <typename T = bool> T IsSatisfiedPlayerLimit_SoloMode(bool bTip) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D1FB6C))(this, bTip);
	}
	template <typename T = bool> T IsRoomSettingStatisfyLadderLimit(uintptr_t targetList, uintptr_t tip) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1FD74))(this, targetList, tip);
	}
	template <typename T = bool> T IsRoomSettingStatisfyLadderLimit_Multiple(uintptr_t targetList, uintptr_t tip) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1FEE0))(this, targetList, tip);
	}
	template <typename T = bool> T IsRoomSettingSatisfyLimit_Multiple(uintptr_t targetList, uintptr_t tip) {
		return ((T (*)(RoomDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D205D4))(this, targetList, tip);
	}
	template <typename T = void> T SetPlaylistList(Il2CppList<uint32_t>* list) {
		return ((T (*)(RoomDataStore*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2D0AFE0))(this, list);
	}
	template <typename T = int32_t> T GetNumOfInvite() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D20D58))(this);
	}
	template <typename T = bool> T IsHideEncourageTeam() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D2102C))(this);
	}
	template <typename T = bool> T IsRoomFull() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D210FC))(this);
	}
	template <typename T = bool> T CheckRoomPlayerNumLimit(uintptr_t tipContent) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D21528))(this, tipContent);
	}
	template <typename T = void> T CheckInviteSuccess(uint64_t playerId) {
		return ((T (*)(RoomDataStore*, uint64_t))(Il2CppBase() + 0x2D1C220))(this, playerId);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetMapsMustDown() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D219D4))(this);
	}
	template <typename T = uintptr_t> T get_CurrentInvitation() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D220A0))(this);
	}
	template <typename T = uintptr_t> T PopNextInvitation() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D220A8))(this);
	}
	template <typename T = void> T PushInvitation(uintptr_t invitationNtf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D07BB0))(this, invitationNtf);
	}
	template <typename T = void> T PushApplyEnterRoom(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D22324))(this, ntf);
	}
	template <typename T = void> T ClearInvitations() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D2283C))(this);
	}
	template <typename T = void> T set_InvitationShowed(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D2294C))(this, value);
	}
	template <typename T = bool> T get_InvitationShowed() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D22954))(this);
	}
	template <typename T = void> T SetBlockFriend(uint64_t playerid, uintptr_t type) {
		return ((T (*)(RoomDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x2D08A6C))(this, playerid, type);
	}
	template <typename T = bool> T IfFriendBlocked(uint64_t playerid, uintptr_t type) {
		return ((T (*)(RoomDataStore*, uint64_t, uintptr_t))(Il2CppBase() + 0x2D07850))(this, playerid, type);
	}
	template <typename T = uint32_t> T get_ExpireTime() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D2295C))(this);
	}
	template <typename T = bool> T get_bShowMatchingAfterReconnect() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D22964))(this);
	}
	template <typename T = void> T set_bShowMatchingAfterReconnect(bool value) {
		return ((T (*)(RoomDataStore*, bool))(Il2CppBase() + 0x2D2296C))(this, value);
	}
	template <typename T = void> T OnRoomGameStartNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0D020))(this, ntf);
	}
	template <typename T = void> T OnRoomGameStartNotify_Reconnect(uintptr_t ntf) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D0D49C))(this, ntf);
	}
	template <typename T = bool> T get_IsJoinedMatch() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D22974))(this);
	}
	template <typename T = void> T ReceivedMatchJoinNotify(uintptr_t data, bool isJoinMatch) {
		return ((T (*)(RoomDataStore*, uintptr_t, bool))(Il2CppBase() + 0x2D0FF04))(this, data, isJoinMatch);
	}
	template <typename T = bool> T IsObserver(Il2CppList<uintptr_t>* players, uint64_t playerID) {
		return ((T (*)(RoomDataStore*, Il2CppList<uintptr_t>*, uint64_t))(Il2CppBase() + 0x2D2346C))(this, players, playerID);
	}
	template <typename T = void> static T ParseDefaultHostFromData(uintptr_t data, uintptr_t* ip, uintptr_t* port) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2D22984))(0, data, ip, port);
	}
	template <typename T = void> static T ParseHostFromData(uintptr_t data, uintptr_t* dsInfoList) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D22C1C))(0, data, dsInfoList);
	}
	template <typename T = Il2CppString*> T get_SearchRoomId() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D23638))(this);
	}
	template <typename T = bool> T get_IsSearchRoomIdValid() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D23640))(this);
	}
	template <typename T = bool> T get_IsSearchRoomExisted() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D23648))(this);
	}
	template <typename T = uintptr_t> T get_Res() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D23650))(this);
	}
	template <typename T = void> T PreSaveRoomId(Il2CppString* searchRoomId) {
		return ((T (*)(RoomDataStore*, Il2CppString*))(Il2CppBase() + 0x2D12A28))(this, searchRoomId);
	}
	template <typename T = void> T OnResRoomSearchRoom(uintptr_t res) {
		return ((T (*)(RoomDataStore*, uintptr_t))(Il2CppBase() + 0x2D12DA8))(this, res);
	}
	template <typename T = void> T ResetToInit() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D23658))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D237E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(RoomDataStore*))(Il2CppBase() + 0x2D237EC))(this);
	}

};

}
