#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomClanController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomClanController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RoomClanCellListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_GuildMemberDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyClamMemberInvited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinClanBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_GuildMemberDS() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFAFEC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFB09C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFB1A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFB24C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFB45C))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFB600))(this);
	}
	template <typename T = void> T OnNotifyClamMemberInvited(uintptr_t message) {
		return ((T (*)(RoomClanController*, uintptr_t))(Il2CppBase() + 0x2CFB9E0))(this, message);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomClanController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2CFBE58))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnJoinClanBtnClick() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFC210))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RoomClanController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2CFC610))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RoomClanController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CFC6D8))(this, list, userContext);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFC78C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFCD08))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFCD10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFCD18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomClanController*))(Il2CppBase() + 0x2CFCD20))(this);
	}

};

}
