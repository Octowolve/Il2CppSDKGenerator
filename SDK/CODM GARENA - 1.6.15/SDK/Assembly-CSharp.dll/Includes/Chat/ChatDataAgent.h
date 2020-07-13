#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mChatDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mLocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mGuildDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mRoomDS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfSimpleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendWorldChatMessageRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendWorldChatInviteRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendWorldChatBindingRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendWorldChatBigHornRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWorldChatNewMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendFriendChatMessageRequeset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendChatSendMessageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendChatNewMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGuildChatMessageReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGuildJoinInviteReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGuildChatInviteReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildChatMessageRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildChatNewMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendSquadChatMessageRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSquadChatMessageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSquadChatNewMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendChatFetchMessageRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatFetchMessageResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendApplyEnterOtherPlayerRoomReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterOtherPlayerRoomRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplyEnterOtherPlayerRoomNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatClearTalkNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuickTeamTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendEnterRoomRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendQTInfoFetch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendQuickJoinReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T get_ChatDS() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D27050))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D274BC))(this);
	}
	template <typename T = uintptr_t> T get_GuildDS() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D2756C))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D2761C))(this);
	}
	template <typename T = uintptr_t> T GetSelfSimpleInfo() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D276CC))(this);
	}
	template <typename T = bool> T SendWorldChatMessageRequest(Il2CppString* content, uintptr_t messageType) {
		return ((T (*)(ChatDataAgent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1D27A04))(this, content, messageType);
	}
	template <typename T = bool> T SendWorldChatInviteRequest() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D254AC))(this);
	}
	template <typename T = bool> T SendWorldChatBindingRequest(Il2CppString* InviteNewbieCode) {
		return ((T (*)(ChatDataAgent*, Il2CppString*))(Il2CppBase() + 0x1D27CB8))(this, InviteNewbieCode);
	}
	template <typename T = bool> T SendWorldChatBigHornRequest(Il2CppString* content) {
		return ((T (*)(ChatDataAgent*, Il2CppString*))(Il2CppBase() + 0x1D27F58))(this, content);
	}
	template <typename T = void> T OnWorldChatNewMessageNotify(uintptr_t Msg, uintptr_t* err) {
		return ((T (*)(ChatDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D281F8))(this, Msg, err);
	}
	template <typename T = bool> T SendFriendChatMessageRequeset(uint64_t playerid, Il2CppString* content, uintptr_t messageType) {
		return ((T (*)(ChatDataAgent*, uint64_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1D28EEC))(this, playerid, content, messageType);
	}
	template <typename T = bool> T OnFriendChatSendMessageResponse(uintptr_t message) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D29138))(this, message);
	}
	template <typename T = bool> T OnFriendChatNewMessageNotify(uintptr_t message) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2976C))(this, message);
	}
	template <typename T = bool> T SendGuildChatMessageReq(Il2CppString* content, uintptr_t messageType) {
		return ((T (*)(ChatDataAgent*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1D2A128))(this, content, messageType);
	}
	template <typename T = bool> T SendGuildJoinInviteReq(uint64_t guildID, Il2CppString* guildName) {
		return ((T (*)(ChatDataAgent*, uint64_t, Il2CppString*))(Il2CppBase() + 0x1D2A370))(this, guildID, guildName);
	}
	template <typename T = bool> T SendGuildChatInviteReq() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D25C98))(this);
	}
	template <typename T = bool> T OnGuildChatMessageRes(uintptr_t msg, uintptr_t* err) {
		return ((T (*)(ChatDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D2A6C0))(this, msg, err);
	}
	template <typename T = void> T OnGuildChatNewMessageNotify(uintptr_t Msg) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2AD8C))(this, Msg);
	}
	template <typename T = bool> T SendSquadChatMessageRequest(Il2CppString* content, bool isTeamate, uintptr_t messageType) {
		return ((T (*)(ChatDataAgent*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1D2B394))(this, content, isTeamate, messageType);
	}
	template <typename T = void> T OnSquadChatMessageResponse(uintptr_t msg) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2B5D0))(this, msg);
	}
	template <typename T = void> T OnSquadChatNewMessageNotify(uintptr_t Msg) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2BCC4))(this, Msg);
	}
	template <typename T = bool> T SendChatFetchMessageRequest() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D2C530))(this);
	}
	template <typename T = bool> T OnChatFetchMessageResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(ChatDataAgent*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D2C660))(this, message, errstr);
	}
	template <typename T = Il2CppString*> T TimeChange(int64_t timeStamp) {
		return ((T (*)(ChatDataAgent*, int64_t))(Il2CppBase() + 0x1D28A7C))(this, timeStamp);
	}
	template <typename T = void> T SendApplyEnterOtherPlayerRoomReq(uint64_t playerID) {
		return ((T (*)(ChatDataAgent*, uint64_t))(Il2CppBase() + 0x1D2CA1C))(this, playerID);
	}
	template <typename T = bool> T OnApplyEnterOtherPlayerRoomRes(uintptr_t message) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2CB98))(this, message);
	}
	template <typename T = bool> T OnApplyEnterOtherPlayerRoomNotify(uintptr_t message) {
		return ((T (*)(ChatDataAgent*, uintptr_t))(Il2CppBase() + 0x1D2CFAC))(this, message);
	}
	template <typename T = void> T OnChatClearTalkNtf() {
		return ((T (*)(ChatDataAgent*))(Il2CppBase() + 0x1D2D280))(this);
	}
	template <typename T = void> T QuickTeamTLog(int32_t _Invite, int32_t _QuickTeam) {
		return ((T (*)(ChatDataAgent*, int32_t, int32_t))(Il2CppBase() + 0x1D2D3FC))(this, _Invite, _QuickTeam);
	}
	template <typename T = bool> T SendEnterRoomRequest(uint32_t roomID, uint32_t roomAddress, Il2CppString* password, uintptr_t channel, uint64_t invite_id, uintptr_t enterRoomSource, bool showTip, uintptr_t js) {
		return ((T (*)(ChatDataAgent*, uint32_t, uint32_t, Il2CppString*, uintptr_t, uint64_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1D2D5D8))(this, roomID, roomAddress, password, channel, invite_id, enterRoomSource, showTip, js);
	}
	template <typename T = bool> T SendQTInfoFetch(uint32_t roomId, uint32_t roomAddr) {
		return ((T (*)(ChatDataAgent*, uint32_t, uint32_t))(Il2CppBase() + 0x1D2DB48))(this, roomId, roomAddr);
	}
	template <typename T = bool> T SendQuickJoinReq(uintptr_t para, uintptr_t channel) {
		return ((T (*)(ChatDataAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D2DCD8))(this, para, channel);
	}

};

}
