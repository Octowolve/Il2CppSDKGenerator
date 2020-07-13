#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mFriendDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mFriendVM() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& kDecodeFailedDescription() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& kNullDescription() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& RELATIVE_FRIENDS_END() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& GAME_FRIENDS_END() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetAllFriendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetFriendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SendGetFriendRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetFriendResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendStatusChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendGuildInfoChangeNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendGetMessageRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendGetAddMessageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAddRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAddResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAddMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAddAnswerRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAddAnswerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAddAnswerAllRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAddAnswerAllResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestObserveFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObserveFriendResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendSearchRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendSearchResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendGetBlackListRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendGetBlackListResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetRecommendFriendsRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecommendFriendsResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendDeleteRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendDeleteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendDeleteNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendBlackRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBlackResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendBlackStrangerRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBlackStrangerResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetRecentGamePlayersReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetRecentPlayersReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecentGamePlayersResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRecentPlayersResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAuthorityGetReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAuthorityGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendAuthoritySetReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendAuthoritySetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendRelationFriendSwitchDataRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelationFriendSwitchDataNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32B88A4))(this);
	}
	template <typename T = uintptr_t> T get_FriendVM() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32B8954))(this);
	}
	template <typename T = void> T SendGetAllFriendRequest() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32A9710))(this);
	}
	template <typename T = void> T CheckReconnect() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32B8BA4))(this);
	}
	template <typename T = bool> T SendGetFriendRequest(uintptr_t friendType) {
		return ((T (*)(FriendSystemAssist*, uintptr_t))(Il2CppBase() + 0x32B8A04))(this, friendType);
	}
	template <typename T = void> T RestoreDefault(uintptr_t friendType, bool isDefualt) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, bool))(Il2CppBase() + 0x32B8C78))(this, friendType, isDefualt);
	}
	template <typename T = bool> T SendGetFriendRequest_1(int32_t pageIndex, uintptr_t friendType) {
		return ((T (*)(FriendSystemAssist*, int32_t, uintptr_t))(Il2CppBase() + 0x32B8D78))(this, pageIndex, friendType);
	}
	template <typename T = bool> T OnGetFriendResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32B8EF8))(this, message, errstr);
	}
	template <typename T = bool> T OnFriendStatusChangeNotify(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32B9508))(this, message, errstr);
	}
	template <typename T = bool> T OnFriendGuildInfoChangeNotify(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32B97D0))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendGetMessageRequest() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32B9A70))(this);
	}
	template <typename T = bool> T OnFriendGetAddMessageResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32B9BA0))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendAddRequest(uint64_t playerid, int32_t msource) {
		return ((T (*)(FriendSystemAssist*, uint64_t, int32_t))(Il2CppBase() + 0x32BA034))(this, playerid, msource);
	}
	template <typename T = bool> T OnFriendAddResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BA30C))(this, message, errstr);
	}
	template <typename T = bool> T OnFriendAddMessageNotify(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BAF24))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendAddAnswerRequest(uint64_t playerid, int32_t flag) {
		return ((T (*)(FriendSystemAssist*, uint64_t, int32_t))(Il2CppBase() + 0x32AE118))(this, playerid, flag);
	}
	template <typename T = bool> T OnFriendAddAnswerResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32AE430))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendAddAnswerAllRequest(uintptr_t flag, int32_t PageIndex) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, int32_t))(Il2CppBase() + 0x32AD55C))(this, flag, PageIndex);
	}
	template <typename T = bool> T OnFriendAddAnswerAllResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32AEF14))(this, message, errstr);
	}
	template <typename T = bool> T RequestObserveFriend(uint64_t playerID, uint32_t matchRoomAddr) {
		return ((T (*)(FriendSystemAssist*, uint64_t, uint32_t))(Il2CppBase() + 0x32BB198))(this, playerID, matchRoomAddr);
	}
	template <typename T = bool> T OnObserveFriendResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BB4A0))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendSearchRequest(Il2CppString* name) {
		return ((T (*)(FriendSystemAssist*, Il2CppString*))(Il2CppBase() + 0x32A0530))(this, name);
	}
	template <typename T = bool> T OnFriendSearchResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32A0A6C))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendGetBlackListRequest() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32BB7DC))(this);
	}
	template <typename T = bool> T OnFriendGetBlackListResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BB90C))(this, message, errstr);
	}
	template <typename T = bool> T SendGetRecommendFriendsRequest(uintptr_t gameType, uintptr_t ladderType) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32A06E0))(this, gameType, ladderType);
	}
	template <typename T = bool> T OnGetRecommendFriendsResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BBCE8))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendDeleteRequest(uint64_t playerid, int32_t reason) {
		return ((T (*)(FriendSystemAssist*, uint64_t, int32_t))(Il2CppBase() + 0x32BC2BC))(this, playerid, reason);
	}
	template <typename T = bool> T OnFriendDeleteResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BC564))(this, message, errstr);
	}
	template <typename T = bool> T OnFriendDeleteNotify(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BCB0C))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendBlackRequest(uint64_t playerid, bool addFlag) {
		return ((T (*)(FriendSystemAssist*, uint64_t, bool))(Il2CppBase() + 0x32BCD9C))(this, playerid, addFlag);
	}
	template <typename T = bool> T OnFriendBlackResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BD048))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendBlackStrangerRequest(uint64_t playerid, bool addFlag) {
		return ((T (*)(FriendSystemAssist*, uint64_t, bool))(Il2CppBase() + 0x32BD5B4))(this, playerid, addFlag);
	}
	template <typename T = bool> T OnFriendBlackStrangerResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BD860))(this, message, errstr);
	}
	template <typename T = bool> T SendGetRecentGamePlayersReq(uintptr_t gameType, int32_t pageIndex) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, int32_t))(Il2CppBase() + 0x32A9930))(this, gameType, pageIndex);
	}
	template <typename T = bool> T SendGetRecentPlayersReq() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32BDDF0))(this);
	}
	template <typename T = bool> T OnGetRecentGamePlayersResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BDF98))(this, message, errstr);
	}
	template <typename T = bool> T OnGetRecentPlayersResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BE4AC))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendAuthorityGetReq() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32BE990))(this);
	}
	template <typename T = bool> T OnFriendAuthorityGetResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BEAC0))(this, message, errstr);
	}
	template <typename T = bool> T SendFriendAuthoritySetReq(bool ignoreStranger) {
		return ((T (*)(FriendSystemAssist*, bool))(Il2CppBase() + 0x32ACCA4))(this, ignoreStranger);
	}
	template <typename T = bool> T OnFriendAuthoritySetResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BEE30))(this, message, errstr);
	}
	template <typename T = bool> T SendRelationFriendSwitchDataRequest() {
		return ((T (*)(FriendSystemAssist*))(Il2CppBase() + 0x32BF330))(this);
	}
	template <typename T = bool> T OnRelationFriendSwitchDataNotify(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(FriendSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x32BF460))(this, message, errstr);
	}

};

}
