#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class EasyListController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "EasyListController"));
	}

	template <typename T = uintptr_t> T& m_EasyListView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ScrollView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ScrollBar() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_Columns() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_ItemWidth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_ItemHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_PanelWidth() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_PanelHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& mHorizontal() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_RealIndexInList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_ItemControllerType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_EnableClick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_EnableColider() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = bool> T& m_DisableClickSound() {
		return *(T*)((uintptr_t)this + 0x72);
	}
	template <typename T = bool> T& m_ConsiderChildren() {
		return *(T*)((uintptr_t)this + 0x73);
	}
	template <typename T = int32_t> T& m_ListGroup() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& onDataListShowFinished() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& onDataListShowBackToBegin() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& bAlignWithScrollView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_BarLengthAdjust() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_Panel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& InitTimer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& NumChildDepends() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ItemWrapperCaches() {
		return *(T*)((uintptr_t)this + 0x94);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_onWrapInitializeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEndEdgeOfBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragExcessBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragInverseExcessBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_InitEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdateScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableCenterOnChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentRealIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollToBottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCellCanSee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEasyListContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshEasyListContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeEasyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetItemController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInitial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareChildControllers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWrapperCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddUITimeGroupsDispatcher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBottomVisibleIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableScrollViewIfNotFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = int32_t> T get_ListGroup() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F7B5C))(this);
	}
	template <typename T = void> T set_ListGroup(int32_t value) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46F7B64))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F7B6C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F7C7C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F7D40))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F7F00))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F803C))(this);
	}
	template <typename T = void> T onWrapInitializeItem(uintptr_t go, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(EasyListController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x46F80E0))(this, go, wrapIndex, realIndex);
	}
	template <typename T = bool> T IsEndEdgeOfBounds() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F8694))(this);
	}
	template <typename T = void> T OnDragExcessBounds() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F8994))(this);
	}
	template <typename T = void> T OnDragInverseExcessBounds() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F8B4C))(this);
	}
	template <typename T = void> T InitEasyList(uintptr_t scrollView, int32_t itemHeight, uintptr_t callback, int32_t columns, bool enableClick, bool enableColider, uintptr_t scrollBar, int32_t barLengthAdjust, int32_t listGroup, bool disableClickSound, bool bConsiderChildren) {
		return ((T (*)(EasyListController*, uintptr_t, int32_t, uintptr_t, int32_t, bool, bool, uintptr_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x1E82554))(this, scrollView, itemHeight, callback, columns, enableClick, enableColider, scrollBar, barLengthAdjust, listGroup, disableClickSound, bConsiderChildren);
	}
	template <typename T = void> T InitEasyList_1(uintptr_t scrollView, int32_t itemWidth, int32_t itemHeight, uintptr_t callback, int32_t columns, bool enableClick, bool enableColider, uintptr_t scrollBar, int32_t barLengthAdjust, int32_t listGroup, bool disableClickSound, bool bConsiderChildren) {
		return ((T (*)(EasyListController*, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, bool, bool, uintptr_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x1E82814))(this, scrollView, itemWidth, itemHeight, callback, columns, enableClick, enableColider, scrollBar, barLengthAdjust, listGroup, disableClickSound, bConsiderChildren);
	}
	template <typename T = void> T InitEasyList_2(uintptr_t T, uintptr_t scrollView, int32_t itemWidth, int32_t itemHeight, uintptr_t callback, int32_t columns, bool enableClick, bool enableColider, uintptr_t scrollBar, int32_t barLengthAdjust, int32_t listGroup, bool disableClickSound, bool considerChildren) {
		return ((T (*)(EasyListController*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, bool, bool, uintptr_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x46F8C8C))(this, T, scrollView, itemWidth, itemHeight, callback, columns, enableClick, enableColider, scrollBar, barLengthAdjust, listGroup, disableClickSound, considerChildren);
	}
	template <typename T = void> T SetEasyListData(Il2CppList<uintptr_t>* dataList, int32_t userContext, bool resetScroll) {
		return ((T (*)(EasyListController*, Il2CppList<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x1E83D08))(this, dataList, userContext, resetScroll);
	}
	template <typename T = void> T SetEasyListData_1(Il2CppList<uintptr_t>* dataList, int32_t userContext, bool resetScroll) {
		return ((T (*)(EasyListController*, Il2CppList<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x46F9814))(this, dataList, userContext, resetScroll);
	}
	template <typename T = void> T LateUpdateScrollView() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FA624))(this);
	}
	template <typename T = void> T EnableCenterOnChild() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FA70C))(this);
	}
	template <typename T = int32_t> T GetCurrentRealIndex() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FA8D0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FAAA4))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FAB90))(this);
	}
	template <typename T = void> T ResetPanelSize(bool resetScroll) {
		return ((T (*)(EasyListController*, bool))(Il2CppBase() + 0x46FAC6C))(this, resetScroll);
	}
	template <typename T = bool> T ScrollTo(int32_t index, bool force) {
		return ((T (*)(EasyListController*, int32_t, bool))(Il2CppBase() + 0x46FA160))(this, index, force);
	}
	template <typename T = void> T ScrollToIndex(int32_t index, bool bDire, bool slerp) {
		return ((T (*)(EasyListController*, int32_t, bool, bool))(Il2CppBase() + 0x46FADB4))(this, index, bDire, slerp);
	}
	template <typename T = void> T ScrollToBottom() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FB530))(this);
	}
	template <typename T = void> T CheckCellCanSee(int32_t index) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46FB800))(this, index);
	}
	template <typename T = void> T RefreshEasyListContent(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(EasyListController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1E82AF4))(this, dataList);
	}
	template <typename T = void> T RefreshEasyListContent_1(uintptr_t type, uintptr_t dataList) {
		return ((T (*)(EasyListController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46FBAC0))(this, type, dataList);
	}
	template <typename T = void> T ShakeEasyList() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FC030))(this);
	}
	template <typename T = uintptr_t> T GetItemData(int32_t index) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46FC1F4))(this, index);
	}
	template <typename T = uintptr_t> T GetItemController(int32_t index) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46FC3C4))(this, index);
	}
	template <typename T = uintptr_t> T GetItemController_1(void* match) {
		return ((T (*)(EasyListController*, void*))(Il2CppBase() + 0x3354194))(this, match);
	}
	template <typename T = uintptr_t> T GetItemTransform(int32_t index) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46FC4FC))(this, index);
	}
	template <typename T = void> T OnItemClick(uintptr_t controller, int32_t index) {
		return ((T (*)(EasyListController*, uintptr_t, int32_t))(Il2CppBase() + 0x46FC6A0))(this, controller, index);
	}
	template <typename T = void> T SetItemsCount(int32_t count, bool resetScroll) {
		return ((T (*)(EasyListController*, int32_t, bool))(Il2CppBase() + 0x46FA028))(this, count, resetScroll);
	}
	template <typename T = bool> T CheckInitial() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F9EB8))(this);
	}
	template <typename T = void> T PrepareChildControllers() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46F9464))(this);
	}
	template <typename T = uintptr_t> T GetItemWrapperCache(uintptr_t go, int32_t wrapIndex) {
		return ((T (*)(EasyListController*, uintptr_t, int32_t))(Il2CppBase() + 0x46F8388))(this, go, wrapIndex);
	}
	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FCA18))(this);
	}
	template <typename T = bool> T IsSelected(int32_t index) {
		return ((T (*)(EasyListController*, int32_t))(Il2CppBase() + 0x46FCAE8))(this, index);
	}
	template <typename T = void> T ResetScrollView() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FCB90))(this);
	}
	template <typename T = uintptr_t> T GetScrollView() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FCC4C))(this);
	}
	template <typename T = void> T AddUITimeGroupsDispatcher() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FCCEC))(this);
	}
	template <typename T = int32_t> T GetBottomVisibleIndex(bool bStrict) {
		return ((T (*)(EasyListController*, bool))(Il2CppBase() + 0x46FCE28))(this, bStrict);
	}
	template <typename T = void> T DisableScrollViewIfNotFill(bool calculatedBounds) {
		return ((T (*)(EasyListController*, bool))(Il2CppBase() + 0x46FD144))(this, calculatedBounds);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FD3D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FD3DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FD3E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FD3EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EasyListController*))(Il2CppBase() + 0x46FD3F4))(this);
	}

};

}
