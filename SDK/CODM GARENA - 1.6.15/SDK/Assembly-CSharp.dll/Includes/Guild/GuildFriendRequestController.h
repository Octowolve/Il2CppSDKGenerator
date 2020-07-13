#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildFriendRequestController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildFriendRequestController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_EasyListController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_gfq_dataStore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_friend_dataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendRequestResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBB1AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBB250))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(GuildFriendRequestController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BBBE30))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GuildFriendRequestController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3BBBEE4))(this, list, controller, index);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBBFAC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBC200))(this);
	}
	template <typename T = void> T OnFriendRequestResponse(uintptr_t Msg) {
		return ((T (*)(GuildFriendRequestController*, uintptr_t))(Il2CppBase() + 0x3BBC38C))(this, Msg);
	}
	template <typename T = void> T UpdateRemainRequest(bool bInviteSuccess) {
		return ((T (*)(GuildFriendRequestController*, bool))(Il2CppBase() + 0x3BBCB10))(this, bInviteSuccess);
	}
	template <typename T = void> T HideView(uintptr_t Msg) {
		return ((T (*)(GuildFriendRequestController*, uintptr_t))(Il2CppBase() + 0x3BBCEA4))(this, Msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildFriendRequestController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BBCF60))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBD1BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBD1C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBD1CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildFriendRequestController*))(Il2CppBase() + 0x3BBD1D4))(this);
	}

};

}
