#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatDataStore"));
	}

	template <typename T = int32_t> static T& FullFriendsIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FullFriendsMessageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& FullGuildMemberIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& FullGuildMessageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& FullWorldMessageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& FullSquadMemberIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& FullSquadMessageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& FullInGameFriendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& FullWorldBigHornIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& FullRoomMessageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> T& worldBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& guildBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GuildMsg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& friendBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& friendBroadcastPlayerID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& squadBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& roomBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& curBroadcastMsg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isCurBroadcaseQT() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LastestInvite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& curBroadcastType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& friendDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> static T& localPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWorldChatList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWorldQuickTeamList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& curWorldBottomNewMsgTips() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& warZoneID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isTopMessage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& clearPartOfWorldChatList() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> T& mCurrentWorldBigHornChat() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint64_t> T& currentBigHornStartTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& cacheWorldBigHornChat() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& showBigHornChat() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bigHornRollFinished() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = uintptr_t> T& bigHornShowTimer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& cacheBigHornTimer() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& bigHornShowTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& CloneNumber() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mGuildChatList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mGuildQuickTeamList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& curGuildBottomNewMsgTips() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& clearPartOfGuildChatList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint64_t> T& chatFriendPlayerID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& mFriendRedDotDic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& curFriendBottomNewMsgTips() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& mFriendChatList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& mFriendMsgUnread() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> static T& kChatTimeIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mSquadChatList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& curSquadBottomNewMsgTips() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRoomChatList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& curRoomBottomNewMsgTips() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& WorldPlayerPictureDic() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& NotWorldPlayerPictureDic() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& SquadPlayerPictureDic() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& worldTabDotNum() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& friendTabDotNum() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& guildTabDotNum() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& squadTabDotNum() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& roomTabDotNum() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& setBRTeamType() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& curInviteInfo() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uint32_t> T& roomId() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uint32_t> T& roomSvrAddr() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& roomPassword() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& invite_id() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& roomInviteChannel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& bApplyEnterRoom() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ticketSource() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ticketSourceStore() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& EnterSource() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& pveSurvivalInviteInfo() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& pveInviteInfo() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& pveRaidsInviteInfo() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& pveRaidsEasyInviteInfo() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& pvpInviteInfo() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& pvpInviteFeatureInfo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& pvpRankInviteInfo() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& pvpCreateRoomInviteInfo() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& brInviteInfo() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& brInviteFeatureInfo() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& brRankInviteInfo() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& brCreateRoomInviteInfo() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& brSniperInviteInfo() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& IsQuickJoining() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& IsQuickJoiningStepTwo() {
		return *(T*)((uintptr_t)this + 0x141);
	}
	template <typename T = bool> T& IsCreatingMpLadder() {
		return *(T*)((uintptr_t)this + 0x142);
	}
	template <typename T = uintptr_t> T& CacheParam() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& PVPRankTypeDic() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& BRRankTypeDic() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& prepareSendInviteMsg() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& chatRoomInfoDic() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pvpMatchPlaylist() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pvpRoomPlaylist() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& brMatchPlaylist() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& brRankPlaylist() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& brRoomPlaylist() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uint64_t> T& CurInGameChatFriendID() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = bool> T& mInGameFriendTabRedDot() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& dontDisturb() {
		return *(T*)((uintptr_t)this + 0x179);
	}
	template <typename T = Il2CppDictionary<uint64_t, int32_t>*> T& mInGameFriendRedDotDic() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& InGameChatFriendList() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& mInGameFriendChatDic() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& menuBarMode() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> static T& rgx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurBroadcastMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBroadcastCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBroadcastData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearQuickTeamData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDuplicateQuickTeamData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FilterByChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWorldChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWorldChatMessageInfoImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildWorldChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWorldChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBigHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBigHornFromCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGuildChatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddGuildChatMessageImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearGuildChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriendChatList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFriendChatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFriendChatMessageImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildFriendChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFriendChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSquadChatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSquadChatMessageImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSquadChatData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRoomChatMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddRoomChatMessageImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPlayerPicCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTabRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPVPRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPRankTypeSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBRRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRRankName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRRankTypeSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPPlaylistMaps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPvpMatchPlayList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPvpRoomPlayList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrMatchPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrRankPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrRoomPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteInfoInRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPMaxInviteNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMpFeatureList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBrFeatureList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInGameFriendChatList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInGameFriendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInGameFriendMessageImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearInGameFriendMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllMsgOfCurInGameFriendInHtml() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuBarMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EmojiFilter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStrangerPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCSFriendFromMenuBarMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCSFriendFromChatMessageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}

	template <typename T = Il2CppString*> T get_WorldBroadcastMsg() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30908))(this);
	}
	template <typename T = Il2CppString*> T get_GuildBroadcastMsg() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30910))(this);
	}
	template <typename T = Il2CppString*> T get_FriendBroadcastMsg() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30918))(this);
	}
	template <typename T = Il2CppString*> T get_SquadBroadcastMsg() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30920))(this);
	}
	template <typename T = Il2CppString*> T get_RoomBroadcastMsg() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30928))(this);
	}
	template <typename T = uintptr_t> T get_fds() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30930))(this);
	}
	template <typename T = Il2CppString*> T GetCurBroadcastMsg(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D240E8))(this, info);
	}
	template <typename T = void> T ClearBroadcastCache() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D24B08))(this);
	}
	template <typename T = void> T ClearBroadcastData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D309CC))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30AF8))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D311D4))(this);
	}
	template <typename T = void> T OnLocalChanged() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D312B4))(this);
	}
	template <typename T = void> T ClearQuickTeamData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D31A04))(this);
	}
	template <typename T = void> T RemoveDuplicateQuickTeamData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D31B2C))(this);
	}
	template <typename T = bool> T FilterByChatMessageInfo(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D31EA4))(this, info);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WorldChatList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D32050))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WorldQuickTeamList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D32058))(this);
	}
	template <typename T = uintptr_t> T get_CurrentWorldBigHornChat() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D32060))(this);
	}
	template <typename T = void> T AddWorldChatMessageInfo(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D28BCC))(this, info);
	}
	template <typename T = void> T AddWorldChatMessageInfoImpl(uintptr_t chatInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D32A64))(this, chatInfo);
	}
	template <typename T = uintptr_t> T BuildWorldChatMessageInfo(uintptr_t msgInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D32068))(this, msgInfo);
	}
	template <typename T = void> T ClearWorldChatData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3150C))(this);
	}
	template <typename T = void> T HideBigHorn() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3464C))(this);
	}
	template <typename T = void> T SetBigHorn(uintptr_t chatInfo, bool startTimer) {
		return ((T (*)(ChatDataStore*, uintptr_t, bool))(Il2CppBase() + 0x1D34218))(this, chatInfo, startTimer);
	}
	template <typename T = void> T GetBigHornFromCache() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D347D8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GuildChatList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D349A0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_GuildQuickTeamList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D349A8))(this);
	}
	template <typename T = void> T AddGuildChatMessage(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D2B070))(this, info);
	}
	template <typename T = void> T AddGuildChatMessageImpl(uintptr_t chatInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D351AC))(this, chatInfo);
	}
	template <typename T = uintptr_t> T BuildChatMessageInfo(uintptr_t msgInfo, uintptr_t chatMessageType) {
		return ((T (*)(ChatDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D349B0))(this, msgInfo, chatMessageType);
	}
	template <typename T = void> T ClearGuildChatData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D31694))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetFriendChatList(uint64_t playerID) {
		return ((T (*)(ChatDataStore*, uint64_t))(Il2CppBase() + 0x1D35D34))(this, playerID);
	}
	template <typename T = int32_t> T get_friendMsgUnread() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D27100))(this);
	}
	template <typename T = void> T set_friendMsgUnread(int32_t value) {
		return ((T (*)(ChatDataStore*, int32_t))(Il2CppBase() + 0x1D35EFC))(this, value);
	}
	template <typename T = void> T DeleteFriend(uint64_t playerID) {
		return ((T (*)(ChatDataStore*, uint64_t))(Il2CppBase() + 0x1D35FB4))(this, playerID);
	}
	template <typename T = void> T AddFriendChatMessage(uintptr_t info, bool notify) {
		return ((T (*)(ChatDataStore*, uintptr_t, bool))(Il2CppBase() + 0x1D29ACC))(this, info, notify);
	}
	template <typename T = void> T AddFriendChatMessageImpl(uintptr_t message, bool notify) {
		return ((T (*)(ChatDataStore*, uintptr_t, bool))(Il2CppBase() + 0x1D36BA4))(this, message, notify);
	}
	template <typename T = uintptr_t> T BuildFriendChatMessageInfo(uintptr_t msgInfo, uintptr_t messageInfoType, bool isInGameChat) {
		return ((T (*)(ChatDataStore*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D361D8))(this, msgInfo, messageInfoType, isInGameChat);
	}
	template <typename T = void> T ClearFriendChatData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D313C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_SquadChatList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D375B0))(this);
	}
	template <typename T = void> T AddSquadChatMessage(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D2BEE8))(this, info);
	}
	template <typename T = void> T AddSquadChatMessageImpl(uintptr_t chatInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D375B8))(this, chatInfo);
	}
	template <typename T = void> T ClearSquadChatData() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D2E82C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RoomChatList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D37B30))(this);
	}
	template <typename T = void> T AddRoomChatMessage(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D2C20C))(this, info);
	}
	template <typename T = void> T AddRoomChatMessageImpl(uintptr_t chatInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D37B38))(this, chatInfo);
	}
	template <typename T = void> T ClearPlayerPicCache() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D317D8))(this);
	}
	template <typename T = void> T ClearTabRedDot() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D31924))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D381DC))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D38278))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D38314))(this);
	}
	template <typename T = void> T InitPVPRank() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30C3C))(this);
	}
	template <typename T = Il2CppString*> T GetPVPRankName(int32_t rankType) {
		return ((T (*)(ChatDataStore*, int32_t))(Il2CppBase() + 0x1D383B0))(this, rankType);
	}
	template <typename T = Il2CppString*> T GetPVPRankTypeSpriteName(int32_t rankType) {
		return ((T (*)(ChatDataStore*, int32_t))(Il2CppBase() + 0x1D38638))(this, rankType);
	}
	template <typename T = void> T InitBRRank() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D30F08))(this);
	}
	template <typename T = Il2CppString*> T GetBRRankName(int32_t rankType) {
		return ((T (*)(ChatDataStore*, int32_t))(Il2CppBase() + 0x1D38830))(this, rankType);
	}
	template <typename T = Il2CppString*> T GetBRRankTypeSpriteName(int32_t rankType) {
		return ((T (*)(ChatDataStore*, int32_t))(Il2CppBase() + 0x1D38AB8))(this, rankType);
	}
	template <typename T = Il2CppList<uint32_t>*> T GetPVPPlaylistMaps(uintptr_t configClient) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D38CB0))(this, configClient);
	}
	template <typename T = void> T RefreshPvpMatchPlayList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D38E80))(this);
	}
	template <typename T = void> T RefreshPvpRoomPlayList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3983C))(this);
	}
	template <typename T = void> T RefreshBrMatchPlaylist() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D39E48))(this);
	}
	template <typename T = void> T RefreshBrRankPlaylist() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3A6BC))(this);
	}
	template <typename T = void> T RefreshBrRoomPlaylist() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3ABA4))(this);
	}
	template <typename T = void> T GetInviteInfoInRoom(uintptr_t inviteInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3B08C))(this, inviteInfo);
	}
	template <typename T = int32_t> T GetPVPMaxInviteNum(uintptr_t module, int32_t modeID, int32_t playlistID) {
		return ((T (*)(ChatDataStore*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1D252CC))(this, module, modeID, playlistID);
	}
	template <typename T = void> T RefreshMpFeatureList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D394A0))(this);
	}
	template <typename T = void> T RefreshBrFeatureList() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3A338))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetInGameFriendChatList(uint64_t playerID) {
		return ((T (*)(ChatDataStore*, uint64_t))(Il2CppBase() + 0x1D3B898))(this, playerID);
	}
	template <typename T = void> T AddInGameFriendMessage(uintptr_t info) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D29E00))(this, info);
	}
	template <typename T = void> T AddInGameFriendMessageImpl(uintptr_t message) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3BA60))(this, message);
	}
	template <typename T = void> T ClearInGameFriendMessage() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3BF28))(this);
	}
	template <typename T = Il2CppString*> T GetAllMsgOfCurInGameFriendInHtml(Il2CppList<uintptr_t>* listInfo) {
		return ((T (*)(ChatDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1D3C068))(this, listInfo);
	}
	template <typename T = void> T SetMenuBarMode(uintptr_t mode) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3C530))(this, mode);
	}
	template <typename T = Il2CppString*> static T EmojiFilter(Il2CppString* content) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1D3C86C))(0, content);
	}
	template <typename T = uintptr_t> T GetStrangerPlayerInfo(uint64_t playerID) {
		return ((T (*)(ChatDataStore*, uint64_t))(Il2CppBase() + 0x1D3CA28))(this, playerID);
	}
	template <typename T = uintptr_t> T CreateCSFriendFromMenuBarMode(uintptr_t mode) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3CDB8))(this, mode);
	}
	template <typename T = uintptr_t> T CreateCSFriendFromChatMessageInfo(uintptr_t messageInfo) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3D014))(this, messageInfo);
	}
	template <typename T = bool> T GetCurBroadcastMsgm__0(uintptr_t it) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3D388))(this, it);
	}
	template <typename T = bool> T GetCurBroadcastMsgm__1(uintptr_t it) {
		return ((T (*)(ChatDataStore*, uintptr_t))(Il2CppBase() + 0x1D3D3CC))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3D410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(ChatDataStore*))(Il2CppBase() + 0x1D3D418))(this);
	}

};

}
