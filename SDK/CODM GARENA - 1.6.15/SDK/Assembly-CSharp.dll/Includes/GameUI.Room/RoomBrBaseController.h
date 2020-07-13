#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBrBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBrBaseController"));
	}

	template <typename T = uintptr_t> T& m_BrBaseView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_BasePlaylistCtr() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_playlistBubble() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_BrModeMapDS() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_LocalPlayerDS() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomDataStore_Virtual() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBubble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchServiceList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRoomSettingSameWithBubbleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaylistInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamTypeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamTypeSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPPModeStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBubbleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RunCloseSpvpPlaylistAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_BRModeMapDS() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF0FB0))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1060))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1110))(this);
	}
	template <typename T = uintptr_t> T get_LocalPlayerDS() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF11C0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1270))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1448))(this);
	}
	template <typename T = void> T HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1524))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF15C8))(this);
	}
	template <typename T = void> T HidePlaylist() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1684))(this);
	}
	template <typename T = void> T RefreshBubble() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1760))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetMatchServiceList() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1D28))(this);
	}
	template <typename T = bool> T IsRoomSettingSameWithBubbleInfo() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1C50))(this);
	}
	template <typename T = void> T SetPlaylistInfo() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF1E04))(this);
	}
	template <typename T = Il2CppString*> T GetTeamTypeStr(int32_t matchType) {
		return ((T (*)(RoomBrBaseController*, int32_t))(Il2CppBase() + 0x2CF237C))(this, matchType);
	}
	template <typename T = Il2CppString*> T GetTeamTypeSpriteName(int32_t matchType) {
		return ((T (*)(RoomBrBaseController*, int32_t))(Il2CppBase() + 0x2CF257C))(this, matchType);
	}
	template <typename T = Il2CppString*> T GetPPModeStr(uintptr_t ppmode) {
		return ((T (*)(RoomBrBaseController*, uintptr_t))(Il2CppBase() + 0x2CF2490))(this, ppmode);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF267C))(this);
	}
	template <typename T = void> T OnBtnBubbleClick() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF2AB0))(this);
	}
	template <typename T = void> T RunCloseSpvpPlaylistAnimator() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF3C6C))(this);
	}
	template <typename T = void> T RefreshBottomRight() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF3D40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF447C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF4484))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomDataStore_Virtual() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF4488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF448C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HidePlaylist() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF4494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshBubble() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF4498))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlaylistInfo() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF449C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlaylistClick() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF44A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnBubbleClick() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF44A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RunCloseSpvpPlaylistAnimator() {
		return ((T (*)(RoomBrBaseController*))(Il2CppBase() + 0x2CF44A8))(this);
	}

};

}
