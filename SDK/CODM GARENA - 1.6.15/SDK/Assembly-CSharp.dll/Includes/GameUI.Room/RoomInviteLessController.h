#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteLessController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteLessController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_CellListCtr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_AddFriendPopupCtr() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_IsPanelShowed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_FriendsCountThreshold() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsRecommendShowed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CELL_ITEM_WIDTH() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& CELL_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& RECOMMEND_NUM() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& SCROLLVIEW_PADDING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_FriendInfoContainer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_GuildMemberDS() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_CacheFriend() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> static T& REDDOT_STRING() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExpandBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD2C0))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD370))(this);
	}
	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD420))(this);
	}
	template <typename T = uintptr_t> T get_m_pf() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD4D0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD604))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DD6A8))(this);
	}
	template <typename T = void> T ModifyScrollView(uintptr_t message) {
		return ((T (*)(RoomInviteLessController*, uintptr_t))(Il2CppBase() + 0x20DD894))(this, message);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DDEE0))(this);
	}
	template <typename T = void> T CheckRedDot() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DDFA8))(this);
	}
	template <typename T = void> T RefreshList(bool reset) {
		return ((T (*)(RoomInviteLessController*, bool))(Il2CppBase() + 0x20DE1F0))(this, reset);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DEE6C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DF078))(this);
	}
	template <typename T = void> T OnExpandBtnClick() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20DF20C))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomInviteLessController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x20DF7BC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RoomInviteLessController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x20DF9E8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RoomInviteLessController*, uintptr_t, int32_t))(Il2CppBase() + 0x20DFF98))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20E004C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20E0054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20E005C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20E0064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInviteLessController*))(Il2CppBase() + 0x20E006C))(this);
	}

};

}
