#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatInviteCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatInviteCell"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& JoinRoomContainer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& JoinGuildContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InviteNewbieContainer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ContentBG() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TimeWidget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& playerNameTable() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& JoinRoomBtn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& AvatarBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& MapName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& LevelRequire() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& PlayerNumOfRoom() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& TeamType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& InviteChannel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LadderContainter() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& MinLadderRequire() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& MinLadderRequireIcon() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& MaxLadderRequire() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& MaxLadderRequireIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RoomInfoTable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint64_t> T& guildID() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& GuildName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GuildContent() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& JoinGuildBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GuildIcon() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& QuickTeamInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint32_t> T& roomSvrAddr() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& roomID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& levelRestrict() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& modeID() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint32_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& worldTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uint32_t> T& guildTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isSender() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppString*> T& modeName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& playlistID() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uint32_t>*> T& playlistList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& brPlaylistId() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& InviteNewbieCode() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& InviteNewbieGoBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& InviteNewbieCodeStr() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uint64_t> T& invite_id() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& chatType() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& menuBarPlayerInfo() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& m_TimeLocalPos() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& m_ContentLocalPos() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& m_ChatCellQTCloseOffset() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& m_ChatCellQTOpenOffset() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& mTimeQTOpenOffset() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& mTimeQTClosedOffset() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& mTipOpenOffset() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& mTipCloseOffset() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& m_qtFilter() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& lastClickTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> static T& kLineCharaters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kLineHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinRoomBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinGuildBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteNewbieGoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureQuickTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureInviteNewbieInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleContentHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellHeightOf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSatisfyLevelRestrict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SatisfyPlayListInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLatestRoomInfoFromDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T get_QTFilter() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4E708))(this);
	}
	template <typename T = float> T get_TimeOffset() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4E858))(this);
	}
	template <typename T = float> T get_TextOffset() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4E8AC))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4E8FC))(this);
	}
	template <typename T = void> T OnJoinRoomBtnClick() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4EE2C))(this);
	}
	template <typename T = void> T OnJoinGuildBtnClick() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4F934))(this);
	}
	template <typename T = void> T OnInviteNewbieGoBtnClick() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4FAB4))(this);
	}
	template <typename T = void> T OnAvatarBtnClick() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4FC88))(this);
	}
	template <typename T = void> T ConfigureQuickTeam(uintptr_t mode, uintptr_t picInfo, uintptr_t mCutPanel, bool isFold) {
		return ((T (*)(ChatInviteCell*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D4FEFC))(this, mode, picInfo, mCutPanel, isFold);
	}
	template <typename T = void> T Configure(uintptr_t mode, uintptr_t picInfo, uintptr_t mCutPanel, bool bForceShowTime) {
		return ((T (*)(ChatInviteCell*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D42C38))(this, mode, picInfo, mCutPanel, bForceShowTime);
	}
	template <typename T = void> T ConfigureGuildInfo(uintptr_t mode, uintptr_t picInfo) {
		return ((T (*)(ChatInviteCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D50584))(this, mode, picInfo);
	}
	template <typename T = void> T ConfigureRoomInfo(uintptr_t mode, uintptr_t picInfo) {
		return ((T (*)(ChatInviteCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D502B0))(this, mode, picInfo);
	}
	template <typename T = void> T ConfigureInviteNewbieInfo(uintptr_t mode, uintptr_t picInfo) {
		return ((T (*)(ChatInviteCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D50864))(this, mode, picInfo);
	}
	template <typename T = Il2CppString*> T GetRoomInfo(uint32_t modeID, uint32_t roomType, uint32_t playerNum, uint32_t curPlayerNumInRoom, int32_t levelRestrict, int32_t rankRestrict, int32_t PVPRankLv, int32_t BRRankLv, uint32_t mapID, int32_t spvpPlaylistId, Il2CppList<int32_t>* mapIds, int32_t brPlaylistId, Il2CppList<uint32_t>* playlistList) {
		return ((T (*)(ChatInviteCell*, uint32_t, uint32_t, uint32_t, uint32_t, int32_t, int32_t, int32_t, int32_t, uint32_t, int32_t, Il2CppList<int32_t>*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x1D50A40))(this, modeID, roomType, playerNum, curPlayerNumInRoom, levelRestrict, rankRestrict, PVPRankLv, BRRankLv, mapID, spvpPlaylistId, mapIds, brPlaylistId, playlistList);
	}
	template <typename T = void> T SetRoomContent(Il2CppString* mode, Il2CppString* mapName, Il2CppString* levelRequire, Il2CppString* teamType, Il2CppString* minladderRequire, Il2CppString* minladderRequireIcon, Il2CppString* maxladderRequire, Il2CppString* maxladderRequireIcon) {
		return ((T (*)(ChatInviteCell*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D5358C))(this, mode, mapName, levelRequire, teamType, minladderRequire, minladderRequireIcon, maxladderRequire, maxladderRequireIcon);
	}
	template <typename T = float> static T SimpleContentHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D53B58))(0);
	}
	template <typename T = float> static T GetCellHeightOf(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D53C58))(0, mode);
	}
	template <typename T = bool> T OnSatisfyLevelRestrict(uintptr_t info) {
		return ((T (*)(ChatInviteCell*, uintptr_t))(Il2CppBase() + 0x1D4F700))(this, info);
	}
	template <typename T = void> T RefreshPlayList() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4F5C0))(this);
	}
	template <typename T = bool> T SatisfyPlayListInfo() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D53D94))(this);
	}
	template <typename T = uintptr_t> T GetLatestRoomInfoFromDic() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D4F444))(this);
	}
	template <typename T = Il2CppString*> T GetLevelString(int32_t levelRestrict) {
		return ((T (*)(ChatInviteCell*, int32_t))(Il2CppBase() + 0x1D53454))(this, levelRestrict);
	}
	template <typename T = bool> static T GetRoomInfom__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D540C8))(0, it);
	}
	template <typename T = bool> static T GetRoomInfom__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D5410C))(0, it);
	}
	template <typename T = bool> static T GetRoomInfom__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D54150))(0, it);
	}
	template <typename T = bool> static T GetRoomInfom__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D54194))(0, it);
	}
	template <typename T = bool> T SatisfyPlayListInfom__4(uintptr_t it) {
		return ((T (*)(ChatInviteCell*, uintptr_t))(Il2CppBase() + 0x1D541D8))(this, it);
	}
	template <typename T = bool> T SatisfyPlayListInfom__5(uintptr_t it) {
		return ((T (*)(ChatInviteCell*, uintptr_t))(Il2CppBase() + 0x1D5420C))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(ChatInviteCell*))(Il2CppBase() + 0x1D54240))(this);
	}

};

}
