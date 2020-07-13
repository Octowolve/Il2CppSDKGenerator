#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomAddFriendPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomAddFriendPopupController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Source() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_FriendDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_BindFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddFriendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_FriendDS() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE0E68))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE0F18))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE0FC8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE106C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE1178))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE1318))(this);
	}
	template <typename T = void> T BindFriend(uintptr_t friend, uintptr_t source) {
		return ((T (*)(RoomAddFriendPopupController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CE1494))(this, friend, source);
	}
	template <typename T = void> T OnCheckInfoBtnClick() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE1B88))(this);
	}
	template <typename T = void> T OnAddFriendBtnClick() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE1D30))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE2370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE2378))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE2380))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomAddFriendPopupController*))(Il2CppBase() + 0x2CE2388))(this);
	}

};

}
