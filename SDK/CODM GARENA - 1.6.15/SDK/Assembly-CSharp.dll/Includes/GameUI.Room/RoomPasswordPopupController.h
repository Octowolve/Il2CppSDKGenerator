#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomPasswordPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomPasswordPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& roomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& m_SvrAddress() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancleButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnterRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FA874))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FA918))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FAA68))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FAC60))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FADF4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB114))(this);
	}
	template <typename T = void> T OnCancleButtonClick() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB1E0))(this);
	}
	template <typename T = void> T OnConfirmButtonClick() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB294))(this);
	}
	template <typename T = void> T GameEngine_DataStoreSubscriber_NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(RoomPasswordPopupController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x20FB5FC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T SetEnterRoomInfo(uint32_t roomId, uint32_t roomSvrAdd) {
		return ((T (*)(RoomPasswordPopupController*, uint32_t, uint32_t))(Il2CppBase() + 0x20FB834))(this, roomId, roomSvrAdd);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB8F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB900))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB908))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB910))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB918))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomPasswordPopupController*))(Il2CppBase() + 0x20FB920))(this);
	}

};

}
