#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieSingleBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieSingleBaseController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_SquadAvatarCtr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Camera() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_LobbySceneRoot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LoadoutDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnModeDescClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnLoadoutClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAvatarZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChatBroadCast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_LoadoutDS() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E18C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x4058664))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x4058C00))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x4059030))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x4059368))(this);
	}
	template <typename T = void> T OnBtnModeDescClick() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E358))(this);
	}
	template <typename T = void> T OnBtnLoadoutClick() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E4D4))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405C54C))(this);
	}
	template <typename T = void> T SwitchToAvatarZombie() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405CA4C))(this);
	}
	template <typename T = void> T ShowChatBroadCast() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E5E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E5EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieSingleBaseController*))(Il2CppBase() + 0x405E5F4))(this);
	}

};

}
