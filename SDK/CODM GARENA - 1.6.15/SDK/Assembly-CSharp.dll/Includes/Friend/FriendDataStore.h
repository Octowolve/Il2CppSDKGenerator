#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Friend {

class FriendDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Friend", "FriendDataStore"));
	}

	template <typename T = uintptr_t> T& mGuildMemberDS() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& FullFriendsIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FullMessagesIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& FullBlackIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& FullChatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& FullRecommendIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& NotificationIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& FullFriendsExpIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WrapperAllFriends() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WrapperGameFriends() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WrapperRelationFriends() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RecentMatchPlayers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& PlayerApplying() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint64_t>*> T& m_SendGoldFriendsID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> static T& ignoreStranger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> T& FriendsBadgeNumber() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mMessagesCache() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsPullOut() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& MessageNotifyTip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MessageBadgeNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRecommendFriends() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBlacksCache() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mMenuType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> static T& kMenuDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uint64_t> T& mMenuPlayerID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& ChatPlayerID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<uintptr_t>*>*> T& mChatCache() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBRRecentGamePlayers() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mPVPRecentGamePlayers() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mZombieRecentGamePlayers() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uint64_t>*> T& RecentAddList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& curFindOptionMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& curFindOptionLadder() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& InputValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& NtfFriendStateList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSendGoldFriendsID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSendGoldFriendID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullyUpdateFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWrappedAllFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsApplying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPlayerApplying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerApplying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlackFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BlackStranger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendBlackNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PartlyUpdateFriendState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PartlyUpdateFriendGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortFriendInfoContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PriorityOfState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareState_Room() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareLogoutTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareProfile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareNewChatTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareWrappedFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompaerWrappedRoomFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PriorityOfRoomFriendState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEncourageFriendInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEncouragePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortGameFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortRelationFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullyUpdateFriendsBadgeNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FullyUpdateMessages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFriendAddMessageNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseAllMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortmMessagesCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortMessages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNotExistMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRecommendFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareRecommendFriends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRecommendFriendAddFriendBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBlacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBlack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBlack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBlack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMenuCellTypeAtIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearChatNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRecentGamePlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRecentPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecentPlayerStateCompareWeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentGamePlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareBRRecentGamePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComparePVPRecentGamePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareZombieRecentGamePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareWithNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFriendStateSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FriendStateWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentFriendAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAddRecentFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRecentPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteLoginFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInviteJoinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetInviteTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnlineFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOnlineRecentPlayersNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsGameFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriendOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentMillis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNtfData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNtfFriendStateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNtfStateByFriendID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRecentPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyFriendItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}

	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9BD8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WrappedAllFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9C88))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WrappedGameFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9C90))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_WrappedRelationFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE6248))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RecentMatchPlayers() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9C98))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_SendGoldFriendsID() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9CA0))(this);
	}
	template <typename T = void> T SetSendGoldFriendsID(Il2CppList<uint64_t>* ulongList) {
		return ((T (*)(FriendDataStore*, Il2CppList<uint64_t>*))(Il2CppBase() + 0x3CE9CA8))(this, ulongList);
	}
	template <typename T = void> T AddSendGoldFriendID(uint64_t friendId) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CEA210))(this, friendId);
	}
	template <typename T = void> T MergedData() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE9DF4))(this);
	}
	template <typename T = void> T FullyUpdateFriends(int32_t pageIndex, Il2CppList<uintptr_t>* friends, uintptr_t friendType) {
		return ((T (*)(FriendDataStore*, int32_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3CEA598))(this, pageIndex, friends, friendType);
	}
	template <typename T = void> T ClearWrappedAllFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CEAF94))(this);
	}
	template <typename T = bool> T IsApplying(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CEB81C))(this, playerID);
	}
	template <typename T = void> T AddPlayerApplying(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CEB948))(this, playerID);
	}
	template <typename T = void> T ResetPlayerApplying() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CEBA78))(this);
	}
	template <typename T = uintptr_t> T GetFriend(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CEBB7C))(this, playerID);
	}
	template <typename T = void> T RemoveFriend(uint64_t playerID, bool deleteFromBlackList) {
		return ((T (*)(FriendDataStore*, uint64_t, bool))(Il2CppBase() + 0x3CEBD38))(this, playerID, deleteFromBlackList);
	}
	template <typename T = void> T BlackFriend(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CEC170))(this, res);
	}
	template <typename T = void> T BlackStranger(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CED0D0))(this, res);
	}
	template <typename T = void> T OnFriendBlackNotify(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CEDB7C))(this, res);
	}
	template <typename T = void> T PartlyUpdateFriendState(uintptr_t state) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CEDEB0))(this, state);
	}
	template <typename T = void> T PartlyUpdateFriendGuildInfo(uint64_t playerId, uint64_t guildId) {
		return ((T (*)(FriendDataStore*, uint64_t, uint64_t))(Il2CppBase() + 0x3CEEB58))(this, playerId, guildId);
	}
	template <typename T = void> T SortFriendInfoContainer(Il2CppList<uintptr_t>* FriendInfoContainers) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CEF010))(this, FriendInfoContainers);
	}
	template <typename T = int32_t> T PriorityOfState(int32_t state, uint64_t playerId, uintptr_t RoomDS) {
		return ((T (*)(FriendDataStore*, int32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3CEF174))(this, state, playerId, RoomDS);
	}
	template <typename T = int32_t> T CompareState(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEF290))(this, a, b);
	}
	template <typename T = int32_t> T CompareState_Room(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEF3F8))(this, a, b);
	}
	template <typename T = int32_t> T CompareLogoutTime(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEF5C0))(this, a, b);
	}
	template <typename T = int32_t> T CompareProfile(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEF778))(this, a, b);
	}
	template <typename T = int32_t> T CompareNewChatTimeStamp(uint32_t a, uint32_t b) {
		return ((T (*)(FriendDataStore*, uint32_t, uint32_t))(Il2CppBase() + 0x3CEF8D0))(this, a, b);
	}
	template <typename T = int32_t> T CompareFriend(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEF9CC))(this, a, b);
	}
	template <typename T = int32_t> T CompareWrappedFriend(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEFBCC))(this, a, b);
	}
	template <typename T = int32_t> T CompaerWrappedRoomFriend(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CEFCFC))(this, a, b);
	}
	template <typename T = int32_t> T PriorityOfRoomFriendState(uintptr_t playerState) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF01C0))(this, playerState);
	}
	template <typename T = uintptr_t> T GetEncourageFriendInfo() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF02C8))(this);
	}
	template <typename T = uintptr_t> T GetEncouragePlayerInfo() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF0904))(this);
	}
	template <typename T = int32_t> T CompareFunc(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF147C))(this, a, b);
	}
	template <typename T = void> T SortFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF07B8))(this);
	}
	template <typename T = void> T SortGameFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF15D4))(this);
	}
	template <typename T = void> T SortRelationFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF1720))(this);
	}
	template <typename T = void> T set_FriendsBadgeNumber(int32_t value) {
		return ((T (*)(FriendDataStore*, int32_t))(Il2CppBase() + 0x3CF186C))(this, value);
	}
	template <typename T = int32_t> T get_FriendsBadgeNumber() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF1874))(this);
	}
	template <typename T = void> T FullyUpdateFriendsBadgeNumber() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF187C))(this);
	}
	template <typename T = bool> T IsFriend(uint64_t playerid) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF1A1C))(this, playerid);
	}
	template <typename T = bool> T get_IsPullOut() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF1BE0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Messages() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF1BE8))(this);
	}
	template <typename T = void> T FullyUpdateMessages(Il2CppList<uintptr_t>* messages) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF1BF0))(this, messages);
	}
	template <typename T = void> T UpdateFriendAddMessageNotify(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF1E64))(this, res);
	}
	template <typename T = uintptr_t> T GetMessage(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF2E80))(this, playerID);
	}
	template <typename T = void> T AddMessage(uintptr_t message, uintptr_t* showTip) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3CF2C2C))(this, message, showTip);
	}
	template <typename T = void> T RemoveMessage(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF3044))(this, playerID);
	}
	template <typename T = void> T ResponseMessage(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF31F8))(this, res);
	}
	template <typename T = void> T ResponseAllMessage(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF38C4))(this, res);
	}
	template <typename T = void> T SortmMessagesCache() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF4240))(this);
	}
	template <typename T = void> T SortMessages() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF4458))(this);
	}
	template <typename T = void> T RemoveNotExistMessage(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF4670))(this, playerID);
	}
	template <typename T = void> T set_MessageNotifyTip(Il2CppString* value) {
		return ((T (*)(FriendDataStore*, Il2CppString*))(Il2CppBase() + 0x3CF490C))(this, value);
	}
	template <typename T = Il2CppString*> T get_MessageNotifyTip() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF4914))(this);
	}
	template <typename T = void> T set_MessageBadgeNumber(int32_t value) {
		return ((T (*)(FriendDataStore*, int32_t))(Il2CppBase() + 0x3CF1E5C))(this, value);
	}
	template <typename T = int32_t> T get_MessageBadgeNumber() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF303C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RecommendFriends() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF491C))(this);
	}
	template <typename T = void> T RefreshRecommendFriends(Il2CppList<uintptr_t>* recommendFriends) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF4924))(this, recommendFriends);
	}
	template <typename T = int32_t> T CompareRecommendFriends(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF4BE8))(this, a, b);
	}
	template <typename T = void> T RefreshRecommendFriendAddFriendBtnState(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF4FE4))(this, playerID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Blacks() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE09DC))(this);
	}
	template <typename T = void> T RefreshBlacks(Il2CppList<uintptr_t>* blacks) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF5488))(this, blacks);
	}
	template <typename T = uintptr_t> T GetBlack(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CED9C0))(this, playerID);
	}
	template <typename T = void> T AddBlack(uintptr_t black) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CECD5C))(this, black);
	}
	template <typename T = void> T RemoveBlack(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CECF1C))(this, playerID);
	}
	template <typename T = uintptr_t> T get_MenuType() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5618))(this);
	}
	template <typename T = uint64_t> T get_MenuPlayerID() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5620))(this);
	}
	template <typename T = void> T ConfigureMenu(uintptr_t menuType, uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uintptr_t, uint64_t))(Il2CppBase() + 0x3CF5628))(this, menuType, playerID);
	}
	template <typename T = int32_t> T get_MenuCellNumber() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5724))(this);
	}
	template <typename T = uintptr_t> T GetMenuCellTypeAtIndex(int32_t index) {
		return ((T (*)(FriendDataStore*, int32_t))(Il2CppBase() + 0x3CF5864))(this, index);
	}
	template <typename T = void> T set_ChatPlayerID(uint64_t value) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF5A4C))(this, value);
	}
	template <typename T = uint64_t> T get_ChatPlayerID() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CE8474))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChatList(uint64_t playerID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CE847C))(this, playerID);
	}
	template <typename T = void> T ClearChatNotify(uint64_t playerID, bool notify) {
		return ((T (*)(FriendDataStore*, uint64_t, bool))(Il2CppBase() + 0x3CE8644))(this, playerID, notify);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_BRRecentGamePlayers() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5A5C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PVPRecentGamePlayers() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5A64))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ZombieRecentGamePlayers() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF5A6C))(this);
	}
	template <typename T = void> T RefreshRecentGamePlayers(int32_t pageIndex, Il2CppList<uintptr_t>* recentGamePlayers, uintptr_t type) {
		return ((T (*)(FriendDataStore*, int32_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3CF5A74))(this, pageIndex, recentGamePlayers, type);
	}
	template <typename T = void> T RefreshRecentPlayers(Il2CppList<uintptr_t>* recentGamePlayers) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF5F14))(this, recentGamePlayers);
	}
	template <typename T = int32_t> T GetRecentPlayerStateCompareWeight(uintptr_t player) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF6330))(this, player);
	}
	template <typename T = void> T SetRecentGamePlayers(int32_t bageIndex, Il2CppList<uintptr_t>* mList, Il2CppList<uintptr_t>* recentList) {
		return ((T (*)(FriendDataStore*, int32_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF5D34))(this, bageIndex, mList, recentList);
	}
	template <typename T = int32_t> T CompareBRRecentGamePlayer(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF6470))(this, a, b);
	}
	template <typename T = int32_t> T ComparePVPRecentGamePlayer(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF6824))(this, a, b);
	}
	template <typename T = int32_t> T CompareZombieRecentGamePlayer(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF6CC4))(this, a, b);
	}
	template <typename T = int32_t> T CompareWithNull(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21DF0A8))(this, a, b);
	}
	template <typename T = int32_t> T CompareFriendStateSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF4E94))(this, a, b);
	}
	template <typename T = int32_t> T FriendStateWith(uintptr_t a, uintptr_t b, uintptr_t Estate) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF6FD8))(this, a, b, Estate);
	}
	template <typename T = void> T SetRecentFriendAdd(bool isAdd, uint64_t playerid) {
		return ((T (*)(FriendDataStore*, bool, uint64_t))(Il2CppBase() + 0x3CF71A0))(this, isAdd, playerid);
	}
	template <typename T = bool> T IsAddRecentFriend(uint64_t playerid) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF7424))(this, playerid);
	}
	template <typename T = bool> T IsRecentPlayer(uint64_t playerid) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF75E8))(this, playerid);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF77AC))(this);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF7884))(this);
	}
	template <typename T = void> T OnLocalChanged() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF79C4))(this);
	}
	template <typename T = void> T SetInviteLoginFlag(uint64_t playerId) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF7C84))(this, playerId);
	}
	template <typename T = void> T SetInviteJoinTime(uint64_t playerId) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF7E84))(this, playerId);
	}
	template <typename T = void> T ResetInviteTime(uintptr_t res) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CF8268))(this, res);
	}
	template <typename T = Il2CppString*> T GetOnlineFormat() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF8470))(this);
	}
	template <typename T = Il2CppString*> T GetOnlineRecentPlayersNum() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF86AC))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF88E8))(this);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF8AA4))(this);
	}
	template <typename T = bool> T IsGameFriend(uint64_t friendId) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CF8C24))(this, friendId);
	}
	template <typename T = bool> T IsFriendOnline() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF8DE8))(this);
	}
	template <typename T = int64_t> T GetCurrentMillis() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CEB258))(this);
	}
	template <typename T = void> T AddNtfData(uintptr_t stateInfo) {
		return ((T (*)(FriendDataStore*, uintptr_t))(Il2CppBase() + 0x3CEE884))(this, stateInfo);
	}
	template <typename T = void> T RefreshNtfFriendStateList(int64_t milluSecond) {
		return ((T (*)(FriendDataStore*, int64_t))(Il2CppBase() + 0x3CEB3E4))(this, milluSecond);
	}
	template <typename T = uintptr_t> T GetNtfStateByFriendID(uint64_t friendID) {
		return ((T (*)(FriendDataStore*, uint64_t))(Il2CppBase() + 0x3CEB5D8))(this, friendID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRecentPlayers() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF1340))(this);
	}
	template <typename T = void> T CopyFriendItems(Il2CppList<uintptr_t>* to, Il2CppList<uintptr_t>* from) {
		return ((T (*)(FriendDataStore*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CF8F64))(this, to, from);
	}
	template <typename T = int32_t> static T SortmMessagesCachem__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF9604))(0, a, b);
	}
	template <typename T = int32_t> static T SortMessagesm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF9690))(0, a, b);
	}
	template <typename T = int32_t> T RefreshRecentPlayersm__2(uintptr_t a, uintptr_t b) {
		return ((T (*)(FriendDataStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF9714))(this, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF97D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(FriendDataStore*))(Il2CppBase() + 0x3CF97DC))(this);
	}

};

}
