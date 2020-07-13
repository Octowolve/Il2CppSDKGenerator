#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomRecentPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomRecentPlayerController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RoomPlayerCellListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IUITabController_WillTabShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRecentMatchPlayerInvited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecentMatchPlayerInviteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FC640))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FC6E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FC834))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FC9DC))(this);
	}
	template <typename T = void> T GameUI_IUITabController_WillTabShow() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FCACC))(this);
	}
	template <typename T = void> T OnNotifyRecentMatchPlayerInvited(uintptr_t message) {
		return ((T (*)(RoomRecentPlayerController*, uintptr_t))(Il2CppBase() + 0x20FCE98))(this, message);
	}
	template <typename T = void> T OnRecentMatchPlayerInviteResponse(uintptr_t message) {
		return ((T (*)(RoomRecentPlayerController*, uintptr_t))(Il2CppBase() + 0x20FD0B8))(this, message);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomRecentPlayerController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x20FD2EC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RoomRecentPlayerController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x20FD640))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RoomRecentPlayerController*, uintptr_t, int32_t))(Il2CppBase() + 0x20FD708))(this, list, userContext);
	}
	template <typename T = void> T WillTabShowm__0() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FD7BC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FDCC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FDCC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FDCD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomRecentPlayerController*))(Il2CppBase() + 0x20FDCD8))(this);
	}

};

}
