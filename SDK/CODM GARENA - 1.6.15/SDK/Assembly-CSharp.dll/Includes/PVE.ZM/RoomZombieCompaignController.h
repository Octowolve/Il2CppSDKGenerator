#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieCompaignController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieCompaignController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DifficultyList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ChapterList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LevelList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_SelectLevelId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& ITEM_WIDTH() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& ITEM_HEIGHT() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_ZombieDS() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDifficultyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDifficultyToggleValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDifficultyNormalClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDifficultyHardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDifficultyHellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshChapterInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectChapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevelInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecommendSpi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAssetIDForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureCellForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DidSelectRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RowNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HeightForRow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_DidSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorController_En_Expand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uintptr_t> T get_ZombieDS() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x4058324))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x40583D4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x4058900))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x40589A4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x4058E00))(this);
	}
	template <typename T = void> T OnGetRefreshView(uintptr_t msg) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x4059204))(this, msg);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x40592BC))(this);
	}
	template <typename T = void> T SetDifficultyInfo() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405940C))(this);
	}
	template <typename T = void> T SetDifficultyToggleValue(int32_t difficultyLevelId) {
		return ((T (*)(RoomZombieCompaignController*, int32_t))(Il2CppBase() + 0x4059E18))(this, difficultyLevelId);
	}
	template <typename T = void> T OnBtnDifficultyNormalClick() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405A408))(this);
	}
	template <typename T = void> T OnBtnDifficultyHardClick() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405A594))(this);
	}
	template <typename T = void> T OnBtnDifficultyHellClick() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405A720))(this);
	}
	template <typename T = void> T RefreshChapterInfo() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x4059F34))(this);
	}
	template <typename T = void> T SelectChapter(int32_t indexRow) {
		return ((T (*)(RoomZombieCompaignController*, int32_t))(Il2CppBase() + 0x405A9C0))(this, indexRow);
	}
	template <typename T = void> T RefreshLevelInfo(int32_t index) {
		return ((T (*)(RoomZombieCompaignController*, int32_t))(Il2CppBase() + 0x405AAD0))(this, index);
	}
	template <typename T = void> T SetRecommendSpi() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405AD1C))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405B024))(this);
	}
	template <typename T = uintptr_t> T CellAssetIDForRow(uintptr_t table, int32_t row) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, int32_t))(Il2CppBase() + 0x405B57C))(this, table, row);
	}
	template <typename T = void> T ConfigureCellForRow(uintptr_t table, uintptr_t cell, int32_t row) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x405B640))(this, table, cell, row);
	}
	template <typename T = void> T DidSelectRow(uintptr_t table, int32_t row, Il2CppVector3 worldPos) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x405B838))(this, table, row, worldPos);
	}
	template <typename T = int32_t> T RowNumber(uintptr_t table) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405BA78))(this, table);
	}
	template <typename T = float> T HeightForRow(uintptr_t table, int32_t row) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, int32_t))(Il2CppBase() + 0x405BB54))(this, table, row);
	}
	template <typename T = bool> T GameUI_Room_IRoomInfoSelectorController_En_DidSelect(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, int32_t))(Il2CppBase() + 0x405BC1C))(this, selector, row);
	}
	template <typename T = void> T GameUI_Room_IRoomInfoSelectorController_En_Expand(uintptr_t selector, bool bExpand) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, bool))(Il2CppBase() + 0x405BDE4))(this, selector, bExpand);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellNumber(uintptr_t selector) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405BEF0))(this, selector);
	}
	template <typename T = uintptr_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellData(uintptr_t selector, int32_t row) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t, int32_t))(Il2CppBase() + 0x405C088))(this, selector, row);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_OuterGlowHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405C274))(this, selector);
	}
	template <typename T = int32_t> T GameUI_Room_IRoomInfoSelectorDataSource_En_CellHeight(uintptr_t selector) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405C3E4))(this, selector);
	}
	template <typename T = bool> T SetDifficultyInfom__0(uintptr_t it) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405C48C))(this, it);
	}
	template <typename T = bool> T SetRecommendSpim__1(uintptr_t it) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405C4A0))(this, it);
	}
	template <typename T = bool> T OnBtnPlayClickm__2(uintptr_t it) {
		return ((T (*)(RoomZombieCompaignController*, uintptr_t))(Il2CppBase() + 0x405C4E8))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C530))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C53C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitView() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C544))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlayClick() {
		return ((T (*)(RoomZombieCompaignController*))(Il2CppBase() + 0x405C548))(this);
	}

};

}
