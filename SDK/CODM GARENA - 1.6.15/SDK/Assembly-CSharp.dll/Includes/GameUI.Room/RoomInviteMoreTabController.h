#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteMoreTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteMoreTabController"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GuildMemberDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& reGetRecommend() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = int32_t> T& m_FriendsCountThreshold() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RecentMatchPlayers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OnlineData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OfflineData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RecommendData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& TITLE_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RECOMMEND_NUM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& mAllDataDuplicatedID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshOnTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllRecommendSent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoreRecommendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainerNoClanShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainerNoMemberShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainerNoRecentShouldShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFriendView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareFriendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRecommendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRecentPlayerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareGuildData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFriendInvited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendInviteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomFriendGroupTitleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinClanBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRecentPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E3EB0))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E3F60))(this);
	}
	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E4010))(this);
	}
	template <typename T = bool> T get_IsRecommendShouldShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E40C0))(this);
	}
	template <typename T = bool> T get_HasClan() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E41E4))(this);
	}
	template <typename T = bool> T get_HasClanMember() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E4218))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E42D8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E437C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E4510))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E47D0))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E49A8))(this);
	}
	template <typename T = void> T RefreshOnTabShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E4EF4))(this);
	}
	template <typename T = void> T CheckAllRecommendSent() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E546C))(this);
	}
	template <typename T = void> T OnMoreRecommendBtnClick() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E5614))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomInviteMoreTabController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x20E5910))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T IsContainerNoClanShouldShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E5D80))(this);
	}
	template <typename T = bool> T IsContainerNoMemberShouldShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E5E38))(this);
	}
	template <typename T = bool> T IsContainerNoRecentShouldShow() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E5F08))(this);
	}
	template <typename T = void> T RefreshFriendView(bool showRecommend, bool resetScroll) {
		return ((T (*)(RoomInviteMoreTabController*, bool, bool))(Il2CppBase() + 0x20E504C))(this, showRecommend, resetScroll);
	}
	template <typename T = void> T PrepareData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E5FFC))(this);
	}
	template <typename T = void> T PrepareAllData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E60FC))(this);
	}
	template <typename T = void> T PrepareFriendData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E75B0))(this);
	}
	template <typename T = void> T PrepareRecommendData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E71E8))(this);
	}
	template <typename T = void> T PrepareRecentPlayerData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E81F8))(this);
	}
	template <typename T = void> T PrepareGuildData() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E7C08))(this);
	}
	template <typename T = void> T OnNotifyFriendInvited(uintptr_t message) {
		return ((T (*)(RoomInviteMoreTabController*, uintptr_t))(Il2CppBase() + 0x20E894C))(this, message);
	}
	template <typename T = void> T OnFriendInviteResponse(uintptr_t message) {
		return ((T (*)(RoomInviteMoreTabController*, uintptr_t))(Il2CppBase() + 0x20E8F84))(this, message);
	}
	template <typename T = void> T OnRoomFriendGroupTitleClick(uintptr_t message) {
		return ((T (*)(RoomInviteMoreTabController*, uintptr_t))(Il2CppBase() + 0x20E91B8))(this, message);
	}
	template <typename T = void> T OnJoinClanBtnClick() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E9258))(this);
	}
	template <typename T = int32_t> T CompareFunc(uintptr_t a, uintptr_t b) {
		return ((T (*)(RoomInviteMoreTabController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20E9658))(this, a, b);
	}
	template <typename T = bool> T IsRecentPlayer(uint64_t playerid) {
		return ((T (*)(RoomInviteMoreTabController*, uint64_t))(Il2CppBase() + 0x20E8DB4))(this, playerid);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E984C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E9854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E985C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInviteMoreTabController*))(Il2CppBase() + 0x20E9864))(this);
	}

};

}
