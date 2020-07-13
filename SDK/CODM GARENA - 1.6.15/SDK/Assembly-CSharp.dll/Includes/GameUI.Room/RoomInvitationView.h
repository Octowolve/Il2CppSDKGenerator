#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInvitationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInvitationView"));
	}

	template <typename T = uintptr_t> T& labelTitle1() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& playerFrame() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WidgetPlayerFrame() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnTemplateYes() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& TableDisplay() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContainerBeInvited() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& WidgetRoomInfoMulti() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& WidgetPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpriteModeCategory() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LabelModeCategory() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SpriteModeIcon() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& LabelMode() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& LabelMap() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& SpriteMatchTeamType() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& LabelMatchTeamTypePPMode() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& LabelPlayerNum() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& LabelInviteTip() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelApplyTip() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelInviteSource() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& BtnIsReceiveFiveMinutes() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SpriteNotReceive() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& LabelNotReceive() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& PlaylistTemplate() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& GridPlaylist() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& SpriteModeCategory_Multi() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& LabelModeCategory_Multi() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& LabelPlayerNum_Multi() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& SpriteBg_Multi() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SpriteFrame() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_IsReceiveFiveMinutes() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = int32_t> T& m_MaxShowCount() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInvitationContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetZombieInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReceiveFiveMinutes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNotReceiveFiveMinutes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsReceiveFiveMinutes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchTeamTypeAndPPModeDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchTeamTypeSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInviteSourceDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMultiPlaylistShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMultiPlaylistShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigurePlaylistList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsReceiveFiveMinutes() {
		return ((T (*)(RoomInvitationView*))(Il2CppBase() + 0x20D335C))(this);
	}
	template <typename T = void> T RefreshInvitationContent(uintptr_t invitation) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D3B28))(this, invitation);
	}
	template <typename T = void> T SetBrInfo(uintptr_t invitation) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D5158))(this, invitation);
	}
	template <typename T = void> T SetMpInfo(uintptr_t invitation) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D438C))(this, invitation);
	}
	template <typename T = void> T SetZombieInfo(uintptr_t invitation) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D4D44))(this, invitation);
	}
	template <typename T = void> T SetReceiveFiveMinutes() {
		return ((T (*)(RoomInvitationView*))(Il2CppBase() + 0x20D38BC))(this);
	}
	template <typename T = void> T SetNotReceiveFiveMinutes() {
		return ((T (*)(RoomInvitationView*))(Il2CppBase() + 0x20D3810))(this);
	}
	template <typename T = void> T SetIsReceiveFiveMinutes() {
		return ((T (*)(RoomInvitationView*))(Il2CppBase() + 0x20D5F64))(this);
	}
	template <typename T = Il2CppString*> T GetMatchTeamTypeAndPPModeDesc(uintptr_t matchType, uintptr_t ppMode) {
		return ((T (*)(RoomInvitationView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20D5978))(this, matchType, ppMode);
	}
	template <typename T = Il2CppString*> T GetMatchTeamTypeSpriteName(uintptr_t matchType) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D5B8C))(this, matchType);
	}
	template <typename T = Il2CppString*> T GetInviteSourceDesc(uintptr_t inviteSource) {
		return ((T (*)(RoomInvitationView*, uintptr_t))(Il2CppBase() + 0x20D54DC))(this, inviteSource);
	}
	template <typename T = void> T ResetMultiPlaylistShow() {
		return ((T (*)(RoomInvitationView*))(Il2CppBase() + 0x20D5650))(this);
	}
	template <typename T = void> T ConfigureMultiPlaylistShow(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(RoomInvitationView*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x20D5CE8))(this, PlaylistList);
	}
	template <typename T = void> T ConfigurePlaylistList(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(RoomInvitationView*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x20D605C))(this, PlaylistList);
	}

};

}
