#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInviteeCellController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInviteeCellController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Friend() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHeadIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DB2F8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DB544))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DB5E8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DB788))(this);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DB904))(this);
	}
	template <typename T = void> T OnHeadIconClick() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DBF6C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(RoomInviteeCellController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x20DC144))(this, list, index, dataObj);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DC2DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DC2E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DC2EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInviteeCellController*))(Il2CppBase() + 0x20DC2F4))(this);
	}

};

}
