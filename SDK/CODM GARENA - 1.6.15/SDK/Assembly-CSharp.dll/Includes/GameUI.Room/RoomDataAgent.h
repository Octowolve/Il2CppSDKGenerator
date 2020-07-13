#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cache_RoomInviteFriendReq() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_TargetChangePlaylist_Multiple() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& cacheVoiceIdForTeam() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_EnterSearchRoomId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& m_EnterSearchRoomSvrAddress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_EnterSearchRoomPassword() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_enterSearchRoomInviteChannel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_PvpFtue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_PvpLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_PvpPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_PvpPlaylistList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_Zombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_BrMatchLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest_BrPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendCreateRoomRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCreateRoomResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomInfoRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameStateChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInfoNty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGroupRoomEnterRoomRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRoomEnterRoomRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendQuitRoomRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyGameStartFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoomNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomKickNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomLeaderChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomLeaderChangeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomPlayerEnterNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteFriendResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomInviteFriendNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInvitationAnswer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckSum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInvitationAnswerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAnswerNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendApplyEnterRoomAnswer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterRoomAnswerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterRoomAnswerNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomSwitchSeat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSwitchSeatResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSwitchSeatNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomSettingChangeRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSettingChangeResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSettingChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomGameStartRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomGameStartNotify_Reconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomBeforeJoinMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomReadyRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomReadyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberLoadoutChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomQuitAllocNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchQuitAllocNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomQuitAllocRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomQuitAllocResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomKickRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendChangeLeaderRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyJoinMatchNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHalfwayJoinLadderMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGroupRoomRecruitRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRoomRecruitResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRoomRecruitNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomReportMicStatReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGroupRoomMicStatNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRoomSetGvoiceIdReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomSetGvoiceIdNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveEnterSearchRoomParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqRoomSearchRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResRoomSearchRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToEnterSearchRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2CFCF60))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2CFD010))(this);
	}
	template <typename T = bool> T SendCreateRoomRequest_PvpFtue() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2CFD0C0))(this);
	}
	template <typename T = bool> T SendCreateRoomRequest_PvpLadder(int32_t spvpPlaylistId, int32_t modeId, bool bPopToRoot, Il2CppList<uint32_t>* ladderList, uintptr_t roomUIType, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, int32_t, bool, Il2CppList<uint32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CFDB88))(this, spvpPlaylistId, modeId, bPopToRoot, ladderList, roomUIType, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest_PvpPlaylist(int32_t playlistId, Il2CppList<uint32_t>* mapIds, uintptr_t roomType, uintptr_t preRoomUIType, bool bPopToRoot, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, Il2CppList<uint32_t>*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2CFE014))(this, playlistId, mapIds, roomType, preRoomUIType, bPopToRoot, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest_PvpPlaylistList(int32_t playlistId, Il2CppList<uint32_t>* PlaylistList, uintptr_t roomType, uintptr_t preRoomUIType, bool bPopToRoot, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, Il2CppList<uint32_t>*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x2CFE334))(this, playlistId, PlaylistList, roomType, preRoomUIType, bPopToRoot, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest_Zombie(int32_t modeId, int32_t instanceId, uintptr_t preRoomUIType, bool bAutoFill, bool bPopToRoot, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, int32_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x2CFE680))(this, modeId, instanceId, preRoomUIType, bAutoFill, bPopToRoot, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest_BrMatchLadder(int32_t brPlaylistId, int32_t mapId, uintptr_t serviceModule, uintptr_t teamType, uintptr_t ppMode, bool bAutoFill, bool bPopToRoot, uintptr_t roomUIType, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CFE9D8))(this, brPlaylistId, mapId, serviceModule, teamType, ppMode, bAutoFill, bPopToRoot, roomUIType, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest_BrPrivate(int32_t brPlaylistId, int32_t mapId, uintptr_t matchServiceModule, uintptr_t teamType, uintptr_t preRoomUIType, uintptr_t ppMode, uint32_t brMaxPlayerNum, Il2CppString* roomName, Il2CppString* password, bool bEnableOtherInvite, uint32_t maxObserverCount, uintptr_t ticketParam) {
		return ((T (*)(RoomDataAgent*, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t, Il2CppString*, Il2CppString*, bool, uint32_t, uintptr_t))(Il2CppBase() + 0x2CFED64))(this, brPlaylistId, mapId, matchServiceModule, teamType, preRoomUIType, ppMode, brMaxPlayerNum, roomName, password, bEnableOtherInvite, maxObserverCount, ticketParam);
	}
	template <typename T = bool> T SendCreateRoomRequest(int32_t modeID, int32_t mapID, int32_t instanceId, uintptr_t roomType, uintptr_t preRoomUIType, int32_t teamType, uint32_t brMaxPlayerNum, Il2CppString* roomName, Il2CppString* password, bool enableOtherInvite, uintptr_t ppMode, uint32_t maxObserverCount, bool bAutoFill, int32_t spvpPlaylistId, Il2CppList<uint32_t>* spvpMapIds, bool bPopToRoot, int32_t brPlaylistId, Il2CppList<uint32_t>* ladderPlayList, uintptr_t ticketParam, Il2CppList<uint32_t>* mpPlaylistList) {
		return ((T (*)(RoomDataAgent*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, uint32_t, Il2CppString*, Il2CppString*, bool, uintptr_t, uint32_t, bool, int32_t, Il2CppList<uint32_t>*, bool, int32_t, Il2CppList<uint32_t>*, uintptr_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x2CFD2B0))(this, modeID, mapID, instanceId, roomType, preRoomUIType, teamType, brMaxPlayerNum, roomName, password, enableOtherInvite, ppMode, maxObserverCount, bAutoFill, spvpPlaylistId, spvpMapIds, bPopToRoot, brPlaylistId, ladderPlayList, ticketParam, mpPlaylistList);
	}
	template <typename T = bool> T OnCreateRoomResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D00948))(this, message, errStr);
	}
	template <typename T = void> T SendRoomInfoRequest(uintptr_t fetchReason) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D00E60))(this, fetchReason);
	}
	template <typename T = bool> T OnRoomInfoResponse(uintptr_t message, uintptr_t* err, uintptr_t* fetchReason) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2D00FBC))(this, message, err, fetchReason);
	}
	template <typename T = bool> T OnGameStateChangeNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D02444))(this, message);
	}
	template <typename T = bool> T OnRoomInfoNty(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D028BC))(this, message);
	}
	template <typename T = void> T SendGroupRoomEnterRoomRequest(uint32_t roomID, uint32_t roomSrvAdd, Il2CppString* password, uintptr_t inviteChannel, uint64_t invite_id, uintptr_t EnterSource, uintptr_t js) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint32_t, Il2CppString*, uintptr_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D02A30))(this, roomID, roomSrvAdd, password, inviteChannel, invite_id, EnterSource, js);
	}
	template <typename T = uintptr_t> T OnGroupRoomEnterRoomRes(uintptr_t message, uintptr_t* err, uintptr_t roomId, uintptr_t roomSvrAdd, uintptr_t inviteChannel) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D02F00))(this, message, err, roomId, roomSvrAdd, inviteChannel);
	}
	template <typename T = void> T SendQuitRoomRequest(uint32_t flag) {
		return ((T (*)(RoomDataAgent*, uint32_t))(Il2CppBase() + 0x2D03A60))(this, flag);
	}
	template <typename T = bool> T OnQuitRoomResponse(uintptr_t message, uintptr_t* err, uintptr_t flag) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D03F34))(this, message, err, flag);
	}
	template <typename T = bool> T OnNotifyGameStartFail(uintptr_t message, uintptr_t str) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D04308))(this, message, str);
	}
	template <typename T = void> T OnQuitRoomNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D04720))(this, message);
	}
	template <typename T = void> T OnRoomKickNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D05420))(this, message);
	}
	template <typename T = bool> T OnRoomLeaderChangeNotify(uintptr_t message, uintptr_t* str) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D05540))(this, message, str);
	}
	template <typename T = bool> T OnRoomLeaderChangeResponse(uintptr_t message, uintptr_t* str) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D062DC))(this, message, str);
	}
	template <typename T = bool> T OnRoomPlayerEnterNtf(uintptr_t message, uintptr_t str) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0658C))(this, message, str);
	}
	template <typename T = void> T SendInviteFriend(uint64_t friendPlayerID, uintptr_t friendType, uintptr_t inviteSource) {
		return ((T (*)(RoomDataAgent*, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CFBBF8))(this, friendPlayerID, friendType, inviteSource);
	}
	template <typename T = bool> T OnInviteFriendResponse(uintptr_t Msg, uintptr_t* errStr, uintptr_t showTips) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D06FE4))(this, Msg, errStr, showTips);
	}
	template <typename T = bool> T OnRoomInviteFriendNtf(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D07558))(this, message);
	}
	template <typename T = void> T SendInvitationAnswer(uint32_t answerFlag, uint64_t playerID, uint32_t roomSrvAddr, uint64_t inviteId, uintptr_t inviteSource, bool norecvin5mins) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint64_t, uint32_t, uint64_t, uintptr_t, bool))(Il2CppBase() + 0x2D084C0))(this, answerFlag, playerID, roomSrvAddr, inviteId, inviteSource, norecvin5mins);
	}
	template <typename T = uint64_t> T GetCheckSum(uint32_t answerFlag, uint64_t srcPlayerId, uint32_t roomSvrAddress, bool isSimulator, bool isGamePad, uint64_t inviteId) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint64_t, uint32_t, bool, bool, uint64_t))(Il2CppBase() + 0x2D08900))(this, answerFlag, srcPlayerId, roomSvrAddress, isSimulator, isGamePad, inviteId);
	}
	template <typename T = bool> T OnInvitationAnswerResponse(uintptr_t message, uintptr_t* err, uintptr_t bAgree, uintptr_t playerId, uintptr_t roomSvrAddress) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D08CF8))(this, message, err, bAgree, playerId, roomSvrAddress);
	}
	template <typename T = uintptr_t> T OnFriendAnswerNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D08FC0))(this, message, err);
	}
	template <typename T = void> T SendApplyEnterRoomAnswer(uint64_t playerID, uint32_t lobbyBusID, bool isAgree, bool norecvin5mins) {
		return ((T (*)(RoomDataAgent*, uint64_t, uint32_t, bool, bool))(Il2CppBase() + 0x2D09140))(this, playerID, lobbyBusID, isAgree, norecvin5mins);
	}
	template <typename T = bool> T OnApplyEnterRoomAnswerResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D09504))(this, message, err);
	}
	template <typename T = bool> T OnApplyEnterRoomAnswerNtf(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D09970))(this, message, errStr);
	}
	template <typename T = void> T SendRoomSwitchSeat(uint32_t NewCamp, uint32_t NewSeat) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint32_t))(Il2CppBase() + 0x2CEDB08))(this, NewCamp, NewSeat);
	}
	template <typename T = bool> T OnRoomSwitchSeatResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0A090))(this, message, err);
	}
	template <typename T = void> T OnRoomSwitchSeatNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0A2A0))(this, message);
	}
	template <typename T = bool> T SendRoomSettingChangeRequest(uint32_t mapID, uint32_t modeID, int32_t instanceId, Il2CppString* password, int32_t match_Type, int32_t bAutoFill, int32_t scoreLimit, int32_t timeLimit, int32_t enable_spectating, int32_t enable_other_invite, int32_t playPlayerCount, int32_t aiPlayerCount, uintptr_t ppMode, int32_t spectatorNum, Il2CppString* roomName, int32_t service_module, int32_t spvpPlaylistId, Il2CppList<uint32_t>* spvpMapIds, int32_t brPlaylistId, uintptr_t flag, int32_t client_source, Il2CppList<uint32_t>* multipleSelectedPlaylistList, uintptr_t ticketParam, bool OnlyChangeTicket) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint32_t, int32_t, Il2CppString*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uintptr_t, int32_t, Il2CppString*, int32_t, int32_t, Il2CppList<uint32_t>*, int32_t, uintptr_t, int32_t, Il2CppList<uint32_t>*, uintptr_t, bool))(Il2CppBase() + 0x2CF2DEC))(this, mapID, modeID, instanceId, password, match_Type, bAutoFill, scoreLimit, timeLimit, enable_spectating, enable_other_invite, playPlayerCount, aiPlayerCount, ppMode, spectatorNum, roomName, service_module, spvpPlaylistId, spvpMapIds, brPlaylistId, flag, client_source, multipleSelectedPlaylistList, ticketParam, OnlyChangeTicket);
	}
	template <typename T = bool> T OnRoomSettingChangeResponse(uintptr_t message, uintptr_t* err, uintptr_t flag) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D0ACB0))(this, message, err, flag);
	}
	template <typename T = bool> T OnRoomSettingChangeNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0B11C))(this, message, err);
	}
	template <typename T = void> T SendRoomGameStartRequest() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2CEDC8C))(this);
	}
	template <typename T = bool> T OnRoomGameStartResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0BA2C))(this, message, err);
	}
	template <typename T = bool> T OnRoomGameStartNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0CE80))(this, message);
	}
	template <typename T = bool> T OnRoomGameStartNotify_Reconnect(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0D2A0))(this, message);
	}
	template <typename T = void> T OnRoomBeforeJoinMatchNtf(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0D69C))(this, message);
	}
	template <typename T = void> T SetRoomReadyRequest(bool bReady) {
		return ((T (*)(RoomDataAgent*, bool))(Il2CppBase() + 0x2CE6DA8))(this, bReady);
	}
	template <typename T = void> T OnRoomReadyResponse(uintptr_t res) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0DA24))(this, res);
	}
	template <typename T = void> T OnRoomMemberLoadoutChangeNotify(uintptr_t ntf) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0DAF4))(this, ntf);
	}
	template <typename T = void> T OnRoomMemberInfoChangeNotify(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D0E128))(this, message);
	}
	template <typename T = bool> T OnRoomQuitAllocNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0E7B0))(this, message, err);
	}
	template <typename T = bool> T OnMatchQuitAllocNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0E934))(this, message, err);
	}
	template <typename T = void> T SendRoomQuitAllocRequest() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2D0EB84))(this);
	}
	template <typename T = int32_t> T OnRoomQuitAllocResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0ECB4))(this, message, errStr);
	}
	template <typename T = void> T SendRoomKickRequest(uint64_t playerId) {
		return ((T (*)(RoomDataAgent*, uint64_t))(Il2CppBase() + 0x2D0EED0))(this, playerId);
	}
	template <typename T = void> T SendChangeLeaderRequest(uint64_t playerId) {
		return ((T (*)(RoomDataAgent*, uint64_t))(Il2CppBase() + 0x2D0F04C))(this, playerId);
	}
	template <typename T = uintptr_t> T OnLobbyJoinMatchNtf(uintptr_t message, bool isJoinMatch, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x2D0F1C8))(this, message, isJoinMatch, err);
	}
	template <typename T = void> T CheckHalfwayJoinLadderMatch(uintptr_t gameInfoDataStore, uintptr_t res) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D10F04))(this, gameInfoDataStore, res);
	}
	template <typename T = void> T SendGroupRoomRecruitRequest() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2D11234))(this);
	}
	template <typename T = void> T OnGroupRoomRecruitResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D11388))(this, message, err);
	}
	template <typename T = void> T OnGroupRoomRecruitNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D11618))(this, message, err);
	}
	template <typename T = void> T SendRoomReportMicStatReq() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2D11758))(this);
	}
	template <typename T = bool> T OnGroupRoomMicStatNtf(uintptr_t message) {
		return ((T (*)(RoomDataAgent*, uintptr_t))(Il2CppBase() + 0x2D119C4))(this, message);
	}
	template <typename T = void> T SendRoomSetGvoiceIdReq(int32_t memberId) {
		return ((T (*)(RoomDataAgent*, int32_t))(Il2CppBase() + 0x2D11C08))(this, memberId);
	}
	template <typename T = bool> T OnRoomSetGvoiceIdNotify(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D11D64))(this, message, err);
	}
	template <typename T = void> T SaveEnterSearchRoomParameter(uint32_t roomId, uint32_t roomSvrAddress, Il2CppString* passwordStr, uintptr_t inviteChannel) {
		return ((T (*)(RoomDataAgent*, uint32_t, uint32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2D126BC))(this, roomId, roomSvrAddress, passwordStr, inviteChannel);
	}
	template <typename T = void> T ReqRoomSearchRoom(Il2CppString* roomId) {
		return ((T (*)(RoomDataAgent*, Il2CppString*))(Il2CppBase() + 0x2D127C4))(this, roomId);
	}
	template <typename T = bool> T OnResRoomSearchRoom(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(RoomDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D12B08))(this, message, errStr);
	}
	template <typename T = void> T SendToEnterSearchRoom() {
		return ((T (*)(RoomDataAgent*))(Il2CppBase() + 0x2D12F20))(this);
	}

};

}
