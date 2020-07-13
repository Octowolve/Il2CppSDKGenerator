#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomHangUpView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomHangUpView"));
	}

	template <typename T = uintptr_t> T& RootHangUp() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TableHangUp() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RootHangUpBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnLobbyChange() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RootRoomInfo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& Label1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Label2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BtnCancelMatch() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteTeamLeaderTip1() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpriteTeamLeaderTip2() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_bInRoom() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualUnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnHangUpClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCancelMatchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDA60))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDB10))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDBC0))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDC70))(this);
	}
	template <typename T = void> T ManualRegisterDelegates() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDD20))(this);
	}
	template <typename T = void> T ManualUnRegisterDelegates() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDE74))(this);
	}
	template <typename T = void> T OnBtnHangUpClick() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CDFB0))(this);
	}
	template <typename T = void> T OnBtnCancelMatchClick() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CE48C))(this);
	}
	template <typename T = void> T ConfigureStyle(bool bInRoom) {
		return ((T (*)(RoomHangUpView*, bool))(Il2CppBase() + 0x20CE588))(this, bInRoom);
	}
	template <typename T = void> T RefreshRoomInfo() {
		return ((T (*)(RoomHangUpView*))(Il2CppBase() + 0x20CE660))(this);
	}

};

}
