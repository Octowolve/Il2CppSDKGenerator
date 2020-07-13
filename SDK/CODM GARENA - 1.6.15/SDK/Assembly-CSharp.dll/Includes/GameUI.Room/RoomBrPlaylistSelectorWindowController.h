#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomBrPlaylistSelectorWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomBrPlaylistSelectorWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_EasylistCtr() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllDataList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TempDataList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ShowDataList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_ShowIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_MatchTeamType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_bRedDot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SeasonState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = double> T& m_ServerTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_BrLadderDS() {
		return *(T*)((uintptr_t)this + 0x94);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectPlaylistDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlaylistData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPPMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchTeamType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSingleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSquadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnFppClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnTppClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshIsSeasonOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIsShowSeasonOffShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF6BDC))(this);
	}
	template <typename T = uintptr_t> T get_BrLadderDS() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF6C8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF6D3C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF6E44))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF6EE8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF7298))(this);
	}
	template <typename T = void> T UpdateView(int32_t adaptWidth) {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2CF76C8))(this, adaptWidth);
	}
	template <typename T = void> T SetSelectPlaylistDesc() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF810C))(this);
	}
	template <typename T = void> T InitPlaylistData() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF7B88))(this);
	}
	template <typename T = void> T RefreshTimer() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF8484))(this);
	}
	template <typename T = void> T HandleData() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF8930))(this);
	}
	template <typename T = void> T SetPPMode() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF9064))(this);
	}
	template <typename T = void> T SetMatchTeamType() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF944C))(this);
	}
	template <typename T = void> T OnBtnSingleClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF9904))(this);
	}
	template <typename T = void> T OnBtnDoubleClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF9B68))(this);
	}
	template <typename T = void> T OnBtnSquadClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF9DCC))(this);
	}
	template <typename T = void> T OnBtnFppClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFA030))(this);
	}
	template <typename T = void> T OnBtnTppClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFA294))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFA4F8))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2CFA94C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2CFAB50))(this, list, userContext);
	}
	template <typename T = void> T RefreshIsSeasonOff() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CF8858))(this);
	}
	template <typename T = void> T SetIsShowSeasonOffShowed() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAC04))(this);
	}
	template <typename T = bool> static T InitPlaylistDatam__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2CFAD9C))(0, it);
	}
	template <typename T = int32_t> static T RefreshTimerm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2CFADBC))(0, a, b);
	}
	template <typename T = bool> static T HandleDatam__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2CFAE70))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAE90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAE94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAE98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAE9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(int32_t P0) {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*, int32_t))(Il2CppBase() + 0x2CFAEA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(RoomBrPlaylistSelectorWindowController*))(Il2CppBase() + 0x2CFAEA4))(this);
	}

};

}
