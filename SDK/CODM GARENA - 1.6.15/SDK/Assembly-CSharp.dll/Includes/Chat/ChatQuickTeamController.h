#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatQuickTeamController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatQuickTeamController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mChatDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mRoomDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& quickTeamModeList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allCnModeList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allEnModelist() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& spvpModeList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pveModeList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& brModeList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mapCellList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& modeCellCount() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uint32_t> T& pveEndlessMaxRound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& minRankLevel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& maxRankLevel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& minLevel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& maxLevel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& isAddBtnPress() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& isSubBtnPress() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = float> T& AddBtnPressTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& SubBtnPressTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& FromLobby() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> static T& CanSendGuildTeamInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& guildLocalStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& sendCDDeltaTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_CacheRoomParam() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mETRTList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& bIsFromNewInviteTeamBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckModeAvailableInLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeHeightAvailableInLadder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomTicketSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayerNumCells() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpriteNameByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModeCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlaylistCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerNumCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameTypeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerNumSelectBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOtherPulldownMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHidePopupListBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPulldonwMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankLevelAddBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRankLevelMinusBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxMinRankLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustRankLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelAddBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelMinusBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBtnLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubBtnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubBtnLongPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRangeRankLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxMinLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChannelChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSendBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshInviteCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPVERoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPVPRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsUnLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModeData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModeAvailable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlaylist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleFeatureOnly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleMicrophone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFeatureOnlyState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsMpFeatureRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsBrFeatureRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFromNewInviteTeamBtnFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogCheckWhenSendInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D68D38))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D68DDC))(this);
	}
	template <typename T = bool> T CheckModeAvailableInLadder(uintptr_t gameMode) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D6ACBC))(this, gameMode);
	}
	template <typename T = int32_t> T GetModeHeightAvailableInLadder(Il2CppDictionary<int32_t, Il2CppString*>* gameTypeDic) {
		return ((T (*)(ChatQuickTeamController*, Il2CppDictionary<int32_t, Il2CppString*>*))(Il2CppBase() + 0x1D6AF60))(this, gameTypeDic);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D6B1BC))(this);
	}
	template <typename T = bool> T OnRoomTicketSettingChange(bool _) {
		return ((T (*)(ChatQuickTeamController*, bool))(Il2CppBase() + 0x1D6BA14))(this, _);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D6BBFC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D6C2EC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D70154))(this);
	}
	template <typename T = void> T RefreshAllUI() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D6C54C))(this);
	}
	template <typename T = void> T DestroyChilds(uintptr_t parentTrans) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D6A4B4))(this, parentTrans);
	}
	template <typename T = void> T CreatePlayerNumCells() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D713EC))(this);
	}
	template <typename T = Il2CppString*> T GetSpriteNameByType(int32_t type) {
		return ((T (*)(ChatQuickTeamController*, int32_t))(Il2CppBase() + 0x1D6A8C4))(this, type);
	}
	template <typename T = void> T OnModeCellClick(int32_t type, Il2CppString* name, Il2CppString* spriteName) {
		return ((T (*)(ChatQuickTeamController*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D71880))(this, type, name, spriteName);
	}
	template <typename T = void> T OnPlaylistCellClick(int32_t playlistId, Il2CppString* playlistName, Il2CppString* spriteName) {
		return ((T (*)(ChatQuickTeamController*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D71E98))(this, playlistId, playlistName, spriteName);
	}
	template <typename T = void> T OnPlayerNumCellClick(int32_t playerNum, Il2CppString* playerNumName, Il2CppString* spriteName) {
		return ((T (*)(ChatQuickTeamController*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D721EC))(this, playerNum, playerNumName, spriteName);
	}
	template <typename T = uintptr_t> T CreateCell(uintptr_t assetID, uintptr_t parent, void* OnCellClick, bool active) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x1D6A670))(this, assetID, parent, OnCellClick, active);
	}
	template <typename T = void> T OnModeBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7239C))(this);
	}
	template <typename T = void> T OnGameTypeBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D72510))(this);
	}
	template <typename T = void> T OnPlayerNumSelectBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D72AA4))(this);
	}
	template <typename T = void> T HideOtherPulldownMenu(uintptr_t listType) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D70008))(this, listType);
	}
	template <typename T = void> T OnHidePopupListBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D72D80))(this);
	}
	template <typename T = void> T ShowPulldonwMenu(uintptr_t list, uintptr_t btnArrowSprite, bool isShow, uintptr_t grid) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1D71BBC))(this, list, btnArrowSprite, isShow, grid);
	}
	template <typename T = void> T OnRankLevelAddBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D72E28))(this);
	}
	template <typename T = void> T OnRankLevelMinusBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7336C))(this);
	}
	template <typename T = void> T GetMaxMinRankLevel(uintptr_t minRankLevel, uintptr_t maxRankLevel, uintptr_t info) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D705DC))(this, minRankLevel, maxRankLevel, info);
	}
	template <typename T = void> T AdjustRankLevel() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73240))(this);
	}
	template <typename T = void> T OnLevelAddBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73788))(this);
	}
	template <typename T = void> T OnLevelMinusBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73898))(this);
	}
	template <typename T = void> T OnAddBtnPress(uintptr_t obj, bool State) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, bool))(Il2CppBase() + 0x1D739AC))(this, obj, State);
	}
	template <typename T = void> T OnAddBtnLongPress() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73A80))(this);
	}
	template <typename T = void> T OnSubBtnPress(uintptr_t obj, bool State) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, bool))(Il2CppBase() + 0x1D73BC8))(this, obj, State);
	}
	template <typename T = void> T OnSubBtnLongPress() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73C9C))(this);
	}
	template <typename T = void> T SetRangeRankLevel(uintptr_t curInfo) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D70914))(this, curInfo);
	}
	template <typename T = void> T AdjustLevel() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D707E8))(this);
	}
	template <typename T = void> T GetMaxMinLevel(uintptr_t minLevel, uintptr_t maxLevel, uintptr_t info) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D70204))(this, minLevel, maxLevel, info);
	}
	template <typename T = void> T OnChannelChange() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73DE8))(this);
	}
	template <typename T = void> T OnCancleBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D73FD8))(this);
	}
	template <typename T = void> T FinishClose() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7407C))(this);
	}
	template <typename T = void> T OnSendBtnClick() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D74224))(this);
	}
	template <typename T = void> T RefreshInviteCD() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D76C00))(this);
	}
	template <typename T = void> T CheckPVERoomSettingChange(uintptr_t mInviteInfo, uint32_t ticketCacheType) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t, uint32_t))(Il2CppBase() + 0x1D76780))(this, mInviteInfo, ticketCacheType);
	}
	template <typename T = void> T CheckPVPRoomSettingChange(uintptr_t mInviteInfo) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D76834))(this, mInviteInfo);
	}
	template <typename T = bool> T CheckIsUnLock() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D76224))(this);
	}
	template <typename T = void> T InitModeData() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D69DA4))(this);
	}
	template <typename T = bool> static T IsModeAvailable(int32_t mode) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1D633B4))(0, mode);
	}
	template <typename T = void> T InitPlaylist() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D69CAC))(this);
	}
	template <typename T = void> T OnToggleFeatureOnly() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D774E0))(this);
	}
	template <typename T = void> T OnToggleMicrophone() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D77658))(this);
	}
	template <typename T = void> T CheckFeatureOnlyState(Il2CppList<int32_t>* featureOnlyIds) {
		return ((T (*)(ChatQuickTeamController*, Il2CppList<int32_t>*))(Il2CppBase() + 0x1D77798))(this, featureOnlyIds);
	}
	template <typename T = bool> static T CheckIsMpFeatureRoom(int32_t playlistid, Il2CppList<uint32_t>* playLists) {
		return ((T (*)(void *, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x1D3B238))(0, playlistid, playLists);
	}
	template <typename T = bool> static T CheckIsBrFeatureRoom(int32_t playListId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1D3B6D4))(0, playListId);
	}
	template <typename T = void> T SetFromNewInviteTeamBtnFlag(bool flag) {
		return ((T (*)(ChatQuickTeamController*, bool))(Il2CppBase() + 0x1D77BAC))(this, flag);
	}
	template <typename T = void> T TLogCheckWhenSendInvite() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D76920))(this);
	}
	template <typename T = void> T Initm__0() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D77C54))(this);
	}
	template <typename T = bool> static T RefreshAllUIm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D77D7C))(0, it);
	}
	template <typename T = bool> T CreatePlayerNumCellsm__2(uintptr_t it) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D77E54))(this, it);
	}
	template <typename T = bool> T CreatePlayerNumCellsm__3(uintptr_t it) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D77E9C))(this, it);
	}
	template <typename T = bool> T OnPlayerNumSelectBtnClickm__4(uintptr_t it) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D77EE4))(this, it);
	}
	template <typename T = bool> T OnPlayerNumSelectBtnClickm__5(uintptr_t it) {
		return ((T (*)(ChatQuickTeamController*, uintptr_t))(Il2CppBase() + 0x1D77F2C))(this, it);
	}
	template <typename T = bool> static T GetMaxMinLevelm__6(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D77F74))(0, x);
	}
	template <typename T = bool> static T IsModeAvailablem__7(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D77FB4))(0, it);
	}
	template <typename T = bool> static T IsModeAvailablem__8(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D7808C))(0, it);
	}
	template <typename T = bool> static T IsModeAvailablem__9(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D78164))(0, it);
	}
	template <typename T = bool> static T IsModeAvailablem__A(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D7823C))(0, it);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D78314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7831C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D78324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7832C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D78334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ChatQuickTeamController*))(Il2CppBase() + 0x1D7833C))(this);
	}

};

}
