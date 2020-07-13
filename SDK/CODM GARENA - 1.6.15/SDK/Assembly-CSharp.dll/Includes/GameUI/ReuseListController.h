#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ReuseListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ReuseListController"));
	}

	template <typename T = uintptr_t> T& m_ReuseListView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ScrollView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_PendingWrapperToCreate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_TotalNumOfWrapperToCreate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& NumOfItemsToCreateInitially() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_NumInStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_Columns() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ItemCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& mCurrentSelectedIndex() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_PanelWidth() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_PanelHeight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_RealIndexInList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_DataSource() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_EnableClick() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& onDataListShowFinished() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& onDataListShowBackToBegin() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& onAllWrapControllersCreatedFiniehd() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& DisableShakeUseList() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ItemWrapperCaches() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectNextChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentSelectedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsVertical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onWrapInitializeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onWrapInitializeAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEndEdgeOfBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragExcessBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragInverseExcessBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitReuseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToPosEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestrictMovePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestrictMovePositionEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeReuseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataColumns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDataItemType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInitial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckScrollViewReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginPrepareChildControllers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateAWrapperController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWrapperCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}

	template <typename T = uintptr_t> T get_View() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC3CA0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC3CA8))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC3DB8))(this);
	}
	template <typename T = bool> T OnGamepadUp() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC3FA4))(this);
	}
	template <typename T = bool> T OnGamepadDown() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC47E4))(this);
	}
	template <typename T = bool> T OnGamepadLeft() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC4930))(this);
	}
	template <typename T = bool> T OnGamepadRight() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC4A7C))(this);
	}
	template <typename T = bool> T OnGamepadPickup() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC4BC8))(this);
	}
	template <typename T = bool> T OnGamepadMark() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC4E4C))(this);
	}
	template <typename T = void> T SelectNextChip(int32_t deltaIndex) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC40F4))(this, deltaIndex);
	}
	template <typename T = void> T UpdateCurrentSelectedIndex() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC57A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC5D04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC61C4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC65F8))(this);
	}
	template <typename T = bool> T IsVertical() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC669C))(this);
	}
	template <typename T = void> T onWrapInitializeItem(uintptr_t go, int32_t wrapIndex, int32_t realIndex, bool show) {
		return ((T (*)(ReuseListController*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3AC67C0))(this, go, wrapIndex, realIndex, show);
	}
	template <typename T = void> T onWrapInitializeAnim(uintptr_t go, int32_t wrapIndex) {
		return ((T (*)(ReuseListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3AC7258))(this, go, wrapIndex);
	}
	template <typename T = bool> T IsEndEdgeOfBounds() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC74E0))(this);
	}
	template <typename T = void> T OnDragExcessBounds() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC77E0))(this);
	}
	template <typename T = void> T OnDragInverseExcessBounds() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC7944))(this);
	}
	template <typename T = void> T InitReuseList(uintptr_t scrollView, uintptr_t dataSource, uintptr_t callback, bool enableClick) {
		return ((T (*)(ReuseListController*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3AC7A84))(this, scrollView, dataSource, callback, enableClick);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC7EB8))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC7F78))(this);
	}
	template <typename T = void> T ReloadData() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC8C04))(this);
	}
	template <typename T = void> T ResetPanelSize(bool resetScroll) {
		return ((T (*)(ReuseListController*, bool))(Il2CppBase() + 0x3AC8CEC))(this, resetScroll);
	}
	template <typename T = bool> T ScrollTo(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC51C0))(this, index);
	}
	template <typename T = bool> T ScrollToPos(Il2CppVector3 offsetPos) {
		return ((T (*)(ReuseListController*, Il2CppVector3))(Il2CppBase() + 0x3AC92B0))(this, offsetPos);
	}
	template <typename T = bool> T ScrollToPosEx(Il2CppVector3 offsetPos) {
		return ((T (*)(ReuseListController*, Il2CppVector3))(Il2CppBase() + 0x3AC967C))(this, offsetPos);
	}
	template <typename T = bool> T ScrollToEnd() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC9B68))(this);
	}
	template <typename T = Il2CppVector3> T RestrictMovePosition(Il2CppVector3 offsetPos) {
		return ((T (*)(ReuseListController*, Il2CppVector3))(Il2CppBase() + 0x3AC9124))(this, offsetPos);
	}
	template <typename T = Il2CppVector3> T RestrictMovePositionEx(Il2CppVector3 offsetPos) {
		return ((T (*)(ReuseListController*, Il2CppVector3))(Il2CppBase() + 0x3AC99DC))(this, offsetPos);
	}
	template <typename T = void> T ShakeReuseList() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC88CC))(this);
	}
	template <typename T = int32_t> T GetDataCount() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC68F0))(this);
	}
	template <typename T = int32_t> T GetDataItemWidth(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC9C08))(this, index);
	}
	template <typename T = int32_t> T GetDataColumns() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC8244))(this);
	}
	template <typename T = uintptr_t> T GetDataItem(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC9DAC))(this, index);
	}
	template <typename T = int32_t> T GetDataItemHeight(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC9EE4))(this, index);
	}
	template <typename T = uintptr_t> T GetDataItemType(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3ACA0B8))(this, index);
	}
	template <typename T = uintptr_t> T GetItemController(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3ACA39C))(this, index);
	}
	template <typename T = uintptr_t> T GetItemTransform(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3ACA4D8))(this, index);
	}
	template <typename T = bool> T OnItemClick(int32_t index) {
		return ((T (*)(ReuseListController*, int32_t))(Il2CppBase() + 0x3AC4D14))(this, index);
	}
	template <typename T = bool> T OnReuseListItemAction(int32_t index, int32_t action, uintptr_t obj) {
		return ((T (*)(ReuseListController*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3AC4FA8))(this, index, action, obj);
	}
	template <typename T = bool> T CheckInitial() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC80C8))(this);
	}
	template <typename T = bool> T CheckScrollViewReady() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC8EEC))(this);
	}
	template <typename T = void> T BeginPrepareChildControllers(int32_t numOfItemToCreateImmediately, bool NeedPrepareChildControllers) {
		return ((T (*)(ReuseListController*, int32_t, bool))(Il2CppBase() + 0x3AC83DC))(this, numOfItemToCreateImmediately, NeedPrepareChildControllers);
	}
	template <typename T = void> T CreateAWrapperController() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACAAF8))(this);
	}
	template <typename T = uintptr_t> T GetItemWrapperCache(uintptr_t go, int32_t wrapIndex) {
		return ((T (*)(ReuseListController*, uintptr_t, int32_t))(Il2CppBase() + 0x3AC6AB8))(this, go, wrapIndex);
	}
	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3AC8E48))(this);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(ReuseListController*, bool, bool, bool))(Il2CppBase() + 0x3ACAE84))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACB05C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACB064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACB06C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACB074))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ReuseListController*))(Il2CppBase() + 0x3ACB07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(ReuseListController*, bool, bool, bool))(Il2CppBase() + 0x3ACB084))(this, P0, P1, P2);
	}

};

}
