#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInvitationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInvitationController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CurrentInvitation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_TLogHandler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_AutoDuration() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> static T& DEFAULT_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& mRealClose() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAcceptClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnIsReceiveFiveMinutes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCurrentInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryCloseCurrentInvitation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D1F94))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D2044))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D20E8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D223C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D24B8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D26A0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D2954))(this);
	}
	template <typename T = void> T OnBtnAcceptClick() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D2A30))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D3364))(this);
	}
	template <typename T = void> T OnBtnIsReceiveFiveMinutes() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D36EC))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(RoomInvitationController*, uintptr_t))(Il2CppBase() + 0x20D3968))(this, closeType);
	}
	template <typename T = void> T ConfigureCurrentInvitation() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D2778))(this);
	}
	template <typename T = void> T OnNextInvitation() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D3A34))(this);
	}
	template <typename T = void> T TryCloseCurrentInvitation(uintptr_t msg) {
		return ((T (*)(RoomInvitationController*, uintptr_t))(Il2CppBase() + 0x20D40E4))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(RoomInvitationController*))(Il2CppBase() + 0x20D42D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(RoomInvitationController*, uintptr_t))(Il2CppBase() + 0x20D42D8))(this, P0);
	}

};

}
