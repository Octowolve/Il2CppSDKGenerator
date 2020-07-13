#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatQuickTeamView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatQuickTeamView"));
	}

	template <typename T = uintptr_t> T& modeBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& modeLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& modelSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& modeBtnSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& modeBgSprite() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& modeMask() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& modeList() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& mModeCellRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& mModeCellUIGrid() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& gameTypeContainer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& gameTypeBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& gameTypeLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& gameTypeSprite() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& gameTypeBtnSprite() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& gameTypeMask() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& gameTypeList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& mGameTypeCellRoot() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& GameTypeScrollView() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& mGameTypeCellUIGrid() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& rankContainer() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& rankBtnAdd() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& rankBtnMinus() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& rankLabel() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& rankSprite() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& minRankSprite() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& minRankLabel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& RankToSprite() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& maxRankSprite() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& maxRankLabel() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& levelContainer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& minusBtn() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& addBtn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& levelTitle() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& levelShowLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& isRoundRestrict() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& playerNumContainer() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& playerNumList() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& playerNumMask() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& playerNumLabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& playerNumSprite() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& playerNumSelectBtn() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& playerNumSelectSprite() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& playerNumGrid() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& warZoneChannel() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& guildChannel() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& guildLabel() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& noGuild() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& sendBtn() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& InivteCDRoot() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& InviteCDProgressBar() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& InviteCDCountDown() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& guildInviteCDTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& HidePopupListBtn() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& MicrophoneRoot() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& MicrophoneToggle() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& FeatureOnlyToggle() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& FeaturesRoot() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& FeatureCells() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& LanguageLabel() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& cellHeight() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVE_SV_NEW_ModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVERaidModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVERaidEasyModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVEEndlessModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPMatchModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPRankModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPVPCreateRoomUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRMatchModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRRankModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBRCreateRoomModeUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FirstSetModeSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeBgSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerNumToggleUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaylistUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankCapUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevelCapUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChannelUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustRankLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRangeRankLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(ChatQuickTeamView*))(Il2CppBase() + 0x39FBAC4))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ChatQuickTeamView*))(Il2CppBase() + 0x39FBACC))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ChatQuickTeamView*, float))(Il2CppBase() + 0x39FBAD4))(this, dt);
	}
	template <typename T = void> T SetPVE_SV_NEW_ModeUI(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FBC00))(this, curInfo);
	}
	template <typename T = void> T SetPVEModeUI(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FCA14))(this, curInfo);
	}
	template <typename T = void> T SetPVERaidModeUI(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FCE38))(this, curInfo);
	}
	template <typename T = void> T SetPVERaidEasyModeUI(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FD25C))(this, curInfo);
	}
	template <typename T = void> T SetPVEEndlessModeUI(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FD680))(this, curInfo);
	}
	template <typename T = void> T SetPVPMatchModeUI(Il2CppString* playlistName, Il2CppString* playlistSprite, int32_t playerNum, uint32_t levelRestrict, int32_t channel) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, uint32_t, int32_t))(Il2CppBase() + 0x39FD978))(this, playlistName, playlistSprite, playerNum, levelRestrict, channel);
	}
	template <typename T = void> T SetPVPRankModeUI(Il2CppString* gameTypeName, Il2CppString* playlistSprite, int32_t playerNum, Il2CppString* rankCap, int32_t channel, Il2CppString* rankSpriteName) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x39FDCA0))(this, gameTypeName, playlistSprite, playerNum, rankCap, channel, rankSpriteName);
	}
	template <typename T = void> T SetPVPCreateRoomUI(Il2CppString* playlistName, Il2CppString* playlistSprite, int32_t playerNum, uint32_t levelRestrict, int32_t channel) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, uint32_t, int32_t))(Il2CppBase() + 0x39FDF4C))(this, playlistName, playlistSprite, playerNum, levelRestrict, channel);
	}
	template <typename T = void> T SetBRMatchModeUI(Il2CppString* playlistName, Il2CppString* playlistSprite, int32_t playerNum, Il2CppString* rankCap, int32_t channel, Il2CppString* rankCapSprite) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x39FE258))(this, playlistName, playlistSprite, playerNum, rankCap, channel, rankCapSprite);
	}
	template <typename T = void> T SetBRRankModeUI(Il2CppString* playlistName, Il2CppString* playlistSprite, int32_t playerNum, Il2CppString* rankCap, int32_t channel, Il2CppString* rankCapSprite) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x39FE59C))(this, playlistName, playlistSprite, playerNum, rankCap, channel, rankCapSprite);
	}
	template <typename T = void> T SetBRCreateRoomModeUI(Il2CppString* playlistName, Il2CppString* playlistSprite, int32_t playerNum, Il2CppString* rankCap, int32_t channel, Il2CppString* rankCapSprite) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x39FE8E0))(this, playlistName, playlistSprite, playerNum, rankCap, channel, rankCapSprite);
	}
	template <typename T = void> T FirstSetModeSprite(Il2CppString* modeSpriteName) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*))(Il2CppBase() + 0x39FEC44))(this, modeSpriteName);
	}
	template <typename T = void> T SetModeBgSprite(uintptr_t type) {
		return ((T (*)(ChatQuickTeamView*, uintptr_t))(Il2CppBase() + 0x39FED60))(this, type);
	}
	template <typename T = void> T SetPlayerNumToggleUI(bool show, Il2CppVector3 location, int32_t num, bool isBR) {
		return ((T (*)(ChatQuickTeamView*, bool, Il2CppVector3, int32_t, bool))(Il2CppBase() + 0x39FC310))(this, show, location, num, isBR);
	}
	template <typename T = void> T SetPlaylistUI(bool show, Il2CppString* name, Il2CppString* spriteName) {
		return ((T (*)(ChatQuickTeamView*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39FC024))(this, show, name, spriteName);
	}
	template <typename T = void> T SetRankCapUI(bool show, bool isLimit, Il2CppVector3 location, Il2CppString* rank, Il2CppString* rankSpriteName) {
		return ((T (*)(ChatQuickTeamView*, bool, bool, Il2CppVector3, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39FC1A4))(this, show, isLimit, location, rank, rankSpriteName);
	}
	template <typename T = void> T SetLevelCapUI(bool show, Il2CppVector3 location, uint32_t level) {
		return ((T (*)(ChatQuickTeamView*, bool, Il2CppVector3, uint32_t))(Il2CppBase() + 0x39FC734))(this, show, location, level);
	}
	template <typename T = void> T SetChannelUI(int32_t channel) {
		return ((T (*)(ChatQuickTeamView*, int32_t))(Il2CppBase() + 0x39FC880))(this, channel);
	}
	template <typename T = void> T AdjustLevel(int32_t level) {
		return ((T (*)(ChatQuickTeamView*, int32_t))(Il2CppBase() + 0x39FEF20))(this, level);
	}
	template <typename T = void> T AdjustRankLevel(Il2CppString* rankLevel, Il2CppString* rankSpriteName) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39FF0B4))(this, rankLevel, rankSpriteName);
	}
	template <typename T = void> T SetRangeRankLevel(Il2CppString* minRankLevel, Il2CppString* minSpriteName, Il2CppString* maxRankLevel, Il2CppString* maxRankSpriteName) {
		return ((T (*)(ChatQuickTeamView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39FF1D4))(this, minRankLevel, minSpriteName, maxRankLevel, maxRankSpriteName);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ChatQuickTeamView*, float))(Il2CppBase() + 0x39FF700))(this, P0);
	}

};

}
