#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class WorkShopMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "WorkShopMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CurrentShowList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ValidList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RefreshTimer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ServerTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_Row() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_Column() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ModeDetailFixedCtr() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_SpvpPlaylistDetailCtr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& m_ShowCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_WorkShopDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LobbyExpBuffDS() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_BrDS() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_SpvpDS() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleValidList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleDataIsChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyDataToCurrentShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshFlwoGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ColumnNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WidthForColumn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyModeDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseSpvpPlaylistDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModeDetailFixedView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModeDetailMpView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideModeDetailView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_WorkShopDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13638))(this);
	}
	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC136E8))(this);
	}
	template <typename T = uintptr_t> T get_LobbyExpBuffDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13798))(this);
	}
	template <typename T = uintptr_t> T get_BrDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13848))(this);
	}
	template <typename T = uintptr_t> T get_SpvpDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC138F8))(this);
	}
	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC139A8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13A58))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13C4C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC13EB0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC14254))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC14334))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC14160))(this);
	}
	template <typename T = void> T HandleValidList() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC143C8))(this);
	}
	template <typename T = bool> T HandleDataIsChange() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC146FC))(this);
	}
	template <typename T = void> T CopyDataToCurrentShow() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC148C0))(this);
	}
	template <typename T = void> T RefreshFlwoGrid(bool bForceChange) {
		return ((T (*)(WorkShopMainController*, bool))(Il2CppBase() + 0xC14A40))(this, bForceChange);
	}
	template <typename T = void> T ConfigureCellForPath(uintptr_t grid, uintptr_t cell, uintptr_t path) {
		return ((T (*)(WorkShopMainController*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xC14E64))(this, grid, cell, path);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t grid, int32_t column) {
		return ((T (*)(WorkShopMainController*, uintptr_t, int32_t))(Il2CppBase() + 0xC15264))(this, grid, column);
	}
	template <typename T = int32_t> T ColumnNumber(uintptr_t grid, int32_t row) {
		return ((T (*)(WorkShopMainController*, uintptr_t, int32_t))(Il2CppBase() + 0xC15490))(this, grid, row);
	}
	template <typename T = uintptr_t> T CellAssetIDForPath(uintptr_t table, uintptr_t path) {
		return ((T (*)(WorkShopMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC155B0))(this, table, path);
	}
	template <typename T = float> T HeightForRow(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(WorkShopMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xC158A8))(this, grid, row, column);
	}
	template <typename T = float> T WidthForColumn(uintptr_t grid, int32_t row, int32_t column) {
		return ((T (*)(WorkShopMainController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xC15B1C))(this, grid, row, column);
	}
	template <typename T = void> T DidSelectRow(uintptr_t grid, uintptr_t path) {
		return ((T (*)(WorkShopMainController*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC15BF0))(this, grid, path);
	}
	template <typename T = void> T OnNotifyModeDetailClick(uintptr_t message) {
		return ((T (*)(WorkShopMainController*, uintptr_t))(Il2CppBase() + 0xC15E80))(this, message);
	}
	template <typename T = void> T OnNotifyCloseSpvpPlaylistDetail(uintptr_t message) {
		return ((T (*)(WorkShopMainController*, uintptr_t))(Il2CppBase() + 0xC164F0))(this, message);
	}
	template <typename T = void> T ShowModeDetailFixedView(uintptr_t data) {
		return ((T (*)(WorkShopMainController*, uintptr_t))(Il2CppBase() + 0xC16010))(this, data);
	}
	template <typename T = void> T ShowModeDetailMpView(uintptr_t data) {
		return ((T (*)(WorkShopMainController*, uintptr_t))(Il2CppBase() + 0xC161F0))(this, data);
	}
	template <typename T = void> T HideModeDetailView() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC163F4))(this);
	}
	template <typename T = int32_t> static T HandleValidListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xC16B9C))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC16C68))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC16C70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC16C78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(WorkShopMainController*))(Il2CppBase() + 0xC16C80))(this);
	}

};

}
