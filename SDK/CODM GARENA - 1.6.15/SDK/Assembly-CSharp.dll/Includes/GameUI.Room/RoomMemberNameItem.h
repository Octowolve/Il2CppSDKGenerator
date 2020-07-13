#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMemberNameItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMemberNameItem"));
	}

	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SpriteLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpriteNameBg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpriteRankIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ContainerVoice() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelLadderState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ObjDownloadState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ObjDownloaded() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LabelDownloaded() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ReadyState() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SpriteNotReady() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RoomOwner() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& MenuRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& MenuGrid() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& MenuBg() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BtnAddFriend() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& BtnPersonalInfo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& BtnBlockVoice() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& BtnKickOut() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BtnChangeLeader() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& BtnLeaveTeam() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& SpriteSimulator() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& SpriteGamePad() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BtnCollider() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& VoiceSpeakingObj() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& VoiceSlientObj() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& SelfVoiceObj() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& VoiceBtnLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelVoiceHighlight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ColorLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ColorNormal() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BindTransform() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& mScreenScale() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> static T& MIN_NAME_BG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CachePlayerInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_EventHandler() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& callingCardTemplate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_SquadTeamCamera() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_ShowLadder() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isLeader() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = float> T& mUpdateVoiceTimer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector3> T& mShowLadderPos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& mNotShowLadderPos() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftTeamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKickOutBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankLeaderBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnAddFriendClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnBlockVoiceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnColliderClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDownloadMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelfVoiceStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F327C))(this);
	}
	template <typename T = void> T OnLeftTeamBtnClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F380C))(this);
	}
	template <typename T = void> T OnKickOutBtnClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F3968))(this);
	}
	template <typename T = void> T OnRankLeaderBtnClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F3AC4))(this);
	}
	template <typename T = void> T OnViewInfoBtnClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F3C20))(this);
	}
	template <typename T = void> T OnBtnAddFriendClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F3D7C))(this);
	}
	template <typename T = void> T OnBtnBlockVoiceClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F3ED8))(this);
	}
	template <typename T = void> T OnBtnColliderClick() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F4034))(this);
	}
	template <typename T = void> T SetContent(uintptr_t info, uintptr_t LadderTypeShow, uintptr_t eventHandler) {
		return ((T (*)(RoomMemberNameItem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x20F4234))(this, info, LadderTypeShow, eventHandler);
	}
	template <typename T = void> T UpdateCallingCardInfo() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F57F0))(this);
	}
	template <typename T = void> T UpdateDownloadMapState() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F532C))(this);
	}
	template <typename T = void> T SetBindTransform(uintptr_t bind, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberNameItem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20F599C))(this, bind, squadTeamCamera);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F5B00))(this);
	}
	template <typename T = void> T AdaptPos() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F6360))(this);
	}
	template <typename T = void> T UpdateVoiceStatus(Il2CppString* roomName) {
		return ((T (*)(RoomMemberNameItem*, Il2CppString*))(Il2CppBase() + 0x20F5FEC))(this, roomName);
	}
	template <typename T = uintptr_t> T GetSelfVoiceStatus() {
		return ((T (*)(RoomMemberNameItem*))(Il2CppBase() + 0x20F66F8))(this);
	}
	template <typename T = void> T ShowMenu(bool bShow) {
		return ((T (*)(RoomMemberNameItem*, bool))(Il2CppBase() + 0x20F4C00))(this, bShow);
	}

};

}
