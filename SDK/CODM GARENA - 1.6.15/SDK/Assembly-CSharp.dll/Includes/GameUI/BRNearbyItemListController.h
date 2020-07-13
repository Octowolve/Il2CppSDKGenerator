#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemListController"));
	}

	template <typename T = int32_t> static T& CELL_TYPE_TITLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_TYPE_EMPTY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_TYPE_ITEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CELL_TYPE_ITEMEMPTY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_ListColumnCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ItemsList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<void*>*> T& m_ItemsDict() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<void*>*> T& m_ListData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_NearbyModule() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsRootEnable() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsBagOpen() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = Il2CppVector3> T& m_OldPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppRect> T& m_LimitRect() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& m_FlagPos() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsStopOpreation() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_CurrentShowItemCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_LastReloadShakeTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& ReloadTimeAllowShakeInterval() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_LastNearbyCount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_LastObNearbyCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_StartCheckOffCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint32_t> T& m_NeedCheckResetCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& CheckResetCountConfigFrame() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_StartPanelOffY() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& EnableResetListLog() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& m_IsItemDraging() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = Il2CppVector3> T& screenPos() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadFocusNearbyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitleByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCountByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ObFreeViewRefresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldReposition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetListLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForceResetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemListHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColumnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemDataT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowControllerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemDragDropStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemDragDropMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemDragDropRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDropItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRecommendHighLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbyModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUIFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNearbyListVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRootColliderEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRootColliderDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdateUIFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshDataList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshNearbyListVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDelSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeBagMenuState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleseStopOpreation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleDragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLimitRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NewGuideGetFirstItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}

	template <typename T = int32_t> T get_CurrentShowItemCount() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9F43C))(this);
	}
	template <typename T = bool> T get_IsBoxView() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9F444))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9B864))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9738C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRNearbyItemListController*, float))(Il2CppBase() + 0x2D9F894))(this, deltaTime);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9F934))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9FA90))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D97734))(this);
	}
	template <typename T = bool> T OnGamepadFocusNearbyList() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9FB40))(this);
	}
	template <typename T = bool> T OnGamepadOpen() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9FD5C))(this);
	}
	template <typename T = bool> T OnGamepadClose() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9FE88))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D983BC))(this);
	}
	template <typename T = void> T UpdateList() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA0104))(this);
	}
	template <typename T = Il2CppString*> T GetTitle() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D97518))(this);
	}
	template <typename T = Il2CppString*> T GetTitleByType(int32_t type) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2DA0568))(this, type);
	}
	template <typename T = void> T UpdateItemsList(Il2CppList<uintptr_t>* itemList) {
		return ((T (*)(BRNearbyItemListController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2DA0750))(this, itemList);
	}
	template <typename T = void> T AddItem(int32_t type, uintptr_t itemData) {
		return ((T (*)(BRNearbyItemListController*, int32_t, uintptr_t))(Il2CppBase() + 0x2DA1058))(this, type, itemData);
	}
	template <typename T = void> T ClearItem(int32_t type, uintptr_t itemData) {
		return ((T (*)(BRNearbyItemListController*, int32_t, uintptr_t))(Il2CppBase() + 0x2DA1184))(this, type, itemData);
	}
	template <typename T = int32_t> T GetItemCountByType(int32_t type) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2DA137C))(this, type);
	}
	template <typename T = void> T ClearItems() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA0F08))(this);
	}
	template <typename T = void> T InitItemList() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA14D0))(this);
	}
	template <typename T = void> T ReloadItems(bool RefreshView) {
		return ((T (*)(BRNearbyItemListController*, bool))(Il2CppBase() + 0x2D9A054))(this, RefreshView);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D99970))(this);
	}
	template <typename T = void> T ObFreeViewRefresh() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9C088))(this);
	}
	template <typename T = void> T RefreshTitle(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BRNearbyItemListController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2D9C494))(this, list);
	}
	template <typename T = void> T RefreshUI() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9C538))(this);
	}
	template <typename T = bool> T ShouldReposition(int32_t newCount, int32_t oldCount, int32_t edgeValue) {
		return ((T (*)(BRNearbyItemListController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2DA16F8))(this, newCount, oldCount, edgeValue);
	}
	template <typename T = void> T ResetListLog(uintptr_t logType, Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2DA1828))(this, logType, msg, paras);
	}
	template <typename T = void> T CheckForceResetList() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA194C))(this);
	}
	template <typename T = int32_t> T GetItemListHeight() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA2188))(this);
	}
	template <typename T = int32_t> T GetColumnCount() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA2368))(this);
	}
	template <typename T = int32_t> T GetItemsCount() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA2408))(this);
	}
	template <typename T = uintptr_t> T GetItemData(int32_t index) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2DA24DC))(this, index);
	}
	template <typename T = uintptr_t> T GetItemDataT(int32_t index) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2DA2644))(this, index);
	}
	template <typename T = int32_t> T GetItemWidth(int32_t index) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2D9A260))(this, index);
	}
	template <typename T = int32_t> T GetItemHeight(int32_t index) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2DA2768))(this, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(int32_t index) {
		return ((T (*)(BRNearbyItemListController*, int32_t))(Il2CppBase() + 0x2D9C128))(this, index);
	}
	template <typename T = bool> T OnReuseListItemClick(uintptr_t list, int32_t index) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t, int32_t))(Il2CppBase() + 0x2DA28DC))(this, list, index);
	}
	template <typename T = void> T OnReuseListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t, int32_t))(Il2CppBase() + 0x2DA2A68))(this, list, userContext);
	}
	template <typename T = bool> T OnReuseListItemAction(uintptr_t list, uintptr_t data) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DA2B1C))(this, list, data);
	}
	template <typename T = void> T OnItemDragDropStart(uintptr_t data) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA2D7C))(this, data);
	}
	template <typename T = void> T OnItemDragDropMove(uintptr_t data) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA2E30))(this, data);
	}
	template <typename T = void> T OnItemDragDropRelease(uintptr_t data) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA2ED0))(this, data);
	}
	template <typename T = void> T OnDropItem() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA301C))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9B918))(this);
	}
	template <typename T = void> T OnOpenButtonClick() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9BAB0))(this);
	}
	template <typename T = void> T ShowItemList(bool Show) {
		return ((T (*)(BRNearbyItemListController*, bool))(Il2CppBase() + 0x2D98FD0))(this, Show);
	}
	template <typename T = void> T ShowRecommendHighLight(bool show, bool force) {
		return ((T (*)(BRNearbyItemListController*, bool, bool))(Il2CppBase() + 0x2D9A924))(this, show, force);
	}
	template <typename T = void> T ShowView(bool IsActive) {
		return ((T (*)(BRNearbyItemListController*, bool))(Il2CppBase() + 0x2D9BD6C))(this, IsActive);
	}
	template <typename T = uintptr_t> T GetNearbyModule() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9B110))(this);
	}
	template <typename T = void> T UpdateUIFrame(bool normalChanged, bool boxChanged) {
		return ((T (*)(BRNearbyItemListController*, bool, bool))(Il2CppBase() + 0x2D9C7B8))(this, normalChanged, boxChanged);
	}
	template <typename T = void> T RefreshDataList(uintptr_t type) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2D9C3DC))(this, type);
	}
	template <typename T = void> T RefreshNearbyListVisible() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9C98C))(this);
	}
	template <typename T = void> T SetRootColliderEnabled() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA2F84))(this);
	}
	template <typename T = void> T SetRootColliderDisabled() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9F9F8))(this);
	}
	template <typename T = void> T OnUpdateUIFrame(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA317C))(this, msg);
	}
	template <typename T = void> T OnRefreshDataList(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA3334))(this, msg);
	}
	template <typename T = void> T OnRefreshNearbyListVisible(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA3470))(this, msg);
	}
	template <typename T = void> T OnAddSign(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA3528))(this, msg);
	}
	template <typename T = void> T OnDelSign(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA35E0))(this, msg);
	}
	template <typename T = void> T ChangeBagMenuState(uintptr_t msg) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2D9CC10))(this, msg);
	}
	template <typename T = void> T SetUIState(bool show) {
		return ((T (*)(BRNearbyItemListController*, bool))(Il2CppBase() + 0x2DA3698))(this, show);
	}
	template <typename T = void> T OnTitleDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2DA3D94))(this, go, delta);
	}
	template <typename T = void> T ReleseStopOpreation() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA3C70))(this);
	}
	template <typename T = void> T OnTitleDragEnd(uintptr_t go) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA40C4))(this, go);
	}
	template <typename T = void> T OnTitleDragStart(uintptr_t go) {
		return ((T (*)(BRNearbyItemListController*, uintptr_t))(Il2CppBase() + 0x2DA41E0))(this, go);
	}
	template <typename T = void> T InitLimitRect() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9F44C))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2D9D010))(this);
	}
	template <typename T = uintptr_t> T NewGuideGetFirstItem() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA4380))(this);
	}
	template <typename T = int32_t> static T UpdateItemsListm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DA47BC))(0, x, y);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA4964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA496C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA4974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA497C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA4984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRNearbyItemListController*))(Il2CppBase() + 0x2DA498C))(this);
	}

};

}
