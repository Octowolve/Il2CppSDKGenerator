#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpPlaylistSelectorWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpPlaylistSelectorWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_PlaylistSelectorCtr() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_MapSelectorCtr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_PlaylistGroup() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_MpPlaylistList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ConfigList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_PlaylistList() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_SelectNumList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& m_Tip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlaylistData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ComputeAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeAllPlaylistCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputePlaylistCurrentStateByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeTablistIsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstLevelTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFirstLevelTabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFirstLevelTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TlogTabClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnPlaylistInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordMultiplePlaylistConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomSetting_Match_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomSetting_Ladder_Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomSetting_Ladder_Single() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomSetting_Ladder_Multiple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentPlaylistValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomSetting_Match() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnModeMultipleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnModeSingleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultMapSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMPModeSelectTypeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlaylistClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMapClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSelectAllClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSelectAllBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSelectAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPlaylistSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaylistSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlaylistItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSatisfiedPlayerLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211B76C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211B81C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211B928))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211B9CC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211BF6C))(this);
	}
	template <typename T = void> T UpdateView(int32_t adaptWidth) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x211C6E4))(this, adaptWidth);
	}
	template <typename T = void> T InitView(uintptr_t matchType) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x211C980))(this, matchType);
	}
	template <typename T = void> T InitPlaylistData(uintptr_t matchType) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x211CE9C))(this, matchType);
	}
	template <typename T = void> T ComputeAllData() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211F8E0))(this);
	}
	template <typename T = void> T ComputeAllData_1(double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t ladderRank) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, double, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2120D58))(this, serverTime, dateTime, dayOfWeek, levelInfo, ladderRank);
	}
	template <typename T = void> T ComputeAllPlaylistCurrentState(double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t ladderRank) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, double, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2120E70))(this, serverTime, dateTime, dayOfWeek, levelInfo, ladderRank);
	}
	template <typename T = void> T ComputePlaylistCurrentStateByIndex(int32_t tabIndex, double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t ladderRank) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t, double, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2121160))(this, tabIndex, serverTime, dateTime, dayOfWeek, levelInfo, ladderRank);
	}
	template <typename T = void> T ComputeTablistIsValid() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2120FF4))(this);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x21215E4))(this);
	}
	template <typename T = void> T SetFirstLevelTabs() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211E424))(this);
	}
	template <typename T = void> T RefreshFirstLevelTabs() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2121C98))(this);
	}
	template <typename T = void> T InitBtnView() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211F06C))(this);
	}
	template <typename T = bool> T OnFirstLevelTabClick(int32_t playlistType, bool bForce, bool bRedDotChange) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t, bool, bool))(Il2CppBase() + 0x211F258))(this, playlistType, bForce, bRedDotChange);
	}
	template <typename T = void> T TlogTabClick(int32_t playlistType) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2122398))(this, playlistType);
	}
	template <typename T = void> T SetBtnPlaylistInfo() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2122618))(this);
	}
	template <typename T = void> T SetBtnMapInfo() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x21236F4))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2124884))(this);
	}
	template <typename T = void> T RecordMultiplePlaylistConfirm() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212730C))(this);
	}
	template <typename T = void> T ChangeRoomSetting_Match_Multiple() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2125A6C))(this);
	}
	template <typename T = void> T ChangeRoomSetting_Ladder_Random() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x21259D4))(this);
	}
	template <typename T = void> T ChangeRoomSetting_Ladder_Single() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2124A18))(this);
	}
	template <typename T = void> T ChangeRoomSetting_Ladder_Multiple() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2125174))(this);
	}
	template <typename T = bool> T IsCurrentPlaylistValid(int32_t tabIndex, int32_t playlistIndex) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t, int32_t))(Il2CppBase() + 0x212742C))(this, tabIndex, playlistIndex);
	}
	template <typename T = void> T ChangeRoomSetting_Match() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2126104))(this);
	}
	template <typename T = void> T OnBtnModeMultipleClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2127C58))(this);
	}
	template <typename T = void> T OnBtnModeSingleClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x21280CC))(this);
	}
	template <typename T = void> T SetDefaultMapSelect(uintptr_t firstLevelTab) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x2128428))(this, firstLevelTab);
	}
	template <typename T = void> T RefreshMPModeSelectTypeState(int32_t selectType) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x21219F8))(this, selectType);
	}
	template <typename T = void> T OnBtnPlaylistClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211C360))(this);
	}
	template <typename T = void> T OnBtnMapClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2128A4C))(this);
	}
	template <typename T = void> T OnBtnSelectAllClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x2129588))(this);
	}
	template <typename T = void> T RefreshSelectAllBtnState() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x211F6D0))(this);
	}
	template <typename T = bool> T IsSelectAll(uintptr_t selectNum) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x21205CC))(this, selectNum);
	}
	template <typename T = void> T SetAllPlaylistSelect(bool bSelectAll) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, bool))(Il2CppBase() + 0x2120048))(this, bSelectAll);
	}
	template <typename T = void> T SetPlaylistSelect(Il2CppList<uint32_t>* PlaylistList) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x211FBCC))(this, PlaylistList);
	}
	template <typename T = void> T SetBtnView(uintptr_t btnType, bool bCanNotSelectTipShow) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t, bool))(Il2CppBase() + 0x21285E8))(this, btnType, bCanNotSelectTipShow);
	}
	template <typename T = void> T OnPlaylistItemClick(uintptr_t message) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x2129BE0))(this, message);
	}
	template <typename T = void> T OnMapItemClick(uintptr_t message) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212B6B8))(this, message);
	}
	template <typename T = bool> T IsSatisfiedPlayerLimit(uintptr_t playlistInfo) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x2127B4C))(this, playlistInfo);
	}
	template <typename T = bool> T InitViewm__0(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C3F0))(this, it);
	}
	template <typename T = int32_t> T ComputePlaylistCurrentStateByIndexm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x212C42C))(this, a, b);
	}
	template <typename T = bool> T RefreshTimerm__2(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C5A0))(this, it);
	}
	template <typename T = bool> T RefreshFirstLevelTabsm__3(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C5DC))(this, it);
	}
	template <typename T = bool> T ChangeRoomSetting_Ladder_Multiplem__4(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C618))(this, it);
	}
	template <typename T = bool> static T ChangeRoomSetting_Matchm__5(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x212C654))(0, it);
	}
	template <typename T = bool> T OnBtnModeSingleClickm__6(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C674))(this, it);
	}
	template <typename T = bool> T OnBtnPlaylistClickm__7(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C6B0))(this, it);
	}
	template <typename T = bool> T OnBtnSelectAllClickm__8(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C6EC))(this, it);
	}
	template <typename T = bool> T OnBtnSelectAllClickm__9(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C728))(this, it);
	}
	template <typename T = bool> T SetAllPlaylistSelectm__A(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C764))(this, it);
	}
	template <typename T = bool> T OnPlaylistItemClickm__B(uintptr_t it) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, uintptr_t))(Il2CppBase() + 0x212C7A0))(this, it);
	}
	template <typename T = bool> static T OnPlaylistItemClickm__C(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x212C7DC))(0, it);
	}
	template <typename T = bool> static T OnMapItemClickm__D(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x212C7FC))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212C81C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212C824))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212C82C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212C834))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(int32_t P0) {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x212C83C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(RoomSpvpPlaylistSelectorWindowController*))(Il2CppBase() + 0x212C844))(this);
	}

};

}
