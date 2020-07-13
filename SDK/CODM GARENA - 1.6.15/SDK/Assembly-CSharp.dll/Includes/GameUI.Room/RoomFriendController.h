#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomFriendController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomFriendController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& reGetRecommend() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& m_IsRecommendShowed() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = int32_t> T& m_FriendsCountThreshold() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OnlineData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OfflineData() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RecommendData() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFriendView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareFriendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRecommendData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFriendInvited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendInviteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomFriendGroupTitleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CAD64))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CAE14))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CAEC4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CAF68))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CB118))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CB348))(this);
	}
	template <typename T = void> T WillTabShow() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CB48C))(this);
	}
	template <typename T = void> T RefreshOnTabShow() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CB9D8))(this);
	}
	template <typename T = void> T CheckAllRecommendSent() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CBD1C))(this);
	}
	template <typename T = void> T OnMoreRecommendBtnClick() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CBEC4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomFriendController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x20CC1C0))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T RefreshFriendView(bool showRecommend, bool resetScroll) {
		return ((T (*)(RoomFriendController*, bool, bool))(Il2CppBase() + 0x20CBB78))(this, showRecommend, resetScroll);
	}
	template <typename T = void> T PrepareData() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CC6C4))(this);
	}
	template <typename T = void> T PrepareFriendData() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CC770))(this);
	}
	template <typename T = void> T PrepareRecommendData() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CCD0C))(this);
	}
	template <typename T = void> T OnNotifyFriendInvited(uintptr_t message) {
		return ((T (*)(RoomFriendController*, uintptr_t))(Il2CppBase() + 0x20CD0D4))(this, message);
	}
	template <typename T = void> T OnFriendInviteResponse(uintptr_t message) {
		return ((T (*)(RoomFriendController*, uintptr_t))(Il2CppBase() + 0x20CD388))(this, message);
	}
	template <typename T = void> T OnRoomFriendGroupTitleClick(uintptr_t message) {
		return ((T (*)(RoomFriendController*, uintptr_t))(Il2CppBase() + 0x20CD5BC))(this, message);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CD65C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CD664))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CD66C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomFriendController*))(Il2CppBase() + 0x20CD674))(this);
	}

};

}
